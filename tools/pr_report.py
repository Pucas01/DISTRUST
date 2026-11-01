#!/usr/bin/env python3
import argparse
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
MARKER = "<!-- distrust-ci -->"
LIST_LIMIT = 25


def snapshot(root):
    functions = {}
    for path in sorted((root / "build" / "check").rglob("*.json")):
        for entry in json.loads(path.read_text()):
            functions[str(entry["address"])] = {
                "name": entry["name"], "size": entry["size"], "match": entry["status"] == "match"}
    total = bytes_total = 0
    catalog = root / "config" / "catalog.tsv"
    if catalog.exists():
        for line in catalog.read_text().splitlines()[1:]:
            cols = line.split("\t")
            size = int(cols[1])
            if not cols[4].startswith("lib") and size > 0:
                total += 1
                bytes_total += size
    return {"total": total, "bytesTotal": bytes_total, "functions": functions}


def summary(snap):
    matched = [f for f in snap["functions"].values() if f["match"]]
    partial = len(snap["functions"]) - len(matched)
    code = 100.0 * sum(f["size"] for f in matched) / snap["bytesTotal"] if snap["bytesTotal"] else 0.0
    return len(matched), partial, code


def signed(value, fmt="%d"):
    text = fmt % value
    if float(text) == 0:
        return fmt % 0
    return ("+" if value > 0 else "") + text


def listing(title, rows):
    if not rows:
        return []
    lines = ["", "**%s** (%d)" % (title, len(rows)), ""]
    for address, f in sorted(rows)[:LIST_LIMIT]:
        lines.append("- `0x%X` `%s` (%d bytes)" % (int(address), f["name"], f["size"]))
    if len(rows) > LIST_LIMIT:
        lines.append("- and %d more" % (len(rows) - LIST_LIMIT))
    return lines


def diff(base, head, base_sha, head_sha):
    old, new = base["functions"], head["functions"]
    gained = [(a, f) for a, f in new.items() if f["match"] and not old.get(a, {}).get("match")]
    lost = [(a, old[a]) for a in old if old[a]["match"] and not new.get(a, {}).get("match")]
    new_partial = [(a, f) for a, f in new.items() if not f["match"] and a not in old]
    heading = "### Report for DR1_us (`%s` - `%s`)" % (base_sha[:7], head_sha[:7])
    lines = [MARKER, heading, ""]
    b_match, b_partial, b_code = summary(base)
    h_match, h_partial, h_code = summary(head)
    if (b_match, b_partial) == (h_match, h_partial) and not gained and not lost and abs(h_code - b_code) < 1e-9:
        lines.append("No changes")
        return "\n".join(lines) + "\n"
    lines += [
        "| | Base | Head | Change |",
        "|---|---:|---:|---:|",
        "| Functions matched | %d | %d | %s |" % (b_match, h_match, signed(h_match - b_match)),
        "| Code matched | %.2f%% | %.2f%% | %s%% |" % (b_code, h_code, signed(h_code - b_code, "%.2f")),
        "| Rewritten, not matching | %d | %d | %s |" % (b_partial, h_partial, signed(h_partial - b_partial)),
    ]
    lines += listing("Newly matching", gained)
    lines += listing("No longer matching", lost)
    lines += listing("Rewritten but not matching", new_partial)
    return "\n".join(lines) + "\n"


def main():
    parser = argparse.ArgumentParser()
    sub = parser.add_subparsers(dest="command", required=True)
    snap = sub.add_parser("snapshot")
    snap.add_argument("output")
    snap.add_argument("--root", default=str(ROOT))
    cmp = sub.add_parser("diff")
    cmp.add_argument("base")
    cmp.add_argument("head")
    cmp.add_argument("--base-sha", default="base")
    cmp.add_argument("--head-sha", default="head")
    args = parser.parse_args()
    if args.command == "snapshot":
        Path(args.output).write_text(json.dumps(snapshot(Path(args.root))))
    else:
        sys.stdout.write(diff(json.loads(Path(args.base).read_text()), json.loads(Path(args.head).read_text()),
                              args.base_sha, args.head_sha))
    return 0


if __name__ == "__main__":
    sys.exit(main())
