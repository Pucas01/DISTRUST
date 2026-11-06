// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/render/AgShader.gen.h"

// FUNCTION: 0x54C1F0 ??_GAgShader@@UAEPAXI@Z

AgShader* createAgShader()
{
    return new AgShader;
}
