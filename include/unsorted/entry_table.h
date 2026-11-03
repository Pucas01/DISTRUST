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
    char pad05;
    char status;
    char pad07[0x19];
    short count;
    char pad22[8];
    short childCount;
    char pad2C[4];
    short param;
    char pad32[0xC4 - 0x32];
    short* values;
    int padC8;
    EntryChild* children;
    EntryLayer* layers;
    char padD4[0x100 - 0xD4];
};

int __cdecl findEntryLayer(EntryRecord* entry, int key);
EntryObject* __cdecl findEntryObject(EntryRecord* entry, int key);
void __cdecl sub_4CF950(int kind, int flag);
