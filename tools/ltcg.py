import bisect
import os
import re
import struct
import subprocess
import sys
from pathlib import Path

from coffobj import plain
from dr1lib import ROOT, TOOLCHAIN, compiler_command, winpath

MAP_LINE = re.compile(r"^\s*([0-9a-f]{4}):([0-9a-f]{8})\s+(\S+)\s+([0-9a-f]{8})\s*(f)?\s*(i)?")


def link(out, objs, roots):
    vc = TOOLCHAIN / "vclib/Program Files/Microsoft Visual Studio 11.0/VC"
    env = dict(os.environ, LIB=winpath(vc / "lib"))
    out = os.path.abspath(out)
    os.makedirs(os.path.dirname(out), exist_ok=True)
    for path in (out, out + ".map"):
        if os.path.exists(path):
            os.unlink(path)
    cmd = compiler_command() + [
        str(TOOLCHAIN / "bin/link.exe"), "/nologo", "/DLL", "/NOENTRY", "/LTCG", "/OPT:REF", "/OPT:ICF",
        "/FORCE:UNRESOLVED", "/NODEFAULTLIB:kernel32.lib", "/MAP:" + winpath(out + ".map"), "/OUT:" + winpath(out)]
    cmd += ["/INCLUDE:" + root for root in roots]
    cmd += [winpath(os.path.abspath(o)) for o in objs] + ["libcmt.lib"]
    result = subprocess.run(cmd, cwd=ROOT, env=env, capture_output=True, text=True)
    if not os.path.exists(out + ".map"):
        sys.stderr.write(result.stdout[-3000:] + result.stderr[-2000:])
        sys.exit("link failed (%d)" % result.returncode)
    return result


class Symbol:
    def __init__(self, section, offset, name, address, is_function):
        self.section, self.offset, self.name, self.address, self.is_function = section, offset, name, address, is_function


def parse_map(path):
    symbols = []
    for line in open(path, errors="replace"):
        m = MAP_LINE.match(line)
        if m:
            symbols.append(Symbol(int(m.group(1), 16), int(m.group(2), 16), m.group(3), int(m.group(4), 16), bool(m.group(5))))
    return symbols


class Image:
    def __init__(self, path):
        self.data = open(path, "rb").read()
        pe = struct.unpack_from("<I", self.data, 0x3C)[0]
        count = struct.unpack_from("<H", self.data, pe + 6)[0]
        optional = struct.unpack_from("<H", self.data, pe + 20)[0]
        self.base = struct.unpack_from("<I", self.data, pe + 24 + 28)[0]
        self.sections = []
        for i in range(count):
            o = pe + 24 + optional + i * 40
            name = self.data[o:o + 8].rstrip(b"\0").decode()
            vsize, va, rsize, raw = struct.unpack_from("<IIII", self.data, o + 8)
            self.sections.append((name, va, max(vsize, rsize), raw, rsize))
        self.fixups = self._fixups(pe)

    def _fixups(self, pe):
        directory = struct.unpack_from("<II", self.data, pe + 24 + 96 + 5 * 8)
        rva, size = directory
        found = set()
        if not rva:
            return found
        offset, end = self.rva_to_offset(rva), self.rva_to_offset(rva) + size
        while offset < end:
            page, block = struct.unpack_from("<II", self.data, offset)
            if block < 8:
                break
            for i in range((block - 8) // 2):
                entry = struct.unpack_from("<H", self.data, offset + 8 + i * 2)[0]
                if entry >> 12 == 3:
                    found.add(page + (entry & 0xFFF))
            offset += block
        return found

    def rva_to_offset(self, rva):
        for _, va, size, raw, rsize in self.sections:
            if va <= rva < va + size:
                return raw + rva - va
        raise ValueError("rva 0x%X is outside the image" % rva)

    def read(self, rva, size):
        out = bytearray()
        for i in range(size):
            try:
                out.append(self.data[self.rva_to_offset(rva + i)])
            except (ValueError, IndexError):
                out.append(0)
        return bytes(out)


class SymbolTable:
    def __init__(self, symbols):
        self.symbols = sorted((s for s in symbols if not s.name.startswith("$")), key=lambda s: s.address)
        self.addresses = [s.address for s in self.symbols]
        self.labels = sorted(s.address for s in symbols if s.name.startswith("$"))

    def find(self, name):
        for s in self.symbols:
            if s.name == name or s.name == "_" + name or plain(s.name) == name:
                return s
        return None

    def at(self, address):
        i = bisect.bisect_right(self.addresses, address) - 1
        return self.symbols[i] if i >= 0 else None


def main():
    out, rest = sys.argv[1], sys.argv[2:]
    roots = [a[len("/INCLUDE:"):] for a in rest if a.startswith("/INCLUDE:")]
    objs = [a for a in rest if not a.startswith("/INCLUDE:")]
    link(out, objs, roots)
    return 0


if __name__ == "__main__":
    sys.exit(main())
