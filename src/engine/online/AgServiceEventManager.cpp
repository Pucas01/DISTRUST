// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/online/AgServiceEventManager.gen.h"
#include "engine/core/AgSingleton.h"

// FUNCTION: 0x52B5C0 ??_GAgServiceEventManager@@UAEPAXI@Z

// FUNCTION: 0x52B530 ??1?$AgSingleton@VAgServiceEventManager@@@@UAE@XZ
// FUNCTION: 0x52B590 ??_G?$AgSingleton@VAgServiceEventManager@@@@UAEPAXI@Z
template class AgSingleton<AgServiceEventManager>;

// STUB: 0x52B540 sub_52B540 (66 bytes)
void sub_52B540()
{
}

AgServiceEventManager* createAgServiceEventManager()
{
    return new AgServiceEventManager;
}
