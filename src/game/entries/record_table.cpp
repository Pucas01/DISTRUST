struct MaskObj;
void __cdecl setMasked_f54(MaskObj* o, unsigned int mask, unsigned int value);
bool __cdecl freeRec(unsigned int index);

struct Rec {
    MaskObj* obj;
    unsigned char b4;
    unsigned char b5;
    char pad6;
    unsigned char b7;
    char pad8[0x22];
    unsigned char b2a;
    char pad2b;
    unsigned char b2c;
    char pad2d[5];
    short w32;
    char pad34[0x7C];
};

struct Rec8 {
    char pad0[4];
    unsigned char b4;
    char pad5;
    short w6;
};

extern Rec* g_recs;
extern Rec8* g_slots8;
extern int g_745900;
extern int g_745940;

// STUB: 0x4D3F40 sub_4D3F40 (223 bytes)
void sub_4D3F40()
{
}

// STUB: 0x4D4020 sub_4D4020 (91 bytes)
void sub_4D4020()
{
}

// FUNCTION: 0x4D4080 setRecMask
void __cdecl setRecMask(unsigned int i, int v)
{
    if (i > 0x95)
        return;
    Rec* r = &g_recs[i];
    if (!r->b4)
        return;
    MaskObj* o = r->obj;
    if (!o)
        return;
    if (r->b2a == v)
        return;
    r->b2a = v;
    if (v == 0)
        setMasked_f54(o, 4, v);
    else
        setMasked_f54(o, 4, 0xFFFFFFFF);
}

// STUB: 0x4D40E0 sub_4D40E0 (99 bytes)
void sub_4D40E0()
{
}

// FUNCTION: 0x4D4150 anyRecActive
bool anyRecActive()
{
    for (int i = 0; i < 0x96; i++) {
        if (g_recs[i].b4 && g_recs[i].w32 > 0)
            return true;
    }
    return false;
}

// STUB: 0x4D4180 sub_4D4180 (97 bytes)
void sub_4D4180()
{
}

// STUB: 0x4D41F0 sub_4D41F0 (1292 bytes)
void sub_4D41F0()
{
}

// STUB: 0x4D4700 sub_4D4700 (81 bytes)
void sub_4D4700()
{
}

// FUNCTION: 0x4D4760 setSlotWord
void __cdecl setSlotWord(unsigned int index, short value)
{
    if (index <= 0x3F) {
        Rec8* r = &g_slots8[index];
        if (r->b4)
            r->w6 = value;
    }
}

// FUNCTION: 0x4D4790 clearRecFlags
void clearRecFlags()
{
    for (int i = 0; i < 0x96; i++)
        g_recs[i].b2c = 0;
}

// STUB: 0x4D47B0 sub_4D47B0 (166 bytes)
void sub_4D47B0()
{
}

// STUB: 0x4D4860 sub_4D4860 (165 bytes)
void sub_4D4860()
{
}

// STUB: 0x4D4910 sub_4D4910 (208 bytes)
void sub_4D4910()
{
}

// FUNCTION: 0x4D49E0 setRecByte5
void __cdecl setRecByte5(unsigned int index, char value)
{
    if (index <= 0x95) {
        Rec* r = &g_recs[index];
        if (r->b4 == 1)
            r->b5 = value;
    }
}

// STUB: 0x4D4A10 sub_4D4A10 (172 bytes)
void sub_4D4A10()
{
}

// STUB: 0x4D4AC0 sub_4D4AC0 (140 bytes)
void sub_4D4AC0()
{
}

// FUNCTION: 0x4D4B50 resetGlobals745900
void resetGlobals745900()
{
    g_745900 = 0;
    g_745940 = -1;
}

// STUB: 0x4D4B70 sub_4D4B70 (58 bytes)
void sub_4D4B70()
{
}

// FUNCTION: 0x4D4BB0 setRecByte7
void __cdecl setRecByte7(unsigned int index, int value)
{
    if (index <= 0x95) {
        Rec* r = &g_recs[index];
        if (r->b4 && r->b7 != value)
            r->b7 = value;
    }
}

// STUB: 0x4D4BE0 sub_4D4BE0 (137 bytes)
void sub_4D4BE0()
{
}

// STUB: 0x4D4C70 sub_4D4C70 (139 bytes)
void sub_4D4C70()
{
}

// STUB: 0x4D4D00 sub_4D4D00 (156 bytes)
void sub_4D4D00()
{
}

// FUNCTION: 0x4D4DA0 setRecPending
bool __cdecl setRecPending(unsigned int i, char v)
{
    if (v && i <= 0x95) {
        Rec* r = &g_recs[i];
        if (r->b4) {
            r->b5 = 0;
            r->w32 = 5;
            return true;
        }
    }
    return freeRec(i);
}

// STUB: 0x4D4DF0 sub_4D4DF0 (321 bytes)
void sub_4D4DF0()
{
}

// STUB: 0x4D4F40 sub_4D4F40 (1308 bytes)
void sub_4D4F40()
{
}

// STUB: 0x4D5460 sub_4D5460 (216 bytes)
void sub_4D5460()
{
}

// STUB: 0x4D5540 sub_4D5540 (393 bytes)
void sub_4D5540()
{
}

// STUB: 0x4D56D0 sub_4D56D0 (1043 bytes)
void sub_4D56D0()
{
}

// STUB: 0x4D5AF0 sub_4D5AF0 (440 bytes)
void sub_4D5AF0()
{
}

// STUB: 0x4D5CB0 sub_4D5CB0 (148 bytes)
void sub_4D5CB0()
{
}

// STUB: 0x4D5D50 sub_4D5D50 (107 bytes)
void sub_4D5D50()
{
}

// STUB: 0x4D5DC0 sub_4D5DC0 (207 bytes)
void sub_4D5DC0()
{
}

// STUB: 0x4D5E90 sub_4D5E90 (151 bytes)
void sub_4D5E90()
{
}

// STUB: 0x4D5F30 sub_4D5F30 (151 bytes)
void sub_4D5F30()
{
}
