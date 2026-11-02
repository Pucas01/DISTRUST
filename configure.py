#!/usr/bin/env python3
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent
PY = '"%s"' % sys.executable
sys.path.insert(0, str(ROOT / "tools"))
from dr1lib import BLOCK_MARKER, FLAGS_MARKER, MARKER
from toolchain import ensure


def main():
    ensure()
    default_flags = (ROOT / "config" / "flags.txt").read_text().strip()
    checked, stubs = [], []
    for path in sorted((ROOT / "src").rglob("*.cpp")):
        text = path.read_text().splitlines()
        unit = path.relative_to(ROOT / "src").with_suffix("").as_posix()
        flags = next((FLAGS_MARKER.match(l).group(1) for l in text if FLAGS_MARKER.match(l)), default_flags)
        (checked if any(MARKER.match(l) or BLOCK_MARKER.match(l) for l in text) else stubs).append((unit, path.relative_to(ROOT).as_posix(), flags))

    tools = " ".join("tools/%s" % n for n in ("cl.py", "check_obj.py", "report.py", "progress.py", "dr1lib.py", "coffobj.py", "objdiff_gen.py"))
    sources = " ".join(src for _, src, _ in checked + stubs)
    out = [
        "ninja_required_version = 1.7",
        "",
        "rule configure",
        "  command = %s configure.py" % PY,
        "  description = CONFIGURE",
        "  generator = 1",
        "",
        "rule cc",
        "  command = %s tools/cl.py $out $in -- $flags" % PY,
        "  description = CC $in",
        "  deps = msvc",
        "  msvc_deps_prefix = Note: including file:",
        "",
        "rule check",
        "  command = %s tools/check_obj.py $in $out" % PY,
        "  description = CHECK $unit",
        "",
        "rule report",
        "  command = %s tools/report.py" % PY,
        "  description = REPORT",
        "  pool = console",
        "",
        "rule progress",
        "  command = %s tools/progress.py" % PY,
        "  description = PROGRESS",
        "  pool = console",
        "",
        "build build.ninja: configure | configure.py %s" % sources,
        "",
    ]
    check_outputs = []
    for unit, src, flags in checked:
        obj, target, result = "build/obj/%s.obj" % unit, "build/target/%s.obj" % unit, "build/check/%s.json" % unit
        out += ["build %s: cc %s | config/flags.txt" % (obj, src), "  flags = %s" % flags,
                "build %s %s: check %s %s | orig/DR1_us.exe config/functions.tsv config/symbols.tsv %s"
                % (target, result, src, obj, tools), "  unit = %s" % unit, ""]
        check_outputs += [target, result]
    stub_objs = []
    for unit, src, flags in stubs:
        obj = "build/obj/%s.obj" % unit
        out += ["build %s: cc %s | config/flags.txt" % (obj, src), "  flags = %s" % flags, ""]
        stub_objs.append(obj)
    out += ["build checks: phony " + " ".join(check_outputs),
            "build all: phony checks " + " ".join(stub_objs),
            "build report: report checks",
            "build progress: progress checks", "",
            "default checks", ""]
    (ROOT / "build.ninja").write_text("\n".join(out))

    project = {
        "$schema": "https://raw.githubusercontent.com/encounter/objdiff/main/config.schema.json",
        "custom_make": sys.executable,
        "custom_args": ["tools/compare.py"],
        "build_target": True,
        "build_base": True,
        "watch_patterns": ["src/**/*.cpp", "include/**/*.h", "config/*"],
        "units": [{"name": unit, "target_path": "build/target/%s.obj" % unit,
                   "base_path": "build/obj/%s.obj" % unit} for unit, _, _ in checked],
    }
    (ROOT / "objdiff.json").write_text(json.dumps(project, indent=2) + "\n")
    print("configured: %d checked files, %d stub-only files" % (len(checked), len(stubs)))


if __name__ == "__main__":
    main()
