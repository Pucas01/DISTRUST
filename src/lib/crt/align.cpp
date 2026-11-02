// FLAGS: /nologo /c /O1 /Oy- /Gy /Zl /D_MT /D_CRTBLD /DWIN32 /Itoolchain/crt /Itoolchain/winsdk/um /Itoolchain/winsdk/shared /Itoolchain/winsdk/winrt /GS /arch:IA32 /TC
// FUNCTION: 0x5CAF80 _aligned_malloc
// FUNCTION: 0x5CAF95 _aligned_offset_malloc
// FUNCTION: 0x5D075C _aligned_realloc
#include "../../../toolchain/crt/align.c"
