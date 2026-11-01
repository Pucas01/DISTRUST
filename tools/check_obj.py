#!/usr/bin/env python3
import json
import struct
import sys

from coffobj import Coff
from dr1lib import DEFINITION, MARKER, STUB_MARKER, Pe, check_relocations, load_exe, load_symbols, make_retarget, sizes
from objdiff_gen import write_target


def main():
    src, obj, target_out, check_out = sys.argv[1:5]
    markers = [(int(m.group(1), 16), m.group(2))
               for m in map(MARKER.match, open(src).read().splitlines()) if m]
    exe, known, symbols = Pe(load_exe()), sizes(), load_symbols()
    coff = Coff(open(obj, "rb").read())
    replacements, results = {}, []
    for address, name in markers:
        result = dict(address=address, name=name, status="match", detail="")
        results.append(result)
        size = known.get(address)
        if size is None:
            result.update(status="skip", detail="address not in config/functions.tsv")
            continue
        ours = coff.function(name)
        if ours is None:
            result.update(status="missing", detail="symbol not found in object")
            continue
        original = exe.read(address, size)
        code = ours["code"][:size]
        mask = set()
        for pos, _, _ in ours["relocs"]:
            mask.update(range(pos, pos + 4))
        if ours["offset"] == 0:
            replacements[ours["section"]] = (original, make_retarget(address, original, ours, symbols))
        problems = check_relocations(address, original, ours, symbols)
        diff = next((i for i in range(min(len(code), len(original)))
                     if code[i] != original[i] and i not in mask), None)
        result.update(size=size, ours=code.hex(" "), original=original.hex(" "))
        if len(code) != len(original) or diff is not None:
            at = diff if diff is not None else min(len(code), len(original))
            result.update(status="mismatch", detail="ours %d bytes, original %d, first difference at +0x%X"
                          % (len(code), len(original), at))
        elif problems:
            result.update(status="mismatch", detail="bytes equal, references differ")
        result["problems"] = problems
    lines = open(src).read().splitlines()
    for i, line in enumerate(lines):
        stub = STUB_MARKER.match(line)
        definition = next((m for m in map(DEFINITION.match, lines[i + 1:i + 3]) if m), None) if stub else None
        if not definition:
            continue
        address = int(stub.group(1), 16)
        ours = coff.function(definition.group(1))
        if address in known and ours and ours["offset"] == 0:
            original = exe.read(address, known[address])
            replacements[ours["section"]] = (original, make_retarget(address, original, ours, symbols))
    write_target(open(obj, "rb").read(), replacements, target_out)
    with open(check_out, "w") as f:
        json.dump(results, f, indent=1)
    for r in results:
        print("%-8s 0x%X %s %s" % (r["status"].upper(), r["address"], r["name"], r["detail"]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
