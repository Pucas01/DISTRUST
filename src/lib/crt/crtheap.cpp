// FLAGS: /nologo /c /O1 /Oy- /Gy /Zl /D_MT /D_CRTBLD /DWIN32 /Itoolchain/crt /Itoolchain/winsdk/um /Itoolchain/winsdk/shared /Itoolchain/winsdk/winrt /GS /arch:IA32 /TC
// FUNCTION: 0x5CD74A _calloc_crt
// FUNCTION: 0x5CD794 _malloc_crt
// FUNCTION: 0x5CD7DD _realloc_crt
// FUNCTION: 0x5CD829 _recalloc_crt
#include "../../../toolchain/crt/crtheap.c"
