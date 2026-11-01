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
            unsigned char r, g, b, a;
            int index;
        } mask;
    };
};

struct IntRect
{
    int a;
    int b;
    int c;
    int d;
};

struct RenderTargetMask
{
    int r;
    int g;
    int b;
    int a;
    int dirty;
};

class AgPlatformRenderListProcessor_CacheStates
{
public:
    virtual void vfn_0();
    virtual void vfn_1();
    virtual void vfn_2();
    virtual void vfn_3();
    virtual void vfn_4();
    virtual void vfn_5();
    virtual void vfn_6();
    virtual void vfn_7();
    virtual void vfn_8();
    virtual void vfn_9();
    virtual void vfn_10();
    virtual void vfn_11();
    virtual void setGroupBFlag(int, const RenderCommand* cmd);
    virtual void setGroupBValue(int, const RenderCommand* cmd);
    virtual void setGroupBRect(int, const RenderCommand* cmd);
    virtual void setGroupBPair(int, const RenderCommand* cmd);
    virtual void setGroupCFlagA(int, const RenderCommand* cmd);
    virtual void setGroupCFlagB(int, const RenderCommand* cmd);
    virtual void setGroupCValue(int, const RenderCommand* cmd);
    virtual void setBlendEnable(int, const RenderCommand* cmd);
    virtual void setBlendColorFactors(int, const RenderCommand* cmd);
    virtual void setBlendAlphaFactors(int, const RenderCommand* cmd);
    virtual void setBlendSeparateAlpha(int, const RenderCommand* cmd);
    virtual void vfn_23();
    virtual void setViewport(int, const RenderCommand* cmd);
    virtual void setScissorEnable(int, const RenderCommand* cmd);
    virtual void setScissorRect(int, const RenderCommand* cmd);
    virtual void setGroupAValue(int, const RenderCommand* cmd);
    virtual void setTargetMask(int, const RenderCommand* cmd);
    virtual void vfn_29();
    virtual void vfn_30();
    virtual void initialize(int maskA, int maskB, int maskC, int maskD, int maskE, int maskTargets);

protected:
    unsigned char base_04[0x124];
    IntRect viewport;
    int viewportDirty;
    int groupAValue;
    int groupADirty;
    int groupBFlag;
    int groupBValue;
    int groupBRect[4];
    int groupBDirty;
    int groupCFlagA;
    int groupCFlagB;
    int groupCValue;
    int groupCDirty;
    int blendEnable;
    int blendColorA;
    int blendAlphaC;
    int blendAlphaB;
    int blendAlphaA;
    int blendColorB;
    int blendColorC;
    int blendSeparateAlpha;
    int blendDirty;
    int scissorEnable;
    IntRect scissorRect;
    int scissorDirty;
    RenderTargetMask targetMask[16];
    unsigned char unk_2EC[4];
    int initMaskA;
    unsigned char unk_2F4[0x18];
    int initMaskB;
    unsigned char unk_310[0xC];
    int initMaskC;
    unsigned char unk_320[0x20];
    int initMaskD;
    unsigned char unk_344[0x14];
    int initMaskE;
    unsigned char unk_35C[0x10];
    int targetValue[16][5];
};
