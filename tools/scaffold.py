#!/usr/bin/env python3
import collections
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from dr1lib import BLOCK_MARKER, MARKER, ROOT, STUB_MARKER as STUB

from coffobj import plain

SHARED_THRESHOLD = 3


def safe(name):
    return re.sub(r"\W+", "_", name).strip("_")


def load_modules():
    rules, crt_start = [], 0x5C6000
    for line in (ROOT / "config" / "modules.tsv").read_text().splitlines():
        if not line.strip() or line.startswith("#"):
            continue
        key, value = line.split("\t")[:2]
        if key == "@crt_start":
            crt_start = int(value, 16)
        else:
            rules.append((re.compile(key), value))
    return rules, crt_start


def module_of(name, rules):
    for pattern, folder in rules:
        if pattern.match(name):
            return folder
    return "game"


def load_functions():
    functions = {}
    with open(ROOT / "config" / "functions.tsv") as f:
        next(f)
        for line in f:
            cols = line.rstrip("\n").split("\t")
            functions[int(cols[0], 16)] = (int(cols[2]), cols[3])
    return functions


def load_classes():
    classes = []
    for line in (ROOT / "config" / "classes.tsv").read_text().splitlines():
        if line.startswith("#") or not line.strip():
            continue
        cols = line.split("\t")
        name, vtable, bases, methods = cols[:4]
        offset = int(cols[4]) if len(cols) > 4 else 0
        classes.append((name, int(vtable, 16), [b for b in bases.split(",") if b],
                        [int(m, 16) for m in methods.split(",") if m], offset))
    return classes


def load_symbols():
    names = {}
    path = ROOT / "config" / "symbols.tsv"
    for line in path.read_text().splitlines():
        if line.startswith("#") or not line.strip():
            continue
        cols = line.split("\t")
        if len(cols) > 2 and cols[2] == "alias":
            continue
        names[int(cols[0], 16)] = cols[1]
    return names


def scan_sources():
    done, taken, deletable, homes = {}, set(), [], {}
    for path in (ROOT / "src").rglob("*.cpp"):
        lines = path.read_text().splitlines()
        functions = [int(m.group(1), 16) for m in map(MARKER.match, lines) if m]
        stubs = [int(m.group(1), 16) for m in map(STUB.match, lines) if m]
        for address in stubs + [int(m.group(1), 16) for m in map(BLOCK_MARKER.match, lines) if m]:
            homes[address] = path.relative_to(ROOT / "src")
        for address in functions:
            done[address] = path.relative_to(ROOT / "src")
        if functions:
            taken.update(functions + stubs)
        elif stubs:
            deletable.append(path)
    return done, taken, deletable, homes


STUB_BLOCK = re.compile(r"// STUB: (0x[0-9A-Fa-f]+) [^\n]*\n[^\n]*\n\{\n\}\n\n?")


def drop_finished_stubs(done):
    removed = 0
    for path in (ROOT / "src").rglob("*.cpp"):
        text = path.read_text()
        defined = {int(m.group(1), 16) for m in map(MARKER.match, text.splitlines()) if m}

        def keep(match):
            nonlocal removed
            address = int(match.group(1), 16)
            if address in done and address not in defined:
                removed += 1
                return ""
            return match.group(0)

        updated = STUB_BLOCK.sub(keep, text)
        if updated != text:
            path.write_text(updated)
    return removed


def identifier(name):
    name = safe(name)
    return name if name and not name[0].isdigit() else "f_" + name


def definition(name, owner):
    if owner and re.match(r"^[A-Za-z_]\w*$", owner) and name.startswith(owner + "::"):
        return "void %s()" % name
    return "void %s()" % identifier(name)


def slot_label(slot, offset):
    return str(slot) if offset == 0 else "%d_%d" % (offset, slot)


def assign_owners(classes):
    base_of = {name: set(bases) for name, _, bases, _, _ in classes}
    seen = collections.defaultdict(list)
    for name, _, _, methods, offset in classes:
        for slot, address in enumerate(methods):
            seen[address].append((name, slot_label(slot, offset)))
    owners = {}
    for address, hits in seen.items():
        names = {n for n, _ in hits}
        roots = [n for n in names if not (base_of[n] & names)]
        if len(roots) == 1:
            owners[address] = next(h for h in hits if h[0] == roots[0])
        elif len(names) < SHARED_THRESHOLD and len(roots) > 0:
            owners[address] = sorted(hits)[0]
        else:
            owners[address] = None
    return owners


def infer_neighbours(order, owner_of):
    inferred = {}
    last = None
    pending = []
    for address in order:
        owner = owner_of.get(address)
        if owner is None:
            pending.append(address)
            continue
        if last is not None and last == owner:
            for p in pending:
                inferred[p] = owner
        last, pending = owner, []
    return inferred


def main():
    rules, crt_start = load_modules()
    functions = load_functions()
    classes = load_classes()
    symbols = load_symbols()
    print("read %d functions, %d classes, %d names" % (len(functions), len(classes), len(symbols)), flush=True)
    done, taken, deletable, homes = scan_sources()
    removed = drop_finished_stubs(done)
    if removed:
        print("removed %d stubs for functions that are rewritten elsewhere" % removed, flush=True)
    print("found %d rewritten functions, %d regenerable files" % (len(done), len(deletable)), flush=True)
    owners = assign_owners(classes)

    class_owner = {a: o[0] for a, o in owners.items() if o}
    order = sorted(functions)
    inferred = infer_neighbours(order, class_owner)

    catalog = []
    for address in order:
        size, ida_name = functions[address]
        owner = class_owner.get(address)
        kind = "unknown"
        name = ida_name
        if address in owners and owners[address] is None:
            kind, module, base = "shared", "lib/crt" if address >= crt_start else "unsorted", "shared_stubs"
            name = "shared_%X" % address
        elif owner:
            slot = owners[address][1]
            kind = "virtual"
            module = module_of(owner, rules)
            base = safe(owner)
            name = "%s::vfn_%s" % (owner, slot)
        elif address in inferred:
            owner = inferred[address]
            kind = "inferred"
            module = module_of(owner, rules)
            base = safe(owner)
            name = "%s::fn_%X" % (owner, address)
        elif ida_name.startswith(("SDL_", "FMOD", "Steam", "gl", "wgl")) or "FMOD" in ida_name:
            kind, module = "import", "lib/imports"
            base = "sdl" if ida_name.startswith("SDL_") else "fmod" if "FMOD" in ida_name else "other"
        elif address >= crt_start:
            kind, module, base = "library", "lib/crt", "block_%X" % (address >> 16)
        else:
            module, base = "unsorted", "block_%X" % (address >> 16)
        if address in symbols:
            name = symbols[address]
        elif kind in ("unknown", "library", "import") and ida_name.startswith("sub_"):
            name = ida_name
        elif kind in ("unknown", "library", "import"):
            name = ida_name
        status = "done" if address in done else "stub"
        if address in done:
            module, base = done[address].parent.as_posix(), done[address].stem
        elif address in homes:
            module, base = homes[address].parent.as_posix(), homes[address].stem
        catalog.append((address, size, name, owner or "", module, base, kind, status))

    src = ROOT / "src"
    for old in list(src.rglob("*.stubs")) + deletable:
        old.unlink()
    groups = collections.defaultdict(list)
    for row in catalog:
        if row[7] == "stub" and not row[4].startswith("lib") and row[0] not in taken:
            groups[(row[4], row[5])].append(row)
    for (module, base), rows in groups.items():
        path = src / module / (base + ".cpp")
        path.parent.mkdir(parents=True, exist_ok=True)
        body = ""
        for address, size, name, owner, *_ in sorted(rows):
            body += "// STUB: 0x%X %s (%d bytes)\n%s\n{\n}\n\n" % (address, name, size, definition(name, owner))
        if path.exists():
            path.write_text(path.read_text().rstrip("\n") + "\n\n" + body.rstrip("\n") + "\n")
            continue
        include = ""
        header = ROOT / "include" / module / (safe(base) + ".gen.h")
        if rows[0][3] and (header.exists() or class_has_header(rows[0][3], module, rules)):
            include = '#include "%s/%s.gen.h"\n\n' % (module, safe(base))
        path.write_text(include + body.rstrip("\n") + "\n")

    with open(ROOT / "config" / "catalog.tsv", "w") as f:
        f.write("# address\tsize\tname\tclass\tmodule\tfile\tkind\tstatus\n")
        for address, size, name, owner, module, base, kind, status in catalog:
            f.write("0x%X\t%d\t%s\t%s\t%s\t%s\t%s\t%s\n" % (address, size, name, owner, module, base, kind, status))

    print("wrote %d source files and config/catalog.tsv" % len(groups), flush=True)
    write_headers(classes, owners, rules, catalog)
    print("wrote class headers", flush=True)
    for root in (src, ROOT / "include"):
        for folder in sorted((p for p in root.rglob("*") if p.is_dir()), reverse=True):
            if not any(folder.iterdir()):
                folder.rmdir()

    counts = collections.Counter((r[4].split("/")[0], r[6]) for r in catalog)
    print("%d functions, %d stub files" % (len(catalog), len(groups)))
    for key, value in sorted(counts.items()):
        print("  %-8s %-9s %5d" % (key[0], key[1], value))


def class_has_header(name, module, rules):
    return not module.startswith("lib") and re.match(r"^[A-Za-z_]\w*$", name) is not None


def write_headers(classes, owners, rules, catalog):
    include = ROOT / "include"
    for old in include.rglob("*.gen.h"):
        old.unlink()
    extra = collections.defaultdict(list)
    for address, size, name, owner, module, base, kind, status in catalog:
        if kind == "inferred" and owner:
            extra[owner].append((address, name.split("::", 1)[1]))
    by_class = collections.OrderedDict()
    for row in classes:
        by_class.setdefault(row[0], []).append(row)
    for name, tables in by_class.items():
        module = module_of(name, rules)
        if not class_has_header(name, module, rules):
            continue
        if (include / module / (safe(name) + ".h")).exists():
            continue
        path = include / module / (safe(name) + ".gen.h")
        path.parent.mkdir(parents=True, exist_ok=True)
        with open(path, "w") as f:
            f.write("#pragma once\n\n")
            f.write("// Generated from RTTI by tools/scaffold.py. Slot signatures are not known yet.\n")
            bases = tables[0][2]
            f.write("// bases: %s\n" % ", ".join(bases) if bases else "")
            f.write("class %s\n{\npublic:\n" % name)
            for _, vtable, _, methods, offset in sorted(tables, key=lambda r: r[4]):
                f.write("    // vtable 0x%X, offset %d\n" % (vtable, offset))
                for slot, address in enumerate(methods):
                    f.write("    virtual void vfn_%s(); // 0x%X\n" % (slot_label(slot, offset), address))
            for address, method in sorted(extra.get(name, [])):
                f.write("    void %s(); // 0x%X\n" % (method, address))
            f.write("};\n")


if __name__ == "__main__":
    main()
