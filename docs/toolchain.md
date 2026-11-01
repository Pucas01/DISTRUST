# Toolchain

The game was built with Visual Studio 2012.

Everything lives in `toolchain/`,

## Compiler version

Visual Studio 2012 Update 4, `cl.exe` 17.00.61030.

The exe's shows that most of the game's code was built with 17.00.61219, a slightly newer build that has no public download as far as i know.

Other stuff i found in the exe which are kinda important i guess:

- Linker 11.0.
- Frame pointers are kept (`/Oy-`).
- The PDB path is `H:\Danganronpa\Development\Source\Prg\Prj\Vita\Win32\Master\DR1_us\DR1_us.pdb`

Default flags are in `config/flags.txt`: `/nologo /c /O2 /Oy- /Gy /GS- /Zc:wchar_t`.

## Getting the compiler files

`python3 configure.py` does this for you the first time. To do it by hand:

```sh
python3 tools/toolchain.py
```

It needs [7-Zip](https://www.7-zip.org/) on your `PATH`. It will:

1. Download two ISOs from Microsoft into `toolchain/downloads/`. and each file is checked against a SHA-256:
   - `VS2012_WDX_ENU.iso` (Express for Windows Desktop, 608 MB)
   - `VS2012.4.iso` (Update 4, 2.4 GB)
2. Unpack the compiler into `toolchain/bin/`. `cl.exe`, `c2.dll`, `c1.dll`, `c1xx.dll`, `c1xxast.dll`, `c1ast.dll` and `link.exe` come from the Update 4 compiler cab. `mspdb110.dll`, `mspdbcore.dll`, `mspdbsrv.exe`, `mspft80.dll`, `clui.dll` (also in `bin/1033/`), `msvcr110.dll` and `msvcp110.dll` come from the Express ISO.
3. Read `vc_librarycore86.msi` itself and unpack only its `VC/include` headers into `toolchain/vclib/`.
4. Delete the ISOs. Pass `--keep-downloads` to keep them.

If everything is already in `toolchain/`, it does nothing. `--force` unpacks again.

## wibo

On Linux the compiler runs under [decompals/wibo](https://github.com/decompals/wibo), a submodule in `external/wibo`.

`configure.py` fetches the submodule and builds it if `external/wibo/build/release64/wibo` is missing. To do it by hand:

```sh
git submodule update --init
cd external/wibo
cmake --preset release64
cmake --build --preset release64
```

## Check it

Linux:

```sh
external/wibo/build/release64/wibo toolchain/bin/cl.exe
```

Windows:

```bat
toolchain\bin\cl.exe
```

Either should print `Version 17.00.61030 for x86`.
