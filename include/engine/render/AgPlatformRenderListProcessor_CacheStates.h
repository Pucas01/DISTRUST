#pragma once

struct RenderCommand
{
    int header;
    union
    {
        int word[4];
        float real[4];
        struct
        {
            unsigned char magFilter, minFilter, wrapU, wrapV;
            int unit;
        } sampler;
    };
};

struct IntRect
{
    int a;
    int b;
    int c;
    int d;
};

struct SamplerState
{
    int magFilter;
    int minFilter;
    int wrapU;
    int wrapV;
    int dirty;
};

struct RenderStateBlock
{
    int cullMode;
    int cullDirty;
    int blendEnable;
    int blendEquation;
    int blendFunc[4];
    int blendDirty;
    int depthTestEnable;
    int depthWriteEnable;
    int depthFunc;
    int depthDirty;
    int stencilEnable;
    int stencilFunc;
    int stencilFail;
    int stencilDepthFail;
    int stencilDepthPass;
    int stencilRef;
    int stencilReadMask;
    int stencilWriteMask;
    int stencilDirty;
    int scissorEnable;
    IntRect scissorRect;
    int scissorDirty;
    SamplerState sampler[16];
};

class AgRenderListProcessor
{
public:
    AgRenderListProcessor();
    virtual ~AgRenderListProcessor();
    virtual void vfn_1();
    virtual void vfn_2();
    virtual void vfn_3();
    virtual void vfn_4();
    virtual void vfn_5();
    virtual void vfn_6();
    virtual void vfn_7();
    virtual void vfn_8() = 0;

protected:
    unsigned char base_04[0x124];
};

class AgPlatformRenderListProcessor : public AgRenderListProcessor
{
public:
    AgPlatformRenderListProcessor() {}
};

class AgPlatformRenderListProcessor_CacheStates : public AgPlatformRenderListProcessor
{
public:
    AgPlatformRenderListProcessor_CacheStates();
    virtual void vfn_9();
    virtual void vfn_10();
    virtual void vfn_11();
    virtual void setBlendEnable(int, const RenderCommand* cmd);
    virtual void setBlendEquation(int, const RenderCommand* cmd);
    virtual void setBlendFuncSeparate(int, const RenderCommand* cmd);
    virtual void setBlendFuncRgb(int, const RenderCommand* cmd);
    virtual void setDepthTestEnable(int, const RenderCommand* cmd);
    virtual void setDepthWriteEnable(int, const RenderCommand* cmd);
    virtual void setDepthFunc(int, const RenderCommand* cmd);
    virtual void setStencilEnable(int, const RenderCommand* cmd);
    virtual void setStencilFunc(int, const RenderCommand* cmd);
    virtual void setStencilOp(int, const RenderCommand* cmd);
    virtual void setStencilWriteMask(int, const RenderCommand* cmd);
    virtual void vfn_23();
    virtual void setViewport(int, const RenderCommand* cmd);
    virtual void setScissorEnable(int, const RenderCommand* cmd);
    virtual void setScissorRect(int, const RenderCommand* cmd);
    virtual void setCullMode(int, const RenderCommand* cmd);
    virtual void setSamplerState(int, const RenderCommand* cmd);
    virtual void vfn_29();
    virtual void vfn_30();
    virtual void invalidate(int cullBits, int blendBits, int depthBits, int stencilBits, int scissorBits, int samplerBits);

protected:
    IntRect viewport;
    int viewportDirty;
    RenderStateBlock pending;
    RenderStateBlock committed;
};
