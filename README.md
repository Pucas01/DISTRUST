# DISTRUST

<p align="left">
  <picture>
    <source media="(prefers-color-scheme: dark)" srcset="assets/monokuma_dark.png">
    <img src="assets/monokuma.png" width="256" alt="Monokuma">
  </picture>
</p>

A work-in-progress decompilation of Danganronpa: Trigger Happy Havoc.

This repository does **not** contain any game assets or machine code. An existing copy of the game is required.

The long-term goal is not to FULLY finish this decomp, its mostly here to understand how danganronpa ticks

Supported versions:

- `DR1_us.exe`: Steam release, English (SHA-1 `e7881c959012c2d565070218b7f6c0d4795f21af`)

Dependencies
============

Windows
--------

- Install [Python](https://www.python.org/downloads/) and add it to `%PATH%`.
- Download [ninja](https://github.com/ninja-build/ninja/releases) and add it to `%PATH%`.
  - Quick install via pip: `pip install ninja`
- Set up the Visual Studio 2012 compiler files. See [Toolchain](docs/toolchain.md).

Linux
------

- Install [ninja](https://github.com/ninja-build/ninja/wiki/Pre-built-Ninja-packages), [CMake](https://cmake.org/download/), Python 3 and a C++ compiler (GCC or Clang).
- Set up the Visual Studio 2012 compiler files. See [Toolchain](docs/toolchain.md).

macOS
------

Not supported as of now.

Building
========

- Clone the repository with its submodules:

  ```sh
  git clone --recurse-submodules <repository url>
  ```

- Copy your game's `DR1_us.exe` to `orig/`.
- Configure:

  ```sh
  python3 configure.py
  ```

- Build:

  ```sh
  ninja
  ```

  This compiles every file that contains a rewritten function and checks each one against the original. Run `ninja report` for a summary, or `VERBOSE=1 ninja report` to also print the bytes of any mismatch. To compile the stub files as well, run `ninja all`.

Diffing
=======

Once the initial build succeeds, an `objdiff.json` should exist in the project root.

Download the latest release from [encounter/objdiff](https://github.com/encounter/objdiff). Under project settings, set `Project directory`. The configuration should be loaded automatically.

Select an object from the left sidebar to begin diffing. Changes to the project will rebuild automatically: changes to source files, headers or anything in `config/`.

To get a progress report from the command line, pass the relocation option so that wrong globals and call targets count against a match:

```sh
objdiff-cli report generate -c functionRelocDiffs=name_address -o build/report.json
```

Documentation
=============

- [Getting Started](docs/getting_started.md): project layout and how to rewrite a function.
- [Toolchain](docs/toolchain.md): the compiler, its flags, and wibo.

Credits
=======

Thanks to [decompals](https://github.com/decompals/wibo) for wibo and [encounter](https://github.com/encounter/objdiff) for objdiff.

Monokuma and Danganronpa belong to Spike Chunsoft.
