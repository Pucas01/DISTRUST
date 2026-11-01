#!/usr/bin/env python3
import os
import re
import subprocess
import sys

from dr1lib import ROOT, TOOLCHAIN, compiler_command, winpath

PREFIX = "Note: including file:"


def main():
    out, src = sys.argv[1], sys.argv[2]
    flags = sys.argv[sys.argv.index("--") + 1:]
    os.makedirs(os.path.dirname(out) or ".", exist_ok=True)
    if os.path.exists(out):
        os.unlink(out)
    vc = TOOLCHAIN / "vclib/Program Files/Microsoft Visual Studio 11.0/VC"
    env = dict(os.environ, INCLUDE=";".join([winpath(vc / "include"), winpath(ROOT / "include")]))
    cmd = compiler_command() + [str(TOOLCHAIN / "bin/cl.exe")] + flags + [
        "/showIncludes", "/Fo" + winpath(os.path.abspath(out)), winpath(os.path.abspath(src))]
    result = subprocess.run(cmd, cwd=ROOT, env=env, capture_output=True, text=True)
    echo = os.path.basename(src)
    for line in (result.stdout + result.stderr).splitlines():
        if line.strip() == echo:
            continue
        if line.startswith(PREFIX) and sys.platform != "win32":
            path = line[len(PREFIX):].strip()
            path = re.sub(r"^[Zz]:", "", path).replace("\\", "/")
            line = PREFIX + " " + path
        print(line)
    return 0 if os.path.exists(out) and os.path.getsize(out) > 0 else 1


if __name__ == "__main__":
    sys.exit(main())
