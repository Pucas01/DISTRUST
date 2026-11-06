// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/core/AgSingleton.h"

class AgAllocators;

// FUNCTION: 0x5A3030 ??_G?$AgSingleton@VAgAllocators@@@@UAEPAXI@Z
template class AgSingleton<AgAllocators>;
