#include <math.h>
#include "game/texture_slots.h"

static __forceinline int slotWidth(unsigned index)
{
    if (index <= 0x3FF) {
        TextureSlot* slot = &g_textureSlots[index];
        if (!slot->used)
            return -1;
        return slot->unk1C;
    }
    return -1;
}

static __forceinline int slotHeight(unsigned index)
{
    if (index <= 0x3FF) {
        TextureSlot* slot = &g_textureSlots[index];
        if (!slot->used)
            return -1;
        return slot->unk1E;
    }
    return -1;
}

// FUNCTION: 0x4E0AC0 setSpriteRect
static void __cdecl setSpriteRect(Sprite* sprite, int x, int y, int width, int height)
{
    short tex = sprite->texture;
    if (tex < 0)
        return;
    int w = width;
    int h = height;
    int texW = slotWidth(tex);
    int texH = slotHeight(tex);
    if (x + w > texW) {
        w = texW - x;
        if (w < 0)
            w = 0;
    }
    if (y + h > texH) {
        h = texH - y;
        if (h < 0)
            h = 0;
    }
    sprite->x1a = sprite->x1b = (short)(x + w);
    sprite->x0a = sprite->x0b = (short)x;
    sprite->y0a = sprite->y0b = (short)y;
    sprite->y1a = sprite->y1b = (short)(y + h);
}

// FUNCTION: 0x4DEB10 drawSprite
int __cdecl drawSprite(short texture, float x, float y, float w, float h, int u, int v,
                       float scaleX, float scaleY, float rotation, unsigned flags,
                       int r, int g, int b, int a, short depth, unsigned char kind,
                       unsigned char mode, int alpha)
{
    if (!alpha)
        return -1;
    if (!a)
        return -1;
    int index = 0;
    Sprite* e = allocSprite(&index);
    if (!e)
        return -1;
    e->texture = texture;
    e->kind = kind;
    if (rotation != 0.0f) {
        float angle = (float)((double)rotation * 6.283185307179586 * 0.001 * 0.002777777777777778);
        float s = sinf(angle);
        float c = cosf(angle);
        float dx = w * scaleX * 0.01f;
        float dy = h * scaleY * 0.01f;
        float x1 = dx * c + x;
        float y1 = y - dx * s;
        e->cornerX[0] = x;
        e->cornerY[0] = y;
        e->cornerX[2] = x1;
        e->cornerY[2] = y1;
        e->cornerX[1] = dy * s + x;
        e->cornerY[1] = dy * c + y;
        e->cornerX[3] = dy * s + x1;
        e->cornerY[3] = dy * c + y1;
    } else {
        float y1 = h * scaleY * 0.01f + y;
        float x1 = w * scaleX * 0.01f + x;
        e->cornerX[0] = x;
        e->cornerY[0] = y;
        e->cornerX[1] = x;
        e->cornerY[1] = y1;
        e->cornerX[2] = x1;
        e->cornerY[2] = y;
        e->cornerX[3] = x1;
        e->cornerY[3] = y1;
    }
    setSpriteRect(e, u, v, (int)w, (int)h);
    if (flags & 0x20) {
        float t = e->cornerX[0];
        e->cornerX[0] = e->cornerX[2];
        e->cornerX[2] = t;
        t = e->cornerX[1];
        e->cornerX[1] = e->cornerX[3];
        e->cornerX[3] = t;
    }
    if (flags & 0x10) {
        float t = (float)(int)e->cornerY[0];
        e->cornerY[0] = e->cornerY[1];
        e->cornerY[1] = t;
        t = (float)(int)e->cornerY[2];
        e->cornerY[2] = e->cornerY[3];
        e->cornerY[3] = t;
    }
    if (e->mode == 3) {
        int cb = b * alpha / 255;
        int ca = a * alpha / 255;
        int cg = g * alpha / 255;
        int cr = r * alpha / 255;
        unsigned color = (((((ca << 8) | (cb & 0xFF)) << 8) | (cg & 0xFF)) << 8) | (cr & 0xFF);
        e->color[3] = color;
        e->color[2] = color;
        e->color[1] = color;
        e->color[0] = color;
    } else {
        int ca = a * alpha / 255;
        unsigned color = (((((ca << 8) | (unsigned char)b) << 8) | (unsigned char)g) << 8) | (unsigned char)r;
        e->color[3] = color;
        e->color[2] = color;
        e->color[1] = color;
        e->color[0] = color;
    }
    e->depth = depth;
    e->mode = mode;
    e->alpha = (unsigned char)alpha;
    if (rotation == 0.0f) {
        if (scaleX == 100.0f)
            e->active = 1;
        if (scaleY == 100.0f)
            e->visible = 1;
    }
    return index;
}
