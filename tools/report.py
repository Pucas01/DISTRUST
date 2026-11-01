#!/usr/bin/env python3
import json
import os
import sys

from dr1lib import ROOT


def main():
    verbose = bool(os.environ.get("VERBOSE"))
    results = []
    for path in sorted((ROOT / "build" / "check").rglob("*.json")):
        results += json.loads(path.read_text())
    bad = [r for r in results if r["status"] != "match"]
    for r in bad:
        print("%-8s 0x%X %s: %s" % (r["status"].upper(), r["address"], r["name"], r["detail"]))
        for problem in r.get("problems", []):
            print("         " + problem)
        if verbose and "ours" in r:
            print("  ours     " + r["ours"])
            print("  original " + r["original"])
    print("%d/%d rewritten functions match" % (len(results) - len(bad), len(results)))
    catalog = ROOT / "config" / "catalog.tsv"
    if catalog.exists():
        rows = [l.split("\t") for l in catalog.read_text().splitlines()[1:]]
        mine = [r for r in rows if not r[4].startswith("lib")]
        print("%d of %d non-library functions rewritten" % (sum(r[7] == "done" for r in mine), len(mine)))
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
