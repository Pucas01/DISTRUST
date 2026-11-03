// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /EHa
#include "engine/system/AgExceptionHandler.h"

// FUNCTION: 0x526680 ??_GAgExceptionHandler@@UAEPAXI@Z
// FUNCTION: 0x5265E0 ??1?$AgSingleton@VAgExceptionHandler@@@@UAE@XZ
// FUNCTION: 0x526650 ??_G?$AgSingleton@VAgExceptionHandler@@@@UAEPAXI@Z
template class AgSingleton<AgExceptionHandler>;

AgExceptionHandler* createExceptionHandler()
{
    return new AgExceptionHandler;
}

// STUB: 0x5265F0 sub_5265F0 (94 bytes)
void sub_5265F0()
{
}
