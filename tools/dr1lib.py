import os
import re
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from coffobj import REL_DIR32, REL_REL32, plain

ROOT = Path(__file__).resolve().parent.parent
TOOLCHAIN = ROOT / "toolchain"
MARKER = re.compile(r"^//\s*FUNCTION:\s*(0x[0-9A-Fa-f]+)\s+(\S+)")
BLOCK_MARKER = re.compile(r"^//\s*BLOCK:\s*(0x[0-9A-Fa-f]+)\s+(\S+)\s+(\d+)")
FLAGS_MARKER = re.compile(r"^//\s*FLAGS:\s*(.*)$")
STUB_MARKER = re.compile(r"^//\s*STUB:\s*(0x[0-9A-Fa-f]+)\s+(\S+)")
DEFINITION = re.compile(r"^void\s+([^\s(]+)\(\)")


def wibo_path():
    for path in (ROOT / "external/wibo/build/release64/wibo", TOOLCHAIN / "wibo"):
        if os.access(path, os.X_OK):
            return path
    return None


def compiler_command():
    if sys.platform == "win32":
        return []
    path = wibo_path()
    if path is None:
        sys.exit("wibo is not built. Run:\n  git submodule update --init\n"
                 "  cd external/wibo && cmake --preset release64 && cmake --build --preset release64")
    return [str(path)]


def winpath(p):
    if sys.platform == "win32":
        return str(p)
    return "Z:" + str(p).replace("/", "\\")

def load_exe():
    path = Path(os.environ.get("DR1_EXE") or ROOT / "orig" / "DR1_us.exe")
    if not path.is_file():
        sys.exit("put your own DR1_us.exe in orig/ (or set DR1_EXE)")
    return path.read_bytes()

class Pe:
    def __init__(self, data):
        self.data = data
        pe = struct.unpack_from("<I", data, 0x3C)[0]
        nsec = struct.unpack_from("<H", data, pe + 6)[0]
        optsize = struct.unpack_from("<H", data, pe + 20)[0]
        self.base = struct.unpack_from("<I", data, pe + 24 + 28)[0]
        self.sections = []
        off = pe + 24 + optsize
        for i in range(nsec):
            vsize, va, rawsize, rawptr = struct.unpack_from("<IIII", data, off + 8 + i * 40)
            self.sections.append((va, max(vsize, rawsize), rawptr))

    def read(self, address, size):
        rva = address - self.base
        for va, span, rawptr in self.sections:
            if va <= rva < va + span:
                start = rawptr + rva - va
                return self.data[start:start + size]
        raise ValueError("address 0x%X not in any section" % address)

def sizes():
    table = {}
    with open(ROOT / "config" / "functions.tsv") as f:
        next(f)
        for line in f:
            cols = line.rstrip("\n").split("\t")
            table[int(cols[0], 16)] = int(cols[2])
    return table

def load_symbols():
    by_name, by_address = {}, {}
    with open(ROOT / "config" / "functions.tsv") as f:
        next(f)
        for line in f:
            cols = line.rstrip("\n").split("\t")
            address = int(cols[0], 16)
            by_name.setdefault(plain(cols[3]), address)
            by_address.setdefault(address, plain(cols[3]))
    with open(ROOT / "config" / "symbols.tsv") as f:
        for line in f:
            if line.startswith("#") or not line.strip():
                continue
            cols = line.rstrip("\n").split("\t")
            address = int(cols[0], 16)
            by_name[cols[1]] = address
            by_address[address] = cols[1]
    return by_name, by_address

def original_target(original, address, pos, rtype):
    value = struct.unpack_from("<i", original, pos)[0]
    if rtype == REL_DIR32:
        return value & 0xFFFFFFFF
    return (address + pos + 4 + value) & 0xFFFFFFFF

def check_relocations(address, original, ours, symbols):
    by_name, by_address = symbols
    problems = []
    for pos, raw_name, rtype in ours["relocs"]:
        if rtype not in (REL_DIR32, REL_REL32):
            continue
        if pos + 4 > len(original):
            continue
        name = plain(raw_name)
        want = original_target(original, address, pos, rtype)
        addend = struct.unpack_from("<i", ours["code"], pos)[0]
        if name not in by_name:
            problems.append("+0x%X uses %s, which has no address in config/symbols.tsv (original: 0x%X %s)"
                            % (pos, name, want, by_address.get(want, "unnamed")))
        elif (by_name[name] + addend) & 0xFFFFFFFF != want:
            problems.append("+0x%X uses %s (0x%X), original uses 0x%X %s"
                            % (pos, name, by_name[name], want, by_address.get(want, "unnamed")))
    return problems

def make_retarget(address, original, ours, symbols):
    by_name, by_address = symbols

    def retarget(pos, rtype, raw_name):
        want = original_target(original, address, pos, rtype)
        name = plain(raw_name)
        ours_addend = struct.unpack_from("<i", ours["code"], pos)[0]
        if name in by_name and (by_name[name] + ours_addend) & 0xFFFFFFFF == want:
            return None, ours_addend
        wanted_name = by_address.get(want)
        if wanted_name is not None and wanted_name in by_name:
            return wanted_name, 0
        return "unk_%08X" % want, 0

    return retarget
