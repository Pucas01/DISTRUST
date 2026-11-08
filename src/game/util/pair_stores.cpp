#include "game/texture_slots.h"

struct BytePair {
    unsigned char lo;
    unsigned char hi;
};

extern BytePair g_73E8C4;
extern BytePair g_73E9C0;
extern BytePair g_73E481;
extern unsigned char g_73E480;
extern BytePair g_7016A5;
extern char g_7016A7;
extern short g_73E9C8;
extern BytePair g_73E9C6;
extern BytePair g_73E9BC;
extern unsigned short g_73E9BE;
extern BytePair g_73E8C6;
extern BytePair g_6A84E0;
extern BytePair g_73CC49;
extern BytePair g_73CD88;
extern unsigned char g_73CD8C;
extern BytePair g_73E642;
extern BytePair g_73E9CA;
extern signed char g_73E13F;
extern signed char g_73E18A;
extern BytePair g_73E188;
extern char g_73E1A2[];
extern unsigned char g_73CDA0;
extern unsigned char g_73CDA1;
extern BytePair g_73CDA2;
extern const char* g_695E68[];
extern const char* g_695E74[];
struct Ent73C548 {
    unsigned char lo;
    unsigned char hi;
    unsigned char b2;
    unsigned char pad3;
    short s4;
    short pad6;
    int d8;
    int dC;
};
extern Ent73C548 g_73C548[20];
extern int g_73C53A;
extern BytePair g_73C53E;

#pragma pack(push, 1)
struct Slot12 {
    char a;
    unsigned char wlo;
    unsigned char whi;
    char p;
    int d;
    char c;
    char pad[3];
};
#pragma pack(pop)
extern Slot12 g_73E8E0[];

extern unsigned char g_73E954;
extern unsigned char g_73E95C;
extern int g_73E968;
extern int g_73E96C;
extern unsigned char g_73E970[10];
extern int g_73E97C[10];
extern unsigned char g_73E9A4;
extern int g_73E9A8;
extern int g_73E9AC;
extern BytePair g_73E9B0;
extern short g_73E17E;
extern int g_6FDB88;
extern BytePair g_73E29C;
extern unsigned char g_73E29E;
extern short g_73E2A0;

#pragma pack(push, 1)
struct Cell16 {
    char a;
    BytePair st;
    char c;
    short d;
    char pad[10];
};
#pragma pack(pop)
extern Cell16 g_73E19C[];

void sub_430A60();

// FUNCTION: 0x49F190 setWord73E8C4
void setWord73E8C4()
{
    g_73E8C4.lo = 11;
    g_73E8C4.hi = 0;
}

// FUNCTION: 0x49F670 setWord73E9C0
void setWord73E9C0()
{
    g_73E9C0.lo = 10;
    g_73E9C0.hi = 0;
}

// FUNCTION: 0x48D4E0 resetState73E480
void resetState73E480()
{
    g_73E481.lo = 0xFF;
    g_73E481.hi = 0;
    g_73E480 = 0;
}

// FUNCTION: 0x46D980 clearFlags7016A5
void __cdecl clearFlags7016A5()
{
    g_7016A5.lo = 0;
    g_7016A5.hi = 0;
    g_7016A7 = 0;
}

// FUNCTION: 0x49F1A0 setWord73E9C6
void __cdecl setWord73E9C6(short a, int b)
{
    g_73E9C8 = a;
    g_73E9C6.lo = 6;
    g_73E9C6.hi = 0;
    if (b <= 0) {
        g_73E9C6.lo = 7;
        g_73E9C6.hi = 0;
    }
}

// FUNCTION: 0x49F220 setWord73E9BC
void __cdecl setWord73E9BC(int v)
{
    g_73E9BC.lo = 10;
    g_73E9BC.hi = 0;
    g_73E9BE = v;
    if ((unsigned short)v > 999)
        g_73E9BE = 999;
}

// FUNCTION: 0x49F350 setState73E8C6To3
void __cdecl setState73E8C6To3()
{
    unsigned char c = g_73E8C6.lo;
    if (c == 3 || c == 0)
        return;
    g_73E8C6.lo = 3;
    g_73E8C6.hi = 0;
}

// FUNCTION: 0x49F370 setState73E8C6To1
void __cdecl setState73E8C6To1()
{
    unsigned char c = g_73E8C6.lo;
    if (c == 1 || c == 10)
        return;
    g_73E8C6.lo = 1;
    g_73E8C6.hi = 0;
}

// FUNCTION: 0x49F640 resetSlot73E8E1To13
void __cdecl resetSlot73E8E1To13(unsigned int i)
{
    if (i <= 1) {
        g_73E8E0[i].wlo = 13;
        g_73E8E0[i].whi = 0;
        g_73E8E0[i].d = 0;
    }
}

// FUNCTION: 0x49F300 resetSlot73E8E1
void __cdecl resetSlot73E8E1(unsigned int i)
{
    if (i <= 1) {
        g_73E8E0[i].wlo = 12;
        g_73E8E0[i].whi = 0;
        g_73E8E0[i].d = 0;
    }
}

// FUNCTION: 0x42F240 sub_42F240
void sub_42F240()
{
    if (g_6A84E0.lo == 1) {
        sub_430A60();
        g_6A84E0.lo = 0;
        g_6A84E0.hi = 0;
    }
}

// FUNCTION: 0x46BF40 sub_46BF40
void sub_46BF40()
{
    g_73CC49.lo = 0xFF;
    g_73CC49.hi = 0xFF;
    g_73CD88.lo = 0x02;
    g_73CD88.hi = 0xFF;
    g_73CD8C = 1;
}

// FUNCTION: 0x49A720 sub_49A720
void __cdecl sub_49A720(int mode)
{
    unsigned char s = g_73E642.lo;
    if (mode == 1) {
        if (s == 1 || s == 2)
            return;
        g_73E642.lo = 1;
        g_73E642.hi = 0;
    } else {
        if (s == 6 || s == 0)
            return;
        g_73E642.lo = 6;
        g_73E642.hi = 0;
    }
}

// FUNCTION: 0x49F480 sub_49F480
void __cdecl sub_49F480(int mode)
{
    unsigned char s = g_73E9CA.lo;
    if (mode == 1) {
        if (s == 1 || s == 10)
            return;
        g_73E9CA.lo = 1;
        g_73E9CA.hi = 0;
    } else {
        if (s == 3 || s == 0)
            return;
        g_73E9CA.lo = 3;
        g_73E9CA.hi = 0;
    }
}

// FUNCTION: 0x4DC400 sub_4DC400
SpriteBatch* __cdecl sub_4DC400(int* outIndex)
{
    if (g_74C1C0 >= 0x40)
        return 0;
    SpriteBatch* e = g_spriteBatches;
    for (int i = 0; i < 0x40; i++, e++) {
        if (!e->used) {
            g_74C1C0++;
            e->used = 1;
            e->unk01 = 0;
            *outIndex = i;
            return e;
        }
    }
    return 0;
}

// FUNCTION: 0x487BB0 sub_487BB0
void sub_487BB0()
{
    int n = g_73E13F;
    if (n > 0) {
        const char* p = g_73E1A2;
        int k = n;
        do {
            if (*p)
                n--;
            p += 16;
            k--;
        } while (k);
    }
    if (g_73E18A != n) {
        g_73E18A = (signed char)n;
        if (g_73E188.lo != 7) {
            g_73E188.lo = 7;
            g_73E188.hi = 0;
        }
    }
}

// FUNCTION: 0x46CFA0 sub_46CFA0
void __cdecl sub_46CFA0(int which)
{
    if (g_73CDA2.lo != 0)
        return;
    g_73CDA0 = which;
    g_73CDA2.lo = 0;
    g_73CDA2.hi = 0xC;
    unsigned char n = 0;
    int i = 0;
    for (;;) {
        const char* s;
        if (!(char)which)
            s = g_695E68[i];
        else
            s = g_695E74[i];
        if (!*s)
            break;
        i++;
        n++;
        g_73CDA2.lo = n;
    }
    g_73CDA1 = 1;
}

// FUNCTION: 0x441550 sub_441550
void sub_441550()
{
    g_73C53A = 0;
    g_73C53E.lo = 0;
    g_73C53E.hi = 1;
    for (int i = 0; i < 20; i++) {
        g_73C548[i].lo = 0;
        g_73C548[i].hi = 0xFF;
        g_73C548[i].s4 = 0;
        g_73C548[i].b2 = 0;
        g_73C548[i].d8 = 0;
        g_73C548[i].dC = 0;
    }
}

// FUNCTION: 0x435F30 sub_435F30
void __cdecl sub_435F30(unsigned int which, unsigned char* out)
{
    switch (which) {
    case 0:
        out[0] = 0x99;
        out[1] = 0x99;
        out[2] = 0x99;
        break;
    case 1:
        out[0] = 0x64;
        out[1] = 0xBE;
        out[2] = 0xFF;
        break;
    case 2:
        out[0] = 0x73;
        out[1] = 0xC8;
        out[2] = 0x0A;
        break;
    case 3:
        out[0] = 0xB4;
        out[1] = 0xA0;
        out[2] = 0x1E;
        break;
    }
}
