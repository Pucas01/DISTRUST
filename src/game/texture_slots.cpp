// FLAGS: /nologo /c /O2 /Oy- /Gy /GS- /Zc:wchar_t /arch:SSE2
#include <string.h>
#include "game/texture_slots.h"

// FUNCTION: 0x4DC760 lockTexturePalette
void* __cdecl lockTexturePalette(unsigned index)
{
    if (index <= 0x3FF)
    {
        TextureSlot* slot = &g_textureSlots[index];
        if (!slot->used)
            return 0;
        slot->dirty = 1;
        return slot->palette;
    }
    return 0;
}

// FUNCTION: 0x4DC790 getTextureFormat
int __cdecl getTextureFormat(unsigned index)
{
    if (index <= 0x3FF)
    {
        TextureSlot* slot = &g_textureSlots[index];
        if (!slot->used)
            return -1;
        return slot->format;
    }
    return -1;
}

// FUNCTION: 0x4E2A90 getTextureHeightB
int __cdecl getTextureHeightB(unsigned index)
{
    if (index <= 0x3FF)
    {
        TextureSlot* slot = &g_textureSlots[index];
        if (!slot->used)
            return -1;
        return slot->unk1E;
    }
    return -1;
}

// FUNCTION: 0x4E2AC0 getTextureWidthB
int __cdecl getTextureWidthB(unsigned index)
{
    if (index <= 0x3FF)
    {
        TextureSlot* slot = &g_textureSlots[index];
        if (!slot->used)
            return -1;
        return slot->unk1C;
    }
    return -1;
}

// FUNCTION: 0x4E2A60 setTexturePersistent
void __cdecl setTexturePersistent(unsigned id, unsigned char persistent)
{
    if (id - 1 > 0x3FE)
        return;
    TextureSlot* slot = &g_textureSlots[id];
    if (slot->used == 1)
        slot->persistent = persistent;
}

// FUNCTION: 0x4E1D10 getTextureGeneration
int __cdecl getTextureGeneration(unsigned id)
{
    if (id - 1 <= 0x3FE && g_textureSlots[id].used == 1)
        return g_textureSlots[id].generation;
    return 0;
}

// FUNCTION: 0x4E1260 isAnyTextureInUse
bool __cdecl isAnyTextureInUse()
{
    for (int i = 1; i < TEXTURE_SLOT_COUNT; i++)
    {
        TextureSlot* slot = &g_textureSlots[i];
        if (slot->used && (slot->busy || slot->timeToLive > 0))
            return true;
    }
    return false;
}

// FUNCTION: 0x4E2A30 updateNextFreeTexture
void __cdecl updateNextFreeTexture()
{
    int i = 1;
    g_nextFreeTexture = 1;
    do
    {
        if (!g_textureSlots[i].used)
            break;
        i++;
    } while (i < TEXTURE_SLOT_COUNT);
    g_nextFreeTexture = i;
}

// FUNCTION: 0x4E28C0 getTextureByteSize
int __cdecl getTextureByteSize(unsigned index)
{
    if (index <= 0x3FF)
    {
        TextureSlot* slot = &g_textureSlots[index];
        if (!slot->used || slot->state == 1000)
            return 0;
        int format = slot->format;
        int paletteType = slot->paletteType;
        int size = slot->height * slot->width;
        if (format == 2)
            size <<= 2;
        else if (format == 3 || format == 4 || format == 5)
            size += size;
        else if (format == 0)
            size /= 2;
        if (format == 1)
        {
            if (paletteType == 2)
                size += 0x400;
            else
                size += 0x100;
        }
        else if (format == 0)
        {
            if (paletteType == 2)
                size += 0x40;
            else
                size += 0x10;
        }
        return size;
    }
    return 0;
}

// FUNCTION: 0x4E1AC0 touchTexture
bool __cdecl touchTexture(int id, int generation)
{
    TextureSlot* slots = g_textureSlots;
    if (generation)
    {
        if (id <= 0)
            return true;
        if (id < TEXTURE_SLOT_COUNT && slots[id].used == 1 && slots[id].generation != generation)
            return false;
    }
    if ((unsigned)(id - 1) <= 0x3FE)
    {
        TextureSlot* slot = &slots[id];
        if (slot->used && !slot->persistent && slot->timeToLive <= 0)
        {
            slot->dirty = 0;
            slot->timeToLive = 3;
        }
    }
    return true;
}

// FUNCTION: 0x4E1A60 tickTextureLifetimes
void __cdecl tickTextureLifetimes()
{
    if (!g_textureCount)
        return;
    for (int i = 1; i < TEXTURE_SLOT_COUNT; i++)
    {
        TextureSlot* slot = &g_textureSlots[i];
        if (!slot->used)
            continue;
        unsigned ttl = (unsigned short)slot->timeToLive;
        if ((short)ttl != -1)
        {
            ttl--;
            slot->timeToLive = (short)ttl;
            if ((short)ttl <= 0)
                releaseTextureSlot(i);
        }
    }
}

// FUNCTION: 0x4DC920 setTextureParams
void __cdecl setTextureParams(int index, int param0, int param1)
{
    TextureSlot* slot = &g_textureSlots[index];
    if (slot->used && slot->pixels)
    {
        if (slot->source.object->params->param0 != param0)
            slot->source.object->params->param0 = param0;
        if (slot->source.object->params->param1 != param1)
            slot->source.object->params->param1 = param1;
    }
}

// FUNCTION: 0x4E12A0 clearTexture
void __cdecl clearTexture(unsigned index)
{
    if (index > 0x3FF)
        return;
    TextureSlot* slot = &g_textureSlots[index];
    if (!slot->used)
        return;
    void* pixels = slot->pixels;
    if (!pixels || slot->state == 1000)
        return;
    unsigned char format = slot->format;
    if (format == 2)
        memset(pixels, 0, slot->height * slot->width * 4);
    else if (format == 3 || format == 4 || format == 5)
        memset(pixels, 0, slot->height * slot->width * 2);
    else if (format == 1)
        memset(pixels, 0, slot->height * slot->width);
    else if (format == 0)
        memset(pixels, 0, slot->height * slot->width / 2);
    slot->dirty = 1;
}

// FUNCTION: 0x4DC7C0 duplicateTexture
int __cdecl duplicateTexture(int index, unsigned char mode)
{
    TextureSlot* src = &g_textureSlots[index];
    int newIndex = allocTextureSlot();
    if (newIndex == -1)
        return -1;
    TextureSlot* dst = &g_textureSlots[newIndex];
    dst->used = 1;
    dst->palette = 0;
    dst->pixels = 0;
    dst->state = src->state;
    dst->width = src->width;
    dst->height = src->height;
    dst->unk1C = src->unk1C;
    dst->unk1E = src->unk1E;
    dst->pixelBytes = src->pixelBytes;
    int pool = mode == 1 ? 6 : 0;
    dst->format = src->format;
    dst->paletteType = src->paletteType;
    dst->source = src->source;
    dst->paletteHandle = -1;
    dst->pixelHandle = -1;
    if (src->palette)
    {
        dst->palette = allocGraphicsMemory(pool, 0x400, 0x10, 1, &dst->paletteHandle);
        memcpy(dst->palette, src->palette, 0x400);
    }
    if (dst->pixels && dst->pixelBytes)
    {
        dst->pixels = allocGraphicsMemory(pool, dst->pixelBytes, 0x10, 1, &dst->pixelHandle);
        memcpy(dst->pixels, src->pixels, dst->pixelBytes);
    }
    g_textureCount++;
    return newIndex;
}

// FUNCTION: 0x4E2980 copyTexturePalette
void __cdecl copyTexturePalette(int dstIndex, int srcIndex)
{
    if (dstIndex < 0 || srcIndex < 0)
        return;
    TextureSlot* dst = &g_textureSlots[dstIndex];
    TextureSlot* src = &g_textureSlots[srcIndex];
    if (!dst->used || !src->used)
        return;
    unsigned char format = dst->format;
    if (format != src->format)
        return;
    unsigned char paletteType = dst->paletteType;
    if (paletteType != src->paletteType)
        return;
    if (!dst->palette || !src->palette)
        return;
    int size = 0x100;
    if (paletteType == 4)
        size = 0x200;
    else if (paletteType == 3)
        size = 0x200;
    else
    {
        int large = 0x400;
        if (paletteType == 2)
            size = large;
    }
    if (format != 1 && format == 0)
        size /= 2;
    memcpy(dst->palette, src->palette, size);
    dst->dirty = 1;
}

// FUNCTION: 0x4DF430 drawTexture
int __cdecl drawTexture(unsigned id, float x, float y, int a, int b, int c, int d)
{
    if (g_spriteCount >= 0x400)
        return -1;
    if (id > 0x3FF || !d)
        return -1;
    TextureSlot* slot = &g_textureSlots[id];
    return drawSprite(id, x, y, (float)slot->unk1C, (float)slot->unk1E, 0, 0, 100.0f, 100.0f, 0.0f, 0,
                      255, 255, 255, 255, a, b, c, d);
}

// FUNCTION: 0x4DDA10 bindTexture
void __cdecl bindTexture(int id, int mode, int wrap)
{
    if (g_boundTexture == id)
        return;
    g_boundTexture = id;
    RenderManager* manager = getRenderManager();
    if (id >= 0)
    {
        TextureSlot* slot = &g_textureSlots[id];
        if (slot->used == 1 && !slot->busy && slot->timeToLive <= 0)
        {
            if (slot->dirty == 1)
                uploadTexturePalette(id);
            else if (slot->dirty == 2)
                uploadTexturePixels(id);
            int a;
            int b;
            if (mode == 0)
            {
                if (wrap == 0)
                {
                    manager->list->setTexture(slot, 0);
                    return;
                }
                a = slot->source.object->params->unk2C;
            }
            else
                a = mode == 1;
            if (wrap == 0)
                b = slot->source.object->params->param0;
            else
                b = wrap == 2;
            manager->list->setTextureSampler(slot, a, a, b, b, 0);
            return;
        }
    }
    manager->list->setTexture(&g_defaultTextureSlot, 0);
    g_boundTexture = -1;
}
