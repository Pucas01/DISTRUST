// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/render/AgPlatformResourceShaderProgram.gen.h"

// FUNCTION: 0x54E640 ??_GAgPlatformResourceShaderProgram@@UAEPAXI@Z

AgPlatformResourceShaderProgram* createAgPlatformResourceShaderProgram()
{
    return new AgPlatformResourceShaderProgram;
}
