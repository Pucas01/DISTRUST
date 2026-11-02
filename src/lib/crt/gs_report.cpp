// FLAGS: /nologo /c /O1 /Oy- /Gy /Zl /D_MT /D_CRTBLD /DWIN32 /Itoolchain/crt /Itoolchain/winsdk/um /Itoolchain/winsdk/shared /Itoolchain/winsdk/winrt /GS- /TC
// FUNCTION: 0x5C7B56 __raise_securityfailure
// FUNCTION: 0x5C7B93 __report_gsfailure
// FUNCTION: 0x5C7C8C __report_rangecheckfailure
// FUNCTION: 0x5C7C98 __report_securityfailure
#include "../../../toolchain/crt/gs_report.c"
