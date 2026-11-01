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

1. Download the ISO from Microsoft:

   `https://download.microsoft.com/download/1/F/5/1F519CC5-0B90-4EA3-8159-33BFB97EF4D9/VS2012_WDX_ENU.iso`

2. Download the Update 4 ISO:

   `https://download.microsoft.com/download/D/4/8/D48D1AC2-A297-4C9E-A9D0-A218E6609F06/VSU4/VS2012.4.iso`


3. Extract the compiler cab from the Update 4 ISO (`packages/vc_compilercore86/vc_CompilerCore86.cab`) and copy these into `toolchain/bin/`, dropping the `WinC_..._` prefix and the `_F` suffix:

   `cl.exe`, `c2.dll`, `c1.dll`, `c1xx.dll`, `c1xxast.dll`, `c1ast.dll`, `link.exe`, `mspdb110.dll`, `mspdbcore.dll`, `mspdbsrv.exe`

4. From the Express ISO, take `clui.dll` (cab `vc_compilerCore86res`) and `msvcr110.dll` and `msvcp110.dll` (cab `vcRuntimeMinimum_x86`). Put them in `toolchain/bin/`. `clui.dll` also goes in `toolchain/bin/1033/`.

5. Unpack the headers and libraries from two MSI packages without installing them:
   - `packages/vc_librarycore86/vc_librarycore86.msi` into `toolchain/vclib`
   - `packages/Windows_SDK/Windows Software Development Kit-x86_en-us.msi` into `toolchain/sdk`

   On Windows: `msiexec /a <package>.msi /qn TARGETDIR=<folder>`

   On Linux: `msiextract -C <folder> <package>.msi` (from `msitools`).

## wibo

As of RIGHT NOW upstream wibo cannot run VS2012's `cl.exe`. `external/wibo` is a submodule of [Pucas01/wibo](https://github.com/Pucas01/wibo), which adds the missing functions.

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
