import re
import struct

REL_DIR32 = 6
REL_REL32 = 0x14


def plain(name):
    if name.startswith("?") and not name.startswith("??"):
        head = name[1:].split("@@")[0]
        return "::".join(reversed(head.split("@")))
    if name.startswith("_"):
        return re.sub(r"@\d+$", "", name[1:])
    return name


class Coff:
    def __init__(self, data):
        self.data = data
        _, nsec, _, self.symptr, self.nsyms = struct.unpack_from("<HHIII", data, 0)
        self.sections = []
        for i in range(nsec):
            off = 20 + i * 40
            name = data[off:off + 8].rstrip(b"\0").decode()
            _, _, rawsize, rawptr, relptr, _, nrel = struct.unpack_from("<IIIIIIH", data, off + 8)
            self.sections.append((name, rawsize, rawptr, relptr, nrel))
        self.strtab = self.symptr + self.nsyms * 18
        self.by_index = {}
        i = 0
        while i < self.nsyms:
            off = self.symptr + i * 18
            raw = data[off:off + 8]
            if raw[:4] == b"\0\0\0\0":
                stroff = struct.unpack_from("<I", raw, 4)[0]
                end = data.index(b"\0", self.strtab + stroff)
                name = data[self.strtab + stroff:end].decode()
            else:
                name = raw.rstrip(b"\0").decode()
            value, secnum, _, _, naux = struct.unpack_from("<IhHBB", data, off + 8)
            self.by_index[i] = (name, value, secnum)
            i += 1 + naux

    def find(self, wanted):
        for index, (name, value, secnum) in self.by_index.items():
            if secnum > 0 and (name == wanted or plain(name) == wanted):
                return index, name, value, secnum
        return None

    def function(self, wanted):
        hit = self.find(wanted)
        if not hit:
            return None
        _, _, value, secnum = hit
        _, rawsize, rawptr, relptr, nrel = self.sections[secnum - 1]
        code = self.data[rawptr + value:rawptr + rawsize]
        relocs = []
        for i in range(nrel):
            vaddr, symidx, rtype = struct.unpack_from("<IIH", self.data, relptr + i * 10)
            if value <= vaddr < rawsize:
                name = self.by_index.get(symidx, ("?", 0, 0))[0]
                relocs.append((vaddr - value, name, rtype))
        return dict(code=code, section=secnum, offset=value, relocs=relocs)
