#pragma once

#include "engine/core/AgReference.h"

enum { TEXTURE_SLOT_COUNT = 0x400 };

struct TextureParams
{
    unsigned char unk00[0x14];
    unsigned short width;
    unsigned short unk16;
    unsigned short height;
    unsigned short unk1A;
    unsigned char unk1C[0x10];
    int unk2C;
    int param0;
    int param1;
};

class TextureObject : public AgReferencedObject
{
public:
    virtual ~TextureObject();
    void prepare();
    unsigned char unk08[0x40];
    TextureParams* params;
};

struct Sprite
{
    unsigned char used;
    unsigned char unk01;
    unsigned char active;
    unsigned char visible;
    unsigned char unk04;
    unsigned char unk05;
    unsigned char unk06;
    unsigned char unk07;
    unsigned char unk08;
    unsigned char hasRect;
    unsigned char unk0A;
    unsigned char unk0B;
    unsigned short texture;
    short rectX;
    short rectY;
    short rectW;
    short rectH;
    short depth;
    short x0a;
    short x0b;
    short x1a;
    short x1b;
    short y0a;
    short y1a;
    short y0b;
    short y1b;
    unsigned char unk28[0x30];
};

struct SpriteBatch
{
    unsigned char used;
    unsigned char unk01;
    unsigned char unk02[0x20E];
};

struct TextureSlot
{
    AgReference<TextureObject> source;
    int pixelHandle;
    int paletteHandle;
    unsigned char used;
    unsigned char format;
    unsigned char paletteType;
    unsigned char persistent;
    unsigned char busy;
    unsigned char unk15;
    unsigned char dirty;
    unsigned char unk17;
    short width;
    short height;
    short unk1C;
    short unk1E;
    short state;
    short timeToLive;
    void* palette;
    void* pixels;
    int unk2C;
    int unk30;
    int generation;
    int pixelBytes;
    int unk3C[2];

    void reset(int flag);
};

int __cdecl atomicDecrement(int* value);
void __cdecl freeControlBlock(void* block);
void* __cdecl allocGraphicsMemory(int pool, unsigned size, int alignment, int flag, int* handleOut);
void __cdecl freeGraphicsMemory(int handle, int flag);
void __cdecl freeUnmanaged(void* block);
void __cdecl logError(const char* format, ...);

extern TextureSlot* g_textureSlots;
extern int g_nextFreeTexture;
extern int g_textureGeneration;
extern short g_textureCount;

void* __cdecl lockTexturePalette(unsigned index);
int __cdecl getTextureFormat(unsigned index);
int __cdecl getTextureHeightB(unsigned index);
int __cdecl getTextureWidthB(unsigned index);
void __cdecl setTexturePersistent(unsigned id, unsigned char persistent);
int __cdecl getTextureGeneration(unsigned id);
bool __cdecl isAnyTextureInUse();
void __cdecl updateNextFreeTexture();
int __cdecl getTextureByteSize(unsigned index);
bool __cdecl touchTexture(int id, int generation);
void __cdecl tickTextureLifetimes();
void __cdecl setTextureParams(int index, int param0, int param1);
int __cdecl allocTextureSlot();
bool __cdecl releaseTextureSlot(int index);
void __cdecl clearTexture(unsigned index);
int __cdecl duplicateTexture(int index, unsigned char mode);
int __cdecl createTextureFromSource(const AgReference<TextureObject>& source);
void __cdecl setSpriteRect(Sprite* sprite, int x, int y, int width, int height);
void __cdecl copyTexturePalette(int dstIndex, int srcIndex);

extern short g_spriteCount;
extern Sprite* g_sprites;
extern SpriteBatch* g_spriteBatches;
extern int g_batchCount;
extern short g_74C1C0;
extern short g_74C1B4;
extern short g_spriteOrder[0x400];
extern short g_spriteDepth[0x400];
Sprite* __cdecl allocSprite(int* outIndex);
void __cdecl resetSprites();
void __cdecl sortSprites();
void __cdecl enableSprite(unsigned int index);
void __cdecl disableSprite(unsigned int index);
void __cdecl markSprite(unsigned int index);
void __cdecl setSpriteBounds(unsigned int index, short x, short h, short w, short y);
int __cdecl drawSprite(int id, float x, float y, float width, float height, int unk0, int unk1,
                       float scaleX, float scaleY, float rotation, int unk2,
                       int red, int green, int blue, int alpha, int a, int b, int c, int d);
int __cdecl drawTexture(unsigned id, float x, float y, int a, int b, int c, int d);

class RenderList
{
public:
    void setTexture(TextureSlot* slot, int unit);
    void setTextureSampler(TextureSlot* slot, int a, int b, int c, int d, int e);
};

struct RenderManager
{
    int unk00[3];
    RenderList* list;
};

RenderManager* __cdecl getRenderManager();
void __cdecl uploadTexturePalette(int index);
void __cdecl uploadTexturePixels(int index);

extern TextureSlot g_defaultTextureSlot;
extern int g_boundTexture;
void __cdecl bindTexture(int id, int mode, int wrap);
