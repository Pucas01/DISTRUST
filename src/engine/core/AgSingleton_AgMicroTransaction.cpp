// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/core/AgSingleton.h"

class AgMicroTransaction;

// FUNCTION: 0x549F30 ??_G?$AgSingleton@VAgMicroTransaction@@@@UAEPAXI@Z
template class AgSingleton<AgMicroTransaction>;
