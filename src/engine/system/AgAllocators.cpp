// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/system/AgAllocators.gen.h"

// FUNCTION: 0x5A3060 ??_GAgAllocators@@UAEPAXI@Z

AgAllocators* createAgAllocators()
{
    return new AgAllocators;
}
