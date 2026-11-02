#!/usr/bin/env python3
import argparse
import hashlib
import os
import re
import shutil
import struct
import subprocess
import sys
import urllib.error
import urllib.request
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
TOOLCHAIN = Path(os.environ.get("DISTRUST_TOOLCHAIN") or ROOT / "toolchain")

ISOS = {
    "express": {
        "name": "VS2012_WDX_ENU.iso",
        "url": "https://download.microsoft.com/download/1/F/5/1F519CC5-0B90-4EA3-8159-33BFB97EF4D9/VS2012_WDX_ENU.iso",
        "size": 637313024,
        "sha256": "d38e57b269aed44a41ce2b74b78dad3b92d2bc553fc4b71180080a8936ce2ffb",
    },
    "update4": {
        "name": "VS2012.4.iso",
        "url": "https://download.microsoft.com/download/D/4/8/D48D1AC2-A297-4C9E-A9D0-A218E6609F06/VSU4/VS2012.4.iso",
        "size": 2509815808,
        "sha256": "c462118eabcc242a50f1215587cb1c79505159af79fc50c24d8be1d25203cd87",
    },
}

BIN_FILES = [
    ("update4", "packages/vc_compilercore86/vc_CompilerCore86.cab", [
        ("WinC_common_x86_cl.exe_F", "cl.exe"),
        ("WinC_common_x86_c2.dll_F", "c2.dll"),
        ("WinC_compiler_x86_c1.dll_F", "c1.dll"),
        ("WinC_compiler_x86_c1xx.dll_F", "c1xx.dll"),
        ("WinC_compiler_x86_c1xxast.dll_F", "c1xxast.dll"),
        ("WinC_compiler_x86_c1ast.dll_F", "c1ast.dll"),
        ("WinC_compiler_x86_link.exe_F", "link.exe"),
    ]),
    ("express", "packages/vc_compilerCore86/vc_CompilerCore86.cab", [
        ("WinC_compiler_project_x86_mspdb110.dll_F", "mspdb110.dll"),
        ("WinC_compiler_project_x86_mspdbcore.dll_F", "mspdbcore.dll"),
        ("WinC_compiler_project_x86_mspdbsrv.exe_F", "mspdbsrv.exe"),
        ("WinC_compiler_x86_mspft80.dll_F", "mspft80.dll"),
        ("WinC_compiler_x86_msobj110.dll_F", "msobj110.dll"),
    ]),
    ("express", "packages/vc_compilerCore86res/vc_CompilerCore86Res.cab", [
        ("WinC_compiler_core_x86_clui.dll_F_enu", "clui.dll"),
        ("WinC_compiler_core_x86_clui.dll_F_enu", "1033/clui.dll"),
    ]),
    ("express", "packages/vcRuntimeMinimum_x86/cab1.cab", [
        ("F_CENTRAL_msvcr110_x86", "msvcr110.dll"),
        ("F_CENTRAL_msvcp110_x86", "msvcp110.dll"),
    ]),
]

VC_INCLUDE = "Program Files/Microsoft Visual Studio 11.0/VC/include/"
VC_LIB = "Program Files/Microsoft Visual Studio 11.0/VC/lib/"

REQUIRED = [
    "bin/cl.exe", "bin/c1.dll", "bin/c1xx.dll", "bin/c2.dll", "bin/clui.dll", "bin/1033/clui.dll",
    "bin/msvcr110.dll", "bin/msvcp110.dll", "bin/mspdb110.dll",
    "vclib/Program Files/Microsoft Visual Studio 11.0/VC/include/stdio.h",
]


def say(message):
    print(message, flush=True)


def find_7z():
    for name in ("7z", "7zz", "7za"):
        path = shutil.which(name)
        if path:
            return path
    for path in (r"C:\Program Files\7-Zip\7z.exe", r"C:\Program Files (x86)\7-Zip\7z.exe"):
        if os.path.isfile(path):
            return path
    sys.exit("7-Zip is needed to unpack the compiler files.\n"
             "  Debian/Ubuntu: sudo apt install p7zip-full\n"
             "  Arch: sudo pacman -S 7zip\n"
             "  Windows: winget install 7zip.7zip")


def run_7z(*args):
    result = subprocess.run([find_7z(), *args], capture_output=True, text=True)
    if result.returncode > 1:
        sys.exit("7z failed (%d): %s\n%s" % (result.returncode, " ".join(args), result.stdout[-600:] + result.stderr[-600:]))


def sha256_of(path):
    digest = hashlib.sha256()
    with open(path, "rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            digest.update(chunk)
    return digest.hexdigest()


def download(iso, directory):
    dest = directory / iso["name"]
    directory.mkdir(parents=True, exist_ok=True)
    if dest.is_file() and dest.stat().st_size == iso["size"]:
        say("verifying %s" % dest.name)
        if sha256_of(dest) == iso["sha256"]:
            return dest
        say("checksum mismatch, downloading again")
        dest.unlink()
    part = dest.with_name(dest.name + ".part")
    for attempt in range(6):
        have = part.stat().st_size if part.exists() else 0
        if have == iso["size"]:
            break
        request = urllib.request.Request(iso["url"], headers={"Range": "bytes=%d-" % have} if have else {})
        try:
            with urllib.request.urlopen(request, timeout=60) as response, open(part, "ab" if have else "wb") as out:
                if have and response.status != 206:
                    out.seek(0)
                    out.truncate()
                    have = 0
                got, shown = have, -1
                while True:
                    chunk = response.read(1 << 20)
                    if not chunk:
                        break
                    out.write(chunk)
                    got += len(chunk)
                    percent = got * 100 // iso["size"]
                    if percent != shown and (percent % 5 == 0 or sys.stdout.isatty()):
                        shown = percent
                        say("downloading %s: %d%% (%d of %d MB)" % (dest.name, percent, got >> 20, iso["size"] >> 20))
        except urllib.error.HTTPError as err:
            if err.code != 416:
                say("download error: %s" % err)
        except (urllib.error.URLError, OSError) as err:
            say("download interrupted: %s, retrying" % err)
    got = part.stat().st_size if part.exists() else 0
    if got > iso["size"]:
        part.unlink()
        sys.exit("%s is %d bytes, but %d were expected. Run this again to download it fresh." % (iso["name"], got, iso["size"]))
    if got != iso["size"]:
        sys.exit("could not download %s completely (%d of %d bytes). Run this again to resume." % (iso["name"], got, iso["size"]))
    say("verifying %s" % dest.name)
    if sha256_of(part) != iso["sha256"]:
        part.unlink()
        sys.exit("%s does not match the expected checksum. Run this again to download it fresh." % iso["name"])
    part.rename(dest)
    return dest


def read_msi(msi, work):
    streams = work / "msi"
    streams.mkdir(parents=True, exist_ok=True)
    run_7z("x", "-y", "-o" + str(streams), str(msi))
    pool = (streams / "!_StringPool").read_bytes()
    data = (streams / "!_StringData").read_bytes()
    codepage = struct.unpack_from("<I", pool, 0)[0]
    width = 3 if codepage & 0x80000000 else 2
    strings, offset = [""], 0
    for i in range(4, len(pool) - 3, 4):
        length = struct.unpack_from("<H", pool, i)[0]
        strings.append(data[offset:offset + length].decode("cp1252", "replace"))
        offset += length

    def stream(name):
        return (streams / ("!" + name)).read_bytes()

    def decode(raw, columns):
        size = sum(w for _, w, _ in columns)
        count = len(raw) // size if size else 0
        rows, position = [{} for _ in range(count)], 0
        for name, w, kind in columns:
            for r in range(count):
                chunk = raw[position:position + w]
                position += w
                value = int.from_bytes(chunk, "little")
                if kind == "s":
                    rows[r][name] = strings[value] if value < len(strings) else ""
                elif w == 2:
                    rows[r][name] = value - 0x8000 if value else None
                else:
                    rows[r][name] = (value ^ 0x80000000) if value else None
        return rows

    meta = decode(stream("_Columns"), [("Table", width, "s"), ("Number", 2, "i"), ("Name", width, "s"), ("Type", 2, "i")])
    layout = {}
    for row in sorted(meta, key=lambda r: (r["Table"], r["Number"])):
        kind = row["Type"] & 0xFFFF
        if kind & 0x0800:
            column = (row["Name"], width, "s")
        else:
            column = (row["Name"], 4 if (kind & 0xFF) == 4 else 2, "i")
        layout.setdefault(row["Table"], []).append(column)
    return {name: decode(stream(name), layout[name]) for name in ("File", "Component", "Directory", "Media")}


def msi_layout(tables):
    directories = {row["Directory"]: row for row in tables["Directory"]}
    cache = {}

    def path_of(key):
        if key in cache:
            return cache[key]
        row = directories.get(key)
        if row is None or key == "TARGETDIR" or not row["Directory_Parent"]:
            cache[key] = ""
            return ""
        name = row["DefaultDir"].split(":")[0].split("|")[-1]
        parent = path_of(row["Directory_Parent"])
        cache[key] = parent if name == "." else (parent + "/" + name if parent else name)
        return cache[key]

    components = {row["Component"]: path_of(row["Directory_"]) for row in tables["Component"]}
    media = sorted(tables["Media"], key=lambda r: r["LastSequence"])
    files = []
    for row in tables["File"]:
        folder = components.get(row["Component_"], "")
        name = row["FileName"].split("|")[-1]
        cabinet = next((m["Cabinet"] for m in media if row["Sequence"] <= m["LastSequence"]), None)
        files.append((row["File"], (folder + "/" + name) if folder else name, cabinet))
    return files


def extract_msi(msi, target, keep_prefix, work):
    say("reading %s" % msi.name)
    tables = read_msi(msi, work)
    wanted = [(key, path, cab) for key, path, cab in msi_layout(tables)
              if path.startswith(keep_prefix) and not path.startswith((VC_LIB + "amd64/", VC_LIB + "arm/"))]
    if not wanted:
        sys.exit("found nothing under %s in %s" % (keep_prefix, msi.name))
    by_cabinet = {}
    for key, path, cab in wanted:
        by_cabinet.setdefault(cab, []).append((key, path))
    for cab, items in by_cabinet.items():
        if not cab or cab.startswith("#"):
            sys.exit("%s keeps its files inside the msi, which this installer does not handle" % msi.name)
        scratch = work / "cab"
        shutil.rmtree(scratch, ignore_errors=True)
        scratch.mkdir(parents=True)
        run_7z("x", "-y", "-o" + str(scratch), str(msi.with_name(cab)), *[key for key, _ in items])
        for key, path in items:
            source = scratch / key
            if not source.is_file():
                sys.exit("%s is missing from %s" % (key, cab))
            dest = target / path
            dest.parent.mkdir(parents=True, exist_ok=True)
            shutil.move(str(source), str(dest))
    say("unpacked %d files from %s" % (len(wanted), msi.name))


def installed():
    return all((TOOLCHAIN / name).is_file() for name in REQUIRED)


def install(keep_downloads=False):
    work = TOOLCHAIN / "work"
    downloads = TOOLCHAIN / "downloads"
    shutil.rmtree(work, ignore_errors=True)
    work.mkdir(parents=True)
    isos = {key: download(ISOS[key], downloads) for key in ("express", "update4")}
    bin_dir = TOOLCHAIN / "bin"
    for key, member, wanted in BIN_FILES:
        say("unpacking %s" % member)
        out = work / key
        run_7z("x", "-y", "-o" + str(out), str(isos[key]), member)
        cab = out / member
        names = sorted({name for name, _ in wanted})
        run_7z("x", "-y", "-o" + str(work / "cab"), str(cab), *names)
        for name, dest in wanted:
            target = bin_dir / dest
            target.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(work / "cab" / name, target)
        shutil.rmtree(work / "cab", ignore_errors=True)
    say("unpacking the C++ headers")
    out = work / "express"
    run_7z("x", "-y", "-o" + str(out), str(isos["express"]), "packages/vc_librarycore86/*")
    extract_msi(out / "packages/vc_librarycore86/vc_librarycore86.msi", TOOLCHAIN / "vclib", (VC_INCLUDE, VC_LIB), work)
    shutil.rmtree(work, ignore_errors=True)
    if not keep_downloads:
        shutil.rmtree(downloads, ignore_errors=True)
    if not installed():
        sys.exit("the toolchain is still incomplete after unpacking")
    say("compiler files are in %s" % TOOLCHAIN)


def ensure_msobj():
    target = TOOLCHAIN / "bin/msobj110.dll"
    if target.is_file():
        return
    say("fetching msobj110.dll, which the linker needs for link-time code generation")
    work = TOOLCHAIN / "work"
    shutil.rmtree(work, ignore_errors=True)
    work.mkdir(parents=True)
    iso = download(ISOS["express"], TOOLCHAIN / "downloads")
    member = "packages/vc_compilerCore86/vc_CompilerCore86.cab"
    run_7z("x", "-y", "-o" + str(work), str(iso), member)
    run_7z("x", "-y", "-o" + str(work / "cab"), str(work / member), "WinC_compiler_x86_msobj110.dll_F")
    shutil.copyfile(work / "cab/WinC_compiler_x86_msobj110.dll_F", target)
    shutil.rmtree(work, ignore_errors=True)
    shutil.rmtree(TOOLCHAIN / "downloads", ignore_errors=True)


def ensure_vclib():
    if (TOOLCHAIN / "vclib" / VC_LIB / "libcmt.lib").is_file():
        return
    say("fetching the VC libraries, which the linker needs for link-time code generation")
    work = TOOLCHAIN / "work"
    shutil.rmtree(work, ignore_errors=True)
    work.mkdir(parents=True)
    iso = download(ISOS["express"], TOOLCHAIN / "downloads")
    run_7z("x", "-y", "-o" + str(work), str(iso), "packages/vc_librarycore86/*")
    extract_msi(work / "packages/vc_librarycore86/vc_librarycore86.msi", TOOLCHAIN / "vclib", VC_LIB, work)
    shutil.rmtree(work, ignore_errors=True)
    shutil.rmtree(TOOLCHAIN / "downloads", ignore_errors=True)


def ensure_wibo():
    if sys.platform == "win32":
        return
    binary = ROOT / "external/wibo/build/release64/wibo"
    if not (ROOT / "external/wibo/CMakeLists.txt").is_file():
        say("fetching the wibo submodule")
        subprocess.run(["git", "submodule", "update", "--init", "external/wibo"], cwd=ROOT, check=True)
    head = subprocess.run(["git", "rev-parse", "HEAD"], cwd=ROOT / "external/wibo", capture_output=True, text=True, check=True).stdout.strip()
    stamp = ROOT / "external/wibo/build/release64/.built-from"
    if os.access(binary, os.X_OK) and stamp.is_file() and stamp.read_text().strip() == head:
        return
    for tool in ("cmake", "ninja"):
        if not shutil.which(tool):
            sys.exit("%s is needed to build wibo. Install cmake, ninja and a C++ compiler." % tool)
    say("building wibo")
    subprocess.run(["cmake", "--preset", "release64"], cwd=ROOT / "external/wibo", check=True)
    subprocess.run(["cmake", "--build", "--preset", "release64"], cwd=ROOT / "external/wibo", check=True)
    stamp.write_text(head + "\n")


def ensure():
    if not installed():
        install()
    ensure_msobj()
    ensure_vclib()
    ensure_wibo()


def main():
    parser = argparse.ArgumentParser(description="Download and unpack the Visual Studio 2012 compiler files.")
    parser.add_argument("--force", action="store_true", help="unpack again even if everything is present")
    parser.add_argument("--keep-downloads", action="store_true", help="keep the ISO files afterwards")
    args = parser.parse_args()
    if args.force or not installed():
        install(args.keep_downloads)
    else:
        say("compiler files are already in %s" % TOOLCHAIN)
    ensure_msobj()
    ensure_vclib()
    ensure_wibo()
    return 0


if __name__ == "__main__":
    sys.exit(main())
