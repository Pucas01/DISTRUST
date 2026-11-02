#!/usr/bin/env python3
import json
import struct
import sys

from coffobj import plain
from dr1lib import ALTERNATES, MARKER, Pe, load_exe, load_symbols, sizes
from ltcg import Image, SymbolTable, parse_map

REL_JUMP = (0xE8, 0xE9)


def u32(data, pos):
    return struct.unpack_from("<I", data, pos)[0]


def s32(data, pos):
    return struct.unpack_from("<i", data, pos)[0]


def operands(code, orig, func_rva, fixups):
    """Byte windows that may legitimately differ: absolute fixups and relative branch targets."""
    found = []
    covered = set()
    size = len(code)
    for pos in range(size - 3):
        if func_rva + pos in fixups:
            found.append(("abs", pos))
            covered.update(range(pos, pos + 4))
    for i in range(size):
        if code[i] == orig[i] or i in covered:
            continue
        for start in (i, i - 1, i - 2, i - 3):
            if start < 1 or start + 4 > size or any(p in covered for p in range(start, start + 4)):
                continue
            opcode = code[start - 1]
            near = opcode in REL_JUMP and orig[start - 1] == opcode
            far = start >= 2 and code[start - 2] == 0x0F and 0x80 <= opcode <= 0x8F and orig[start - 2:start] == code[start - 2:start]
            if near or far:
                found.append(("rel", start))
                covered.update(range(start, start + 4))
                break
    return sorted(found, key=lambda x: x[1]), covered


def compare(code, orig, address, func_va, func_rva, image, table, symbols):
    by_name, by_address = symbols
    size = len(code)
    found, covered = operands(code, orig, func_rva, image.fixups)
    problems = []
    for kind, pos in found:
        if kind == "abs":
            target, want = u32(code, pos), u32(orig, pos)
        else:
            target = func_va + pos + 4 + s32(code, pos)
            want = address + pos + 4 + s32(orig, pos)
        if func_va <= target < func_va + size + 64 and address <= want < address + size + 64:
            if target - func_va != want - address:
                problems.append("+0x%X targets +0x%X inside the function, original +0x%X" % (pos, target - func_va, want - address))
            continue
        if target == 0:
            continue
        sym = table.at(target)
        if sym is None:
            problems.append("+0x%X targets 0x%X, which is not in the link map" % (pos, target))
            continue
        name, offset = plain(sym.name), target - sym.address
        if name not in by_name:
            problems.append("+0x%X uses %s, which has no address in config/symbols.tsv (original: 0x%X %s)"
                            % (pos, name, (want - offset) & 0xFFFFFFFF, by_address.get((want - offset) & 0xFFFFFFFF, "unnamed")))
        elif not any((a + offset) & 0xFFFFFFFF == want for a in ALTERNATES.get(name, {by_name[name]})):
            problems.append("+0x%X uses %s (0x%X), original uses 0x%X %s"
                            % (pos, name, by_name[name], want, by_address.get(want, "unnamed")))
    diff = next((i for i in range(size) if code[i] != orig[i] and i not in covered), None)
    return diff, problems


def main():
    src, dll, check_out = sys.argv[1:4]
    lines = open(src).read().splitlines()
    markers = [(int(m.group(1), 16), m.group(2)) for m in map(MARKER.match, lines) if m]
    exe, known, symbols = Pe(load_exe()), sizes(), load_symbols()
    image = Image(dll)
    table = SymbolTable(parse_map(dll + ".map"))
    text = next(s for s in image.sections if s[0] == ".text")
    results = []
    for address, name in markers:
        result = dict(address=address, name=name, status="match", detail="")
        results.append(result)
        size = known.get(address)
        if size is None:
            result.update(status="skip", detail="address not in config/functions.tsv")
            continue
        sym = table.find(name)
        if sym is None or not sym.is_function:
            result.update(status="missing", detail="symbol not found in the linked image")
            continue
        func_rva = sym.address - image.base
        code = image.read(func_rva, size)
        orig = exe.read(address, size)
        diff, problems = compare(code, orig, address, sym.address, func_rva, image, table, symbols)
        result.update(size=size, ours=code.hex(" "), original=orig.hex(" "), problems=problems)
        if diff is not None:
            result.update(status="mismatch", detail="first difference at +0x%X" % diff)
        elif problems:
            result.update(status="mismatch", detail="bytes equal, references differ")
    with open(check_out, "w") as f:
        json.dump(results, f, indent=1)
    for r in results:
        print("%-8s 0x%X %s %s" % (r["status"].upper(), r["address"], r["name"], r["detail"]))
        for p in r.get("problems", [])[:6]:
            print("         " + p)
    return 0


if __name__ == "__main__":
    sys.exit(main())
