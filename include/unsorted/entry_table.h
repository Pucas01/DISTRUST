#pragma once

struct EntryLayer
{
    char pad00[8];
    short wordA;
    char pad0a[4];
    char flag;
    char pad0f[5];
    short x;
    short y;
    char pad18[0xC];
};

struct EntryObject
{
    char pad00[2];
    char flag;
    char pad03[0xF];
    short wordA;
    char pad14[0xA4];
    short x;
    short y;
};

struct EntryChild
{
    char pad00[7];
    unsigned char kind;
    char pad08[3];
    char enabled;
    char padC[0xBC];
    int owner;
    char padCC[0x24];
};

struct EntryRecord
{
    char valid;
    char pad01[2];
    char flag03;
    char loaded;
    char ready;
    char status;
    char unk07;
    char kind08;
    char pad09;
    char flag0A;
    char pad0B[0x15];
    short count;
    char pad22[2];
    short objectCount;
    char pad26[4];
    short childCount;
    char pad2C[2];
    short stateCount;
    short param;
    char pad32[2];
    float originX;
    float originY;
    char pad3C[0x84 - 0x3C];
    char name[0x40];
    short* values;
    char* objects;
    EntryChild* children;
    EntryLayer* layers;
    char padD4[8];
    int state[6];
    short stateWord;
    char padF6[0xA];
};

int __cdecl findEntryLayer(EntryRecord* entry, int key);
EntryObject* __cdecl findEntryObject(EntryRecord* entry, int key);
void __cdecl setSlotFlagB(unsigned int index, unsigned char value);
