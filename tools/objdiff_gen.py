import json
import struct
from pathlib import Path

from coffobj import REL_DIR32, REL_REL32


def write_target(obj_bytes, replacements, out_path):
    data = obj_bytes
    machine, nsec, stamp, symptr, nsyms, optsize, chars = struct.unpack_from("<HHIIIHH", data, 0)
    symbols = bytearray(data[symptr:symptr + nsyms * 18])
    old_strtab = data[symptr + nsyms * 18:]
    names = bytearray(old_strtab[4:])
    added = {}

    def symbol_index(name):
        if name in added:
            return added[name]
        offset = 4 + len(names)
        names.extend(name.encode() + b"\0")
        entry = struct.pack("<II", 0, offset) + struct.pack("<IhHBB", 0, 0, 0x20, 2, 0)
        symbols.extend(entry)
        added[name] = nsyms + len(added)
        return added[name]

    headers = []
    for i in range(nsec):
        off = 20 + i * 40
        name = data[off:off + 8]
        vsize, vaddr, rawsize, rawptr, relptr, _, nrel, _, flags = struct.unpack_from("<IIIIIIHHI", data, off + 8)
        headers.append(dict(name=name, vsize=vsize, vaddr=vaddr, rawsize=rawsize, rawptr=rawptr,
                            relptr=relptr, nrel=nrel, flags=flags))

    body = bytearray()
    base = 20 + nsec * 40
    new_sections = []
    for i, h in enumerate(headers, start=1):
        raw = data[h["rawptr"]:h["rawptr"] + h["rawsize"]] if h["rawptr"] else b""
        relocs = [bytearray(data[h["relptr"] + k * 10:h["relptr"] + k * 10 + 10]) for k in range(h["nrel"])]
        if i in replacements:
            original, retarget = replacements[i]
            raw = bytearray(original)
            kept = []
            for r in relocs:
                vaddr, symidx, rtype = struct.unpack_from("<IIH", r, 0)
                if vaddr + 4 > len(raw):
                    continue
                if rtype in (REL_DIR32, REL_REL32):
                    name = _symbol_name(data, symptr, nsyms, symidx)
                    new_name, addend = retarget(vaddr, rtype, name)
                    if new_name:
                        struct.pack_into("<I", r, 4, symbol_index(new_name))
                    struct.pack_into("<i", raw, vaddr, addend)
                else:
                    raw[vaddr:vaddr + 4] = b"\0\0\0\0"
                kept.append(r)
            relocs = kept
            raw = bytes(raw)
        rawptr = base + len(body) if raw else 0
        body += raw
        relptr = base + len(body) if relocs else 0
        for r in relocs:
            body += r
        new_sections.append((h, len(raw), rawptr, relptr, len(relocs)))

    index = 0
    while index < nsyms:
        off = index * 18
        value, secnum, _, storage, naux = struct.unpack_from("<IhHBB", symbols, off + 8)
        if storage == 3 and naux == 1 and secnum > 0 and value == 0:
            struct.pack_into("<IHH", symbols, off + 18, new_sections[secnum - 1][1], new_sections[secnum - 1][4], 0)
        index += 1 + naux

    total_syms = nsyms + len(added)
    out = bytearray(struct.pack("<HHIIIHH", machine, nsec, stamp, base + len(body), total_syms, optsize, chars))
    for h, size, rawptr, relptr, nrel in new_sections:
        out += h["name"] + struct.pack("<IIIIIIHHI", h["vsize"], h["vaddr"], size, rawptr, relptr, 0, nrel, 0, h["flags"])
    out += body + symbols + struct.pack("<I", 4 + len(names)) + names
    Path(out_path).parent.mkdir(parents=True, exist_ok=True)
    Path(out_path).write_bytes(bytes(out))


def _symbol_name(data, symptr, nsyms, index):
    off = symptr + index * 18
    raw = data[off:off + 8]
    if raw[:4] == b"\0\0\0\0":
        strtab = symptr + nsyms * 18
        stroff = struct.unpack_from("<I", raw, 4)[0]
        return data[strtab + stroff:data.index(b"\0", strtab + stroff)].decode()
    return raw.rstrip(b"\0").decode()
