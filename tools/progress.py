#!/usr/bin/env python3
import collections
import datetime
import html
import json
import re
import shutil
import subprocess
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
    check = ROOT / "build" / "check"
    for path in check.rglob("*.json"):
        if not (ROOT / "src" / path.relative_to(check).with_suffix(".cpp")).exists():
            continue
        for entry in json.loads(path.read_text()):
            results[entry["address"]] = entry["status"]
    groups = collections.defaultdict(list)
    for line in (ROOT / "config" / "catalog.tsv").read_text().splitlines()[1:]:
        cols = line.split("\t")
        address, size, module, base = int(cols[0], 16), int(cols[1]), cols[4], cols[5]
        if size <= 0:
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


PUBLISH = "--record" in sys.argv or "--publish" in sys.argv
OUT = ROOT / "docs" if PUBLISH else ROOT / "build" / "progress"
BADGE = ROOT / "assets" / "badge.svg" if PUBLISH else OUT / "badge.svg"
HISTORY = ROOT / "config" / "history.tsv"
HISTORY_COLUMNS = ("time", "matched", "partial", "total", "bytesMatched", "bytesTotal")


def read_history():
    rows = []
    if HISTORY.exists():
        for line in HISTORY.read_text().splitlines():
            if line and not line.startswith("#"):
                cols = line.split("\t")
                rows.append((cols[0],) + tuple(int(c) for c in cols[1:]))
    return rows


def history_from_git(stats):
    sizes = {}
    for line in (ROOT / "config" / "functions.tsv").read_text().splitlines()[1:]:
        cols = line.split("\t")
        sizes[int(cols[0], 16)] = int(cols[2])
    log = subprocess.run(["git", "log", "--format=%H %aI", "--reverse"], cwd=ROOT, capture_output=True, text=True)
    rows = []
    for entry in filter(None, log.stdout.split("\n")):
        commit, when = entry.split()
        grep = subprocess.run(["git", "grep", "-h", "-E", "^// FUNCTION: 0x", commit, "--", "src"],
                              cwd=ROOT, capture_output=True, text=True)
        found = {int(a, 16) for a in re.findall(r"FUNCTION: (0x[0-9A-Fa-f]+)", grep.stdout)}
        row = (when, len(found), 0, stats["total"], sum(sizes.get(a, 0) for a in found), stats["bytesTotal"])
        if not rows or rows[-1][1:] != row[1:]:
            rows.append(row)
    return rows


def current_row(stats):
    return (datetime.datetime.now().astimezone().isoformat(timespec="seconds"),
            stats["matched"], stats["partial"], stats["total"], stats["bytesMatched"], stats["bytesTotal"])


def record_history(stats):
    rows = read_history() if HISTORY.exists() else history_from_git(stats)
    row = current_row(stats)
    if not rows or rows[-1][1:] != row[1:]:
        rows.append(row)
    HISTORY.write_text("# " + "\t".join(HISTORY_COLUMNS) + "\n" + "".join(
        "\t".join(str(c) for c in r) + "\n" for r in rows))
    return rows


def nice_step(top, ticks=4):
    raw = max(top, 1) / ticks
    scale = 10 ** (len(str(int(raw))) - 1) if raw >= 1 else 1
    for factor in (1, 2, 5, 10):
        if raw <= factor * scale:
            return factor * scale
    return 10 * scale


def history_svg(rows):
    width, height = 1200, 360
    left, right, top, bottom = 70, 40, 30, 52
    font = "font-family:Segoe UI,system-ui,sans-serif"
    started = [datetime.datetime.fromisoformat(r[0]) for r in rows]
    peak = max(r[1] + r[2] for r in rows)
    step = nice_step(peak)
    ceiling = step * (int(peak / step) + 1)
    plot_w, plot_h = width - left - right, height - top - bottom
    span = (started[-1] - started[0]).total_seconds()

    def x_of(i):
        return left + plot_w / 2 if span <= 0 else left + plot_w * (started[i] - started[0]).total_seconds() / span

    def y_of(value):
        return top + plot_h * (1 - value / ceiling)

    parts = [
        '<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 %d %d" role="img" '
        'aria-label="Functions matched over time, now %d">' % (width, height, rows[-1][1]),
        "<style>text{%s}.h-t,.h-g{opacity:0;pointer-events:none}.h-p:hover .h-t,.h-p:hover .h-g,"
        ".h-p:focus .h-t,.h-p:focus .h-g{opacity:1}.h-p:hover .h-d,.h-p:focus .h-d{r:8}.h-p{outline:none}</style>" % font,
        '<rect width="%d" height="%d" fill="#000"/>' % (width, height),
    ]
    value = 0
    while value <= ceiling:
        y = y_of(value)
        parts.append('<line x1="%d" x2="%d" y1="%.1f" y2="%.1f" stroke="#2a2a2a" stroke-width="1"/>'
                     % (left, width - right, y, y))
        parts.append('<text x="%d" y="%.1f" fill="#a6a6a6" font-size="17" text-anchor="end">%s</text>'
                     % (left - 12, y + 6, "{:,}".format(value)))
        value += step
    ticks = 5 if span > 0 else 0
    for k in range(ticks):
        moment = started[0] + (started[-1] - started[0]) * k / (ticks - 1)
        label = moment.strftime("%d %b") if span > 2 * 86400 else moment.strftime("%H:%M")
        x = left + plot_w * k / (ticks - 1)
        parts.append('<text x="%.1f" y="%d" fill="#a6a6a6" font-size="17" text-anchor="middle">%s</text>'
                     % (x, height - bottom + 28, label))
    if 0 < span <= 2 * 86400:
        parts.append('<text x="%d" y="%d" fill="#6c6c6c" font-size="15" text-anchor="end">%s</text>'
                     % (width - right, height - 8, started[-1].strftime("%d %b %Y")))
    if any(r[2] for r in rows):
        points = " ".join("%.1f,%.1f" % (x_of(i), y_of(r[1] + r[2])) for i, r in enumerate(rows))
        parts.append('<polyline points="%s" fill="none" stroke="#ff8a00" stroke-width="3" stroke-linejoin="round"/>' % points)
    if len(rows) > 1:
        line = ["%.1f,%.1f" % (x_of(i), y_of(r[1])) for i, r in enumerate(rows)]
        area = line + ["%.1f,%.1f" % (x_of(len(rows) - 1), y_of(0)), "%.1f,%.1f" % (x_of(0), y_of(0))]
        parts.append('<polygon points="%s" fill="#22e05a" fill-opacity=".14"/>' % " ".join(area))
        parts.append('<polyline points="%s" fill="none" stroke="#22e05a" stroke-width="4" stroke-linejoin="round"/>' % " ".join(line))
    for i, r in enumerate(rows):
        x, y = x_of(i), y_of(r[1])
        lo = left if i == 0 else (x_of(i - 1) + x) / 2
        hi = width - right if i == len(rows) - 1 else (x + x_of(i + 1)) / 2
        pct = 100.0 * r[4] / r[5] if r[5] else 0.0
        box_w, box_h = 250, 92
        bx = x - box_w - 16 if x > width * 0.6 else x + 16
        by = min(max(y - box_h / 2, top), height - bottom - box_h)
        parts.append('<g class="h-p" tabindex="0">')
        parts.append('<rect x="%.1f" y="%d" width="%.1f" height="%d" fill="transparent"/>' % (lo, top, hi - lo, plot_h))
        parts.append('<line class="h-g" x1="%.1f" x2="%.1f" y1="%d" y2="%d" stroke="#fff" stroke-opacity=".35" stroke-width="2"/>'
                     % (x, x, top, top + plot_h))
        parts.append('<circle class="h-d" cx="%.1f" cy="%.1f" r="6" fill="#22e05a" stroke="#000" stroke-width="3"/>' % (x, y))
        parts.append('<g class="h-t"><rect x="%.1f" y="%.1f" width="%d" height="%d" fill="#ff1f00"/>'
                     '<rect x="%.1f" y="%.1f" width="%d" height="%d" fill="#fff"/>' % (bx + 6, by + 6, box_w, box_h, bx, by, box_w, box_h))
        parts.append('<text x="%.1f" y="%.1f" fill="#000" font-size="16" font-weight="700">%s</text>'
                     % (bx + 14, by + 26, started[i].strftime("%d %b %Y, %H:%M")))
        parts.append('<text x="%.1f" y="%.1f" fill="#000" font-size="20" font-weight="900">%s matched</text>'
                     % (bx + 14, by + 52, "{:,}".format(r[1])))
        parts.append('<text x="%.1f" y="%.1f" fill="#333" font-size="16">%.2f%% of code%s</text></g>'
                     % (bx + 14, by + 76, pct, "" if not r[2] else ", %d non matching" % r[2]))
        parts.append("</g>")
    parts.append('<text x="%d" y="%d" fill="#22e05a" font-size="20" font-weight="900" text-anchor="end">%s now</text>'
                 % (width - right, top - 8, "{:,}".format(rows[-1][1])))
    if len(rows) < 2:
        parts.append('<text x="%d" y="%d" fill="#a6a6a6" font-size="18" text-anchor="middle">'
                     'More points appear as progress is recorded.</text>' % (width // 2, height // 2 - 40))
    parts.append("</svg>")
    return "\n".join(parts) + "\n"


def write_page(groups, stats, rows):
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
              "fnbar": "%.2f" % (max(share, 1.5) if share > 0 else 0),
              "history": history_svg(rows)}
    for key, value in tokens.items():
        template = template.replace("{{%s}}" % key, value)
    page = template.replace("/*DATA*/null", json.dumps(data, separators=(",", ":")).replace("</", "<\\/"))
    out = OUT / "index.html"
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(page)
    (out.parent / ".nojekyll").touch()
    if not PUBLISH:
        shutil.copyfile(ROOT / "docs" / "btn-series.png", OUT / "btn-series.png")
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
    out = OUT / "progress.svg"
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text("\n".join(svg) + "\n")
    stats = {
        "matched": len(matched),
        "partial": sum(1 for items in groups.values() for item in items if item[1] == "partial"),
        "total": total_functions,
        "bytesMatched": sum(matched),
        "bytesTotal": total_bytes,
        "updated": datetime.date.today().isoformat(),
    }
    rows = record_history(stats) if "--record" in sys.argv else (read_history() or [current_row(stats)])
    (OUT / "history.svg").write_text(history_svg(rows))
    page = write_page(groups, stats, rows)
    function_percent = 100.0 * len(matched) / total_functions if total_functions else 0.0
    BADGE.write_text(
        badge("DR1_us", ["code %.2f%%" % percent, "functions %.2f%%" % function_percent]))
    print("%d of %d functions matched, %.2f%% of code" % (len(matched), total_functions, percent))
    print("wrote %s" % page.relative_to(ROOT))
    print("wrote %s (%d boxes, %d bytes)" % (out.relative_to(ROOT), len(shapes), out.stat().st_size))
    return 0


if __name__ == "__main__":
    sys.exit(main())
