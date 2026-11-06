// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/render/AgPlatformRenderListProcessor.gen.h"

// FUNCTION: 0x4B0570 AgPlatformRenderListProcessor::vfn_8
void AgPlatformRenderListProcessor::vfn_8(int, int)
{
}

// FUNCTION: 0x5AE0F0 ??_GAgPlatformRenderListProcessor@@UAEPAXI@Z

AgPlatformRenderListProcessor* createAgPlatformRenderListProcessor()
{
    return new AgPlatformRenderListProcessor;
}
