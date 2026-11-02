// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /EHa
#include "engine/render/AgPlatformRenderListProcessor_CacheStates.h"

// FUNCTION: 0x5AE1B0 AgPlatformRenderListProcessor_CacheStates::setBlendFuncRgb
void AgPlatformRenderListProcessor_CacheStates::setBlendFuncRgb(int, const RenderCommand* cmd)
{
    int v0 = cmd->word[0];
    int v1 = cmd->word[1];
    if (pending.blendFunc[0] != v0 || pending.blendFunc[1] != v1)
    {
        pending.blendFunc[0] = v0;
        pending.blendFunc[1] = v1;
        pending.blendDirty = 1;
    }
}

// FUNCTION: 0x5AE1F0 AgPlatformRenderListProcessor_CacheStates::setBlendEnable
void AgPlatformRenderListProcessor_CacheStates::setBlendEnable(int, const RenderCommand* cmd)
{
    int value = cmd->word[0] != 0;
    if (pending.blendEnable != value)
    {
        pending.blendEnable = value;
        pending.blendDirty = 1;
    }
}

// FUNCTION: 0x5AE220 AgPlatformRenderListProcessor_CacheStates::setBlendFuncSeparate
void AgPlatformRenderListProcessor_CacheStates::setBlendFuncSeparate(int, const RenderCommand* cmd)
{
    int v0 = cmd->word[0];
    int v1 = cmd->word[1];
    int v2 = cmd->word[2];
    int v3 = cmd->word[3];
    if (pending.blendFunc[0] != v0 || pending.blendFunc[1] != v1 || pending.blendFunc[2] != v2 || pending.blendFunc[3] != v3)
    {
        pending.blendFunc[0] = v0;
        pending.blendFunc[1] = v1;
        pending.blendFunc[2] = v2;
        pending.blendFunc[3] = v3;
        pending.blendDirty = 1;
    }
}

// FUNCTION: 0x5AE280 AgPlatformRenderListProcessor_CacheStates::setBlendEquation
void AgPlatformRenderListProcessor_CacheStates::setBlendEquation(int, const RenderCommand* cmd)
{
    int value = cmd->word[0];
    if (pending.blendEquation != value)
    {
        pending.blendEquation = value;
        pending.blendDirty = 1;
    }
}

// FUNCTION: 0x5AE2B0 AgPlatformRenderListProcessor_CacheStates::setCullMode
void AgPlatformRenderListProcessor_CacheStates::setCullMode(int, const RenderCommand* cmd)
{
    int value = cmd->word[0];
    if (pending.cullMode != value)
    {
        pending.cullMode = value;
        pending.cullDirty = 1;
    }
}

// FUNCTION: 0x5AE2E0 AgPlatformRenderListProcessor_CacheStates::setDepthFunc
void AgPlatformRenderListProcessor_CacheStates::setDepthFunc(int, const RenderCommand* cmd)
{
    int value = cmd->word[0];
    if (pending.depthFunc != value)
    {
        pending.depthFunc = value;
        pending.depthDirty = 1;
    }
}

// FUNCTION: 0x5AE310 AgPlatformRenderListProcessor_CacheStates::setDepthTestEnable
void AgPlatformRenderListProcessor_CacheStates::setDepthTestEnable(int, const RenderCommand* cmd)
{
    int value = cmd->word[0] != 0;
    if (pending.depthTestEnable != value)
    {
        pending.depthTestEnable = value;
        pending.depthDirty = 1;
    }
}

// FUNCTION: 0x5AE340 AgPlatformRenderListProcessor_CacheStates::setDepthWriteEnable
void AgPlatformRenderListProcessor_CacheStates::setDepthWriteEnable(int, const RenderCommand* cmd)
{
    int value = cmd->word[0] != 0;
    if (pending.depthWriteEnable != value)
    {
        pending.depthWriteEnable = value;
        pending.depthDirty = 1;
    }
}

// FUNCTION: 0x5AE4C0 AgPlatformRenderListProcessor_CacheStates::setScissorEnable
void AgPlatformRenderListProcessor_CacheStates::setScissorEnable(int, const RenderCommand* cmd)
{
    int value = cmd->word[0] != 0;
    if (pending.scissorEnable != value)
    {
        pending.scissorEnable = value;
        pending.scissorDirty = 1;
    }
}

// FUNCTION: 0x5AE5D0 AgPlatformRenderListProcessor_CacheStates::setStencilEnable
void AgPlatformRenderListProcessor_CacheStates::setStencilEnable(int, const RenderCommand* cmd)
{
    int value = cmd->word[0] != 0;
    if (pending.stencilEnable != value)
    {
        pending.stencilEnable = value;
        pending.stencilDirty = 1;
    }
}

// FUNCTION: 0x5AE600 AgPlatformRenderListProcessor_CacheStates::setStencilFunc
void AgPlatformRenderListProcessor_CacheStates::setStencilFunc(int, const RenderCommand* cmd)
{
    int v0 = cmd->word[0];
    int v1 = cmd->word[1];
    int v2 = cmd->word[2];
    if (pending.stencilFunc != v0 || pending.stencilRef != v1 || pending.stencilReadMask != v2)
    {
        pending.stencilFunc = v0;
        pending.stencilRef = v1;
        pending.stencilReadMask = v2;
        pending.stencilDirty = 1;
    }
}

// FUNCTION: 0x5AE650 AgPlatformRenderListProcessor_CacheStates::setStencilOp
void AgPlatformRenderListProcessor_CacheStates::setStencilOp(int, const RenderCommand* cmd)
{
    int v0 = cmd->word[0];
    int v1 = cmd->word[1];
    int v2 = cmd->word[2];
    if (pending.stencilDepthPass != v0 || pending.stencilDepthFail != v1 || pending.stencilFail != v2)
    {
        pending.stencilDepthPass = v0;
        pending.stencilDepthFail = v1;
        pending.stencilFail = v2;
        pending.stencilDirty = 1;
    }
}

// FUNCTION: 0x5AE6A0 AgPlatformRenderListProcessor_CacheStates::setStencilWriteMask
void AgPlatformRenderListProcessor_CacheStates::setStencilWriteMask(int, const RenderCommand* cmd)
{
    int value = cmd->word[0] != 0;
    if (pending.stencilWriteMask != value)
    {
        pending.stencilWriteMask = value;
        pending.stencilDirty = 1;
    }
}

// FUNCTION: 0x5AE570 AgPlatformRenderListProcessor_CacheStates::setViewport
void AgPlatformRenderListProcessor_CacheStates::setViewport(int, const RenderCommand* cmd)
{
    IntRect rect = {(int)cmd->real[0], (int)cmd->real[1], (int)cmd->real[2], (int)cmd->real[3]};
    viewport = rect;
    viewportDirty = 1;
}

// FUNCTION: 0x5AE4F0 AgPlatformRenderListProcessor_CacheStates::setScissorRect
void AgPlatformRenderListProcessor_CacheStates::setScissorRect(int, const RenderCommand* cmd)
{
    IntRect rect = {(int)cmd->real[0], (int)cmd->real[1], (int)cmd->real[2], (int)cmd->real[3]};
    if (pending.scissorRect.a != rect.a || pending.scissorRect.b != rect.b || pending.scissorRect.c != rect.c || pending.scissorRect.d != rect.d)
    {
        pending.scissorRect = rect;
        pending.scissorDirty = 1;
    }
}

// FUNCTION: 0x5AE420 AgPlatformRenderListProcessor_CacheStates::setSamplerState
void AgPlatformRenderListProcessor_CacheStates::setSamplerState(int, const RenderCommand* cmd)
{
    int magFilter = cmd->sampler.magFilter;
    int minFilter = cmd->sampler.minFilter;
    int wrapU = cmd->sampler.wrapU;
    int wrapV = cmd->sampler.wrapV;
    int unit = cmd->sampler.unit;
    if (((int*)this)[(unit + 22) * 5] != wrapV || pending.sampler[unit].wrapU != wrapU || pending.sampler[unit].minFilter != minFilter || pending.sampler[unit].magFilter != magFilter)
    {
        pending.sampler[unit].wrapU = wrapU;
        pending.sampler[unit].magFilter = magFilter;
        pending.sampler[unit].minFilter = minFilter;
        ((int*)this)[(unit + 22) * 5] = wrapV;
        pending.sampler[unit].dirty = 1;
    }
}

// FUNCTION: 0x5AE370 AgPlatformRenderListProcessor_CacheStates::invalidate
void AgPlatformRenderListProcessor_CacheStates::invalidate(int cullBits, int blendBits, int depthBits, int stencilBits, int scissorBits, int samplerBits)
{
    committed.blendDirty = blendBits;
    committed.cullDirty = cullBits;
    committed.depthDirty = depthBits;
    committed.stencilDirty = stencilBits;
    committed.scissorDirty = scissorBits;
    pending.cullDirty = cullBits != 0;
    pending.blendDirty = blendBits != 0;
    pending.depthDirty = depthBits != 0;
    pending.stencilDirty = stencilBits != 0;
    pending.scissorDirty = scissorBits != 0;
    for (int i = 0; i < 16; i++)
    {
        committed.sampler[i].dirty = samplerBits;
        pending.sampler[i].dirty = samplerBits != 0;
    }
}

// FUNCTION: 0x5ADD30 ??0AgPlatformRenderListProcessor_CacheStates@@QAE@XZ
AgPlatformRenderListProcessor_CacheStates::AgPlatformRenderListProcessor_CacheStates()
{
    pending.cullMode = 0;
    pending.blendEnable = 0;
    pending.blendEquation = 0;
    pending.blendFunc[0] = 2;
    pending.blendFunc[1] = 3;
    pending.blendFunc[2] = 1;
    pending.blendFunc[3] = 0;
    pending.blendDirty = 0;
    pending.depthTestEnable = 0;
    pending.depthWriteEnable = 0;
    pending.depthFunc = 1;
    pending.depthDirty = 0;
    pending.stencilEnable = 0;
    pending.stencilFunc = 0;
    pending.stencilFail = 0;
    pending.stencilDepthFail = 0;
    pending.stencilDepthPass = 0;
    pending.stencilRef = 0;
    pending.stencilReadMask = -1;
    pending.stencilWriteMask = -1;
    pending.stencilDirty = 0;
    pending.scissorEnable = 0;
    pending.scissorRect.a = 0;
    pending.scissorRect.b = 0;
    pending.scissorRect.c = 0;
    pending.scissorRect.d = 0;
    pending.scissorDirty = 0;
    {
        SamplerState* m = pending.sampler;
        for (int i = 15; i >= 0; i--)
        {
            m->magFilter = 1;
            m->minFilter = 1;
            m->wrapU = 1;
            m->wrapV = 1;
            m->dirty = 0;
            m++;
        }
    }
    committed.cullMode = 0;
    committed.blendEnable = 0;
    committed.blendEquation = 0;
    committed.blendFunc[0] = 2;
    committed.blendFunc[1] = 3;
    committed.blendFunc[2] = 1;
    committed.blendFunc[3] = 0;
    committed.blendDirty = 0;
    committed.depthTestEnable = 0;
    committed.depthWriteEnable = 0;
    committed.depthFunc = 1;
    committed.depthDirty = 0;
    committed.stencilEnable = 0;
    committed.stencilFunc = 0;
    committed.stencilFail = 0;
    committed.stencilDepthFail = 0;
    committed.stencilDepthPass = 0;
    committed.stencilRef = 0;
    committed.stencilReadMask = -1;
    committed.stencilWriteMask = -1;
    committed.stencilDirty = 0;
    committed.scissorEnable = 0;
    committed.scissorRect.a = 0;
    committed.scissorRect.b = 0;
    committed.scissorRect.c = 0;
    committed.scissorRect.d = 0;
    committed.scissorDirty = 0;
    {
        SamplerState* m = committed.sampler;
        for (int i = 15; i >= 0; i--)
        {
            m->magFilter = 1;
            m->minFilter = 1;
            m->wrapU = 1;
            m->wrapV = 1;
            m->dirty = 0;
            m++;
        }
    }
    IntRect empty = {0, 0, 0, 0};
    viewport = empty;
    viewportDirty = 1;
    committed.cullDirty = -1;
    pending.cullDirty = -1;
    committed.blendDirty = -1;
    pending.blendDirty = -1;
    committed.depthDirty = -1;
    pending.depthDirty = -1;
    committed.stencilDirty = -1;
    pending.stencilDirty = -1;
    committed.scissorDirty = -1;
    pending.scissorDirty = -1;
    for (int i = 0; i < 16; i++)
    {
        committed.sampler[i].dirty = -1;
        pending.sampler[i].dirty = -1;
    }
}

// FUNCTION: 0x5AE150 ??_GAgPlatformRenderListProcessor_CacheStates@@UAEPAXI@Z
