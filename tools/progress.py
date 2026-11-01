#!/usr/bin/env python3
import collections
import datetime
import html
import json
import sys

from dr1lib import ROOT

WIDTH, HEIGHT = 1200, 600
MARGIN = 12
COLORS = {"match": "#22e05a", "partial": "#ff8a00", "stub": "#262626"}
LABELS = {"match": "matching", "partial": "non matching", "stub": "not rewritten"}


def worst(row, side):
    total, biggest, smallest = sum(row), max(row), min(row)
    return max(side * side * biggest / (total * total), total * total / (side * side * smallest))


def lay_row(row, x, y, w, h, out):
    total = sum(row)
    if w >= h:
        column = total / h
        top = y
        for value in row:
            out.append((x, top, column, value / column))
            top += value / column
        return x + column, y, w - column, h
    band = total / w
    left = x
    for value in row:
        out.append((left, y, value / band, band))
        left += value / band
    return x, y + band, w, h - band


def squarify(values, x, y, w, h):
    out, row, queue = [], [], list(values)
    while queue:
        side = min(w, h)
        if not row or worst(row + [queue[0]], side) <= worst(row, side):
            row.append(queue.pop(0))
        else:
            x, y, w, h = lay_row(row, x, y, w, h, out)
            row = []
    if row:
        lay_row(row, x, y, w, h, out)
    return out


def load():
    results = {}
    for path in (ROOT / "build" / "check").rglob("*.json"):
        for entry in json.loads(path.read_text()):
            results[entry["address"]] = entry["status"]
    groups = collections.defaultdict(list)
    for line in (ROOT / "config" / "catalog.tsv").read_text().splitlines()[1:]:
        cols = line.split("\t")
        address, size, module, base = int(cols[0], 16), int(cols[1]), cols[4], cols[5]
        if module.startswith("lib") or size <= 0:
            continue
        if address in results:
            state = "match" if results[address] == "match" else "partial"
        else:
            state = "stub"
        groups[(module, base)].append((size, state, cols[2], address))
    return groups


def badge(label, values):
    pad, char = 6, 6.6
    segments = [(label, "#555555")] + [(value, "#1b8ecf") for value in values]
    widths = [round(len(text) * char) + 2 * pad for text, _ in segments]
    total = sum(widths)
    parts = [
        '<svg xmlns="http://www.w3.org/2000/svg" width="%d" height="20" role="img" aria-label="%s: %s">'
        % (total, label, ", ".join(values)),
        '<linearGradient id="g" x2="0" y2="100%"><stop offset="0" stop-color="#bbb" stop-opacity=".1"/>'
        '<stop offset="1" stop-opacity=".1"/></linearGradient>',
        '<clipPath id="r"><rect width="%d" height="20" rx="3" fill="#fff"/></clipPath>' % total,
        '<g clip-path="url(#r)">',
    ]
    x = 0
    for (text, color), width in zip(segments, widths):
        parts.append('<rect x="%d" width="%d" height="20" fill="%s"/>' % (x, width, color))
        x += width
    x = 0
    for width in widths[:-1]:
        x += width
        parts.append('<rect x="%d" width="1" height="20" fill="#000" fill-opacity=".25"/>' % (x - 1))
    parts.append('<rect width="%d" height="20" fill="url(#g)"/></g>' % total)
    parts.append('<g fill="#fff" text-anchor="middle" font-family="Verdana,DejaVu Sans,sans-serif" font-size="11">')
    x = 0
    for (text, _), width in zip(segments, widths):
        centre = x + width / 2
        parts.append('<text x="%.1f" y="15" fill="#010101" fill-opacity=".3">%s</text>' % (centre, text))
        parts.append('<text x="%.1f" y="14">%s</text>' % (centre, text))
        x += width
    parts.append("</g></svg>")
    return "\n".join(parts) + "\n"


def write_page(groups, stats):
    index = {"stub": 0, "partial": 1, "match": 2}
    data = {
        "groups": [{"f": "%s/%s" % key, "n": [[address, size, index[state], name] for size, state, name, address in items]}
                   for key, items in groups.items()],
        "stats": stats,
    }
    template = (ROOT / "tools" / "progress_page.html").read_text()
    code = 100.0 * stats["bytesMatched"] / stats["bytesTotal"] if stats["bytesTotal"] else 0.0
    share = 100.0 * stats["matched"] / stats["total"] if stats["total"] else 0.0
    tokens = {"matched": "{:,}".format(stats["matched"]), "total": "{:,}".format(stats["total"]), "code": "%.2f" % code,
              "partial": "{:,}".format(stats["partial"]), "files": "{:,}".format(len(groups)), "updated": stats["updated"],
              "fnbar": "%.2f" % (max(share, 1.5) if share > 0 else 0)}
    for key, value in tokens.items():
        template = template.replace("{{%s}}" % key, value)
    page = template.replace("/*DATA*/null", json.dumps(data, separators=(",", ":")).replace("</", "<\\/"))
    out = ROOT / "docs" / "index.html"
    out.parent.mkdir(exist_ok=True)
    out.write_text(page)
    (out.parent / ".nojekyll").touch()
    return out


def main():
    groups = load()
    total_bytes = sum(item[0] for items in groups.values() for item in items)
    total_functions = sum(len(items) for items in groups.values())
    matched = [size for items in groups.values() for size, state, *_ in items if state == "match"]
    percent = 100.0 * sum(matched) / total_bytes if total_bytes else 0.0

    area_w, area_h = WIDTH - 2 * MARGIN, HEIGHT - 2 * MARGIN
    ordered = sorted(groups.items(), key=lambda kv: -sum(item[0] for item in kv[1]))
    scale = area_w * area_h / total_bytes
    group_boxes = squarify([sum(item[0] for item in items) * scale for _, items in ordered],
                           MARGIN, MARGIN, area_w, area_h)

    shapes = []
    for (((module, base), items), (gx, gy, gw, gh)) in zip(ordered, group_boxes):
        inset = 1.0 if min(gw, gh) > 6 else 0.0
        gx, gy, gw, gh = gx + inset, gy + inset, gw - 2 * inset, gh - 2 * inset
        if gw <= 0 or gh <= 0:
            continue
        items = sorted(items, key=lambda item: -item[0])
        inner = sum(item[0] for item in items)
        boxes = squarify([item[0] / inner * gw * gh for item in items], gx, gy, gw, gh)
        for (size, state, name, _), (x, y, w, h) in zip(items, boxes):
            gap = 0.3 if min(w, h) > 2 else 0.0
            w, h = max(w - 2 * gap, 0.1), max(h - 2 * gap, 0.1)
            tip = html.escape("%s\n%d bytes, %s\nsrc/%s/%s.cpp" % (name, size, LABELS[state], module, base), quote=False)
            shapes.append('<rect x="%.2f" y="%.2f" width="%.2f" height="%.2f" class="%s"><title>%s</title></rect>'
                          % (x + gap, y + gap, w, h, state[0], tip))

    svg = [
        '<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 %d %d" width="%d" height="%d">' % (WIDTH, HEIGHT, WIDTH, HEIGHT),
        "<style>.m{fill:%s}.p{fill:%s}.s{fill:%s}.m:hover,.p:hover,.s:hover{stroke:#fff;stroke-width:1.5}</style>"
        % (COLORS["match"], COLORS["partial"], COLORS["stub"]),
        '<rect width="%d" height="%d" rx="16" fill="#000"/>' % (WIDTH, HEIGHT),
    ] + shapes + ["</svg>"]
    out = ROOT / "docs" / "progress.svg"
    out.parent.mkdir(exist_ok=True)
    out.write_text("\n".join(svg) + "\n")
    stats = {
        "matched": len(matched),
        "partial": sum(1 for items in groups.values() for item in items if item[1] == "partial"),
        "total": total_functions,
        "bytesMatched": sum(matched),
        "bytesTotal": total_bytes,
        "updated": datetime.date.today().isoformat(),
    }
    page = write_page(groups, stats)
    function_percent = 100.0 * len(matched) / total_functions if total_functions else 0.0
    (ROOT / "assets" / "badge.svg").write_text(
        badge("DR1_us", ["code %.2f%%" % percent, "functions %.2f%%" % function_percent]))
    print("%d of %d functions matched, %.2f%% of code" % (len(matched), total_functions, percent))
    print("wrote %s" % page.relative_to(ROOT))
    print("wrote %s (%d boxes, %d bytes)" % (out.relative_to(ROOT), len(shapes), out.stat().st_size))
    return 0


if __name__ == "__main__":
    sys.exit(main())
