// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/render/AgConstantsBuffer.gen.h"

// FUNCTION: 0x532E80 createConstantsBuffer
AgResource* createConstantsBuffer()
{
    return new AgConstantsBuffer();
}
