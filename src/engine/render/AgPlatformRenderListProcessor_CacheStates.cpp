#include "engine/render/AgPlatformRenderListProcessor_CacheStates.h"

// FUNCTION: 0x5AE1B0 AgPlatformRenderListProcessor_CacheStates::setGroupBPair
void AgPlatformRenderListProcessor_CacheStates::setGroupBPair(int, const RenderCommand* cmd)
{
    int v0 = cmd->word[0];
    int v1 = cmd->word[1];
    if (groupBRect[0] != v0 || groupBRect[1] != v1)
    {
        groupBRect[0] = v0;
        groupBRect[1] = v1;
        groupBDirty = 1;
    }
}

// FUNCTION: 0x5AE1F0 AgPlatformRenderListProcessor_CacheStates::setGroupBFlag
void AgPlatformRenderListProcessor_CacheStates::setGroupBFlag(int, const RenderCommand* cmd)
{
    int value = cmd->word[0] != 0;
    if (groupBFlag != value)
    {
        groupBFlag = value;
        groupBDirty = 1;
    }
}

// FUNCTION: 0x5AE220 AgPlatformRenderListProcessor_CacheStates::setGroupBRect
void AgPlatformRenderListProcessor_CacheStates::setGroupBRect(int, const RenderCommand* cmd)
{
    int v0 = cmd->word[0];
    int v1 = cmd->word[1];
    int v2 = cmd->word[2];
    int v3 = cmd->word[3];
    if (groupBRect[0] != v0 || groupBRect[1] != v1 || groupBRect[2] != v2 || groupBRect[3] != v3)
    {
        groupBRect[0] = v0;
        groupBRect[1] = v1;
        groupBRect[2] = v2;
        groupBRect[3] = v3;
        groupBDirty = 1;
    }
}

// FUNCTION: 0x5AE280 AgPlatformRenderListProcessor_CacheStates::setGroupBValue
void AgPlatformRenderListProcessor_CacheStates::setGroupBValue(int, const RenderCommand* cmd)
{
    int value = cmd->word[0];
    if (groupBValue != value)
    {
        groupBValue = value;
        groupBDirty = 1;
    }
}

// FUNCTION: 0x5AE2B0 AgPlatformRenderListProcessor_CacheStates::setGroupAValue
void AgPlatformRenderListProcessor_CacheStates::setGroupAValue(int, const RenderCommand* cmd)
{
    int value = cmd->word[0];
    if (groupAValue != value)
    {
        groupAValue = value;
        groupADirty = 1;
    }
}

// FUNCTION: 0x5AE2E0 AgPlatformRenderListProcessor_CacheStates::setGroupCValue
void AgPlatformRenderListProcessor_CacheStates::setGroupCValue(int, const RenderCommand* cmd)
{
    int value = cmd->word[0];
    if (groupCValue != value)
    {
        groupCValue = value;
        groupCDirty = 1;
    }
}

// FUNCTION: 0x5AE310 AgPlatformRenderListProcessor_CacheStates::setGroupCFlagA
void AgPlatformRenderListProcessor_CacheStates::setGroupCFlagA(int, const RenderCommand* cmd)
{
    int value = cmd->word[0] != 0;
    if (groupCFlagA != value)
    {
        groupCFlagA = value;
        groupCDirty = 1;
    }
}

// FUNCTION: 0x5AE340 AgPlatformRenderListProcessor_CacheStates::setGroupCFlagB
void AgPlatformRenderListProcessor_CacheStates::setGroupCFlagB(int, const RenderCommand* cmd)
{
    int value = cmd->word[0] != 0;
    if (groupCFlagB != value)
    {
        groupCFlagB = value;
        groupCDirty = 1;
    }
}

// FUNCTION: 0x5AE4C0 AgPlatformRenderListProcessor_CacheStates::setScissorEnable
void AgPlatformRenderListProcessor_CacheStates::setScissorEnable(int, const RenderCommand* cmd)
{
    int value = cmd->word[0] != 0;
    if (scissorEnable != value)
    {
        scissorEnable = value;
        scissorDirty = 1;
    }
}

// FUNCTION: 0x5AE5D0 AgPlatformRenderListProcessor_CacheStates::setBlendEnable
void AgPlatformRenderListProcessor_CacheStates::setBlendEnable(int, const RenderCommand* cmd)
{
    int value = cmd->word[0] != 0;
    if (blendEnable != value)
    {
        blendEnable = value;
        blendDirty = 1;
    }
}

// FUNCTION: 0x5AE600 AgPlatformRenderListProcessor_CacheStates::setBlendColorFactors
void AgPlatformRenderListProcessor_CacheStates::setBlendColorFactors(int, const RenderCommand* cmd)
{
    int v0 = cmd->word[0];
    int v1 = cmd->word[1];
    int v2 = cmd->word[2];
    if (blendColorA != v0 || blendColorB != v1 || blendColorC != v2)
    {
        blendColorA = v0;
        blendColorB = v1;
        blendColorC = v2;
        blendDirty = 1;
    }
}

// FUNCTION: 0x5AE650 AgPlatformRenderListProcessor_CacheStates::setBlendAlphaFactors
void AgPlatformRenderListProcessor_CacheStates::setBlendAlphaFactors(int, const RenderCommand* cmd)
{
    int v0 = cmd->word[0];
    int v1 = cmd->word[1];
    int v2 = cmd->word[2];
    if (blendAlphaA != v0 || blendAlphaB != v1 || blendAlphaC != v2)
    {
        blendAlphaA = v0;
        blendAlphaB = v1;
        blendAlphaC = v2;
        blendDirty = 1;
    }
}

// FUNCTION: 0x5AE6A0 AgPlatformRenderListProcessor_CacheStates::setBlendSeparateAlpha
void AgPlatformRenderListProcessor_CacheStates::setBlendSeparateAlpha(int, const RenderCommand* cmd)
{
    int value = cmd->word[0] != 0;
    if (blendSeparateAlpha != value)
    {
        blendSeparateAlpha = value;
        blendDirty = 1;
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
    if (scissorRect.a != rect.a || scissorRect.b != rect.b || scissorRect.c != rect.c || scissorRect.d != rect.d)
    {
        scissorRect = rect;
        scissorDirty = 1;
    }
}

// STUB: 0x5AE420 AgPlatformRenderListProcessor_CacheStates::setTargetMask (145 bytes)
void AgPlatformRenderListProcessor_CacheStates::setTargetMask(int, const RenderCommand*)
{
}

// FUNCTION: 0x5AE370 AgPlatformRenderListProcessor_CacheStates::initialize
void AgPlatformRenderListProcessor_CacheStates::initialize(int maskA, int maskB, int maskC, int maskD, int maskE, int maskTargets)
{
    initMaskB = maskB;
    initMaskA = maskA;
    initMaskC = maskC;
    initMaskD = maskD;
    initMaskE = maskE;
    groupADirty = maskA != 0;
    groupBDirty = maskB != 0;
    groupCDirty = maskC != 0;
    blendDirty = maskD != 0;
    scissorDirty = maskE != 0;
    for (int i = 0; i < 16; i++)
    {
        targetValue[i][0] = maskTargets;
        targetMask[i].dirty = maskTargets != 0;
    }
}

// STUB: 0x5AE150 AgPlatformRenderListProcessor_CacheStates::vfn_0 (88 bytes)
void AgPlatformRenderListProcessor_CacheStates::vfn_0()
{
}
