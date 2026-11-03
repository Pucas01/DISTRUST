// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t
#include "game/texture_slots.h"

// FUNCTION: 0x4DC440 allocSprite
Sprite* __cdecl allocSprite(int* outIndex)
{
    if (g_spriteCount >= 0x400)
        return 0;
    Sprite* e = g_sprites;
    for (int i = 0; i < 0x400; i++, e++) {
        if (!e->used) {
            e->used = 1;
            e->visible = 0;
            e->unk04 = 0;
            e->active = 0;
            e->unk08 = 0;
            e->hasRect = 0;
            e->unk0A = 0;
            *outIndex = i;
            g_spriteCount++;
            return e;
        }
    }
    return 0;
}

// FUNCTION: 0x4DE330 resetSprites
void __cdecl resetSprites()
{
    g_spriteCount = 0;
    g_74C1C0 = 0;
    g_batchCount = 0;
    for (int i = 0; i < 0x400; i++) {
        g_sprites[i].used = 0;
        g_sprites[i].unk01 = 0;
    }
    for (int i = 0; i < 0x40; i++) {
        g_spriteBatches[i].used = 0;
        g_spriteBatches[i].unk01 = 0;
    }
}

// FUNCTION: 0x4DE890 markSprite
void __cdecl markSprite(unsigned int index)
{
    if (index <= 0x3FF)
        g_sprites[index].unk0A = 1;
}

// FUNCTION: 0x4DE8B0 setSpriteBounds
void __cdecl setSpriteBounds(unsigned int index, short x, short h, short w, short y)
{
    if (index <= 0x3FF) {
        Sprite* e = &g_sprites[index];
        e->hasRect = 1;
        e->rectX = x;
        e->rectY = w;
        e->rectW = h;
        e->rectH = y;
    }
}

// FUNCTION: 0x4DE850 enableSprite
void __cdecl enableSprite(unsigned int index)
{
    if (index <= 0x3FF) {
        Sprite* e = &g_sprites[index];
        e->active = 1;
        e->visible = 1;
    }
}

// FUNCTION: 0x4DE870 disableSprite
void __cdecl disableSprite(unsigned int index)
{
    if (index <= 0x3FF) {
        Sprite* e = &g_sprites[index];
        e->active = 0;
        e->visible = 0;
    }
}

// FUNCTION: 0x4E0B90 sortSprites
void __cdecl sortSprites()
{
    int n = 0;
    g_74C1B4 = 0;
    for (int i = 0; i < 0x400; i++) {
        g_spriteOrder[i] = 0;
        g_spriteDepth[i] = 0;
    }
    for (int i = 0; i < 0x400; i++) {
        if (g_sprites[i].used == 1) {
            g_spriteOrder[n] = i;
            g_spriteDepth[n] = g_sprites[i].depth;
            n++;
        }
    }
    if (n > 0) {
        for (int i = 1; i < n; i++) {
            int order = g_spriteOrder[i];
            int depth = g_spriteDepth[i];
            int j = i - 1;
            while (j >= 0 && g_spriteDepth[j] >= depth) {
                g_spriteOrder[j + 1] = g_spriteOrder[j];
                g_spriteDepth[j + 1] = g_spriteDepth[j];
                j--;
            }
            g_spriteOrder[j + 1] = order;
            g_spriteDepth[j + 1] = depth;
        }
    }
    g_boundTexture = -9999;
}
