// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/system/AgPCAllocators.gen.h"

// FUNCTION: 0x5A30C0 ??_GAgPCAllocators@@UAEPAXI@Z

AgPCAllocators* createAgPCAllocators()
{
    return new AgPCAllocators;
}
