# Getting Started

See [Dependencies](../README.md#dependencies) and [Building](../README.md#building) first.

## Layout

```
src/
  engine/     Ag* engine classes: render, audio, io, input, thread, online, system, json, movie, core
  game/       DR* game classes
  unsorted/   everything no class claims yet, grouped by address (see below)
  lib/        statically linked library code (CRT, ConcRT, STL, utf8, import thunks);
include/      one generated header per class, plus hand-written structs
config/       function list, class list, names, folder rules, catalog
tools/        build, check and generator scripts
external/     wibo 
orig/         your copy of DR1_us.exe 
toolchain/    compiler and SDK 
```

Every function in the exe has an entry in `config/catalog.tsv` and a definition in a `.cpp` under `src/`.

- A function nobody has rewritten yet is an empty definition marked `// STUB: 0xADDR name`.
- A rewritten function is marked `// FUNCTION: 0xADDR name` and is checked against the original.

The files in `src/unsorted/` are a placeholder grouping. Functions that no class claims sit in `src/unsorted/<XX>/tu_<address>.cpp`, where `XX` is the 64 KB block and the address is the first function in the file. The groups are guessed from calls and shared globals and strings, so a file may mix translation units or split one. Move a function into a properly named file once you know what it is please.

