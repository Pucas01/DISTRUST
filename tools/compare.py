#!/usr/bin/env python3
import argparse
import os
import subprocess
import sys

from dr1lib import ROOT


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("targets", nargs="*")
    parser.add_argument("--all", action="store_true")
    parser.add_argument("-v", "--verbose", action="store_true")
    args = parser.parse_args()
    subprocess.run([sys.executable, str(ROOT / "configure.py")], cwd=ROOT, check=True)
    targets = args.targets or (["all"] if args.all else [])
    build = subprocess.run(["ninja"] + targets, cwd=ROOT)
    if build.returncode != 0:
        return build.returncode
    if args.targets:
        return 0
    env = dict(os.environ, VERBOSE="1" if args.verbose else "")
    return subprocess.run([sys.executable, str(ROOT / "tools" / "report.py")], cwd=ROOT, env=env).returncode


if __name__ == "__main__":
    sys.exit(main())
