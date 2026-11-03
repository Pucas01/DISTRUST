// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/json/AgJsonMeta.h"
#include "engine/core/AgReference.inl"

// FUNCTION: 0x51F980 ??1?$AgReference@UAgJsonMeta@@@@QAE@XZ
template AgReference<AgJsonMeta>::~AgReference();
