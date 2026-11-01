# Getting Started

See [Dependencies](../README.md#dependencies) and [Building](../README.md#building) first.

## Layout

```
src/
  engine/     Ag* engine classes: render, audio, io, input, thread, online, system, json, movie, core
  game/       DR* game classes
  unsorted/   everything no class claims yet, in 64 KB address blocks
  lib/        statically linked library code (CRT, ConcRT, STL, utf8, import thunks); not rewritten
include/      one generated header per class, plus hand-written structs
config/       function list, class list, names, folder rules, catalog
tools/        build, check and generator scripts
external/     wibo (submodule)
orig/         your copy of DR1_us.exe (only the folder is tracked)
toolchain/    compiler and SDK (only the folder is tracked)
```

Every function in the exe has an entry in `config/catalog.tsv` and a definition in a `.cpp` under `src/`.

- A function nobody has rewritten yet is an empty definition marked `// STUB: 0xADDR name`.
- A rewritten function is marked `// FUNCTION: 0xADDR name` and is checked against the original.

The files in `src/unsorted/` are a placeholder grouping. The binary has no source file names, so functions that no class claims are split by address. `block_4F.cpp` holds everything from `0x4F0000` to `0x4FFFFF`. Move a function into a properly named file once you know what it is please.

