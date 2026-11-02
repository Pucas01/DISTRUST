// FLAGS: /nologo /c /O1 /Oy- /Gy /Zl /D_MT /D_CRTBLD /DWIN32 /Itoolchain/crt /Itoolchain/winsdk/um /Itoolchain/winsdk/shared /Itoolchain/winsdk/winrt /GS /arch:IA32 /TC
// FUNCTION: 0x5CE97C __doserrno
// FUNCTION: 0x5CE98F _dosmaperr
// FUNCTION: 0x5CE9B0 _errno
// FUNCTION: 0x5CE9C3 _get_errno_from_oserr
#include "../../../toolchain/crt/dosmap.c"
