#pragma pack(push, 1)
struct Fade {
    unsigned char mode;
    unsigned char gt3;
    union {
        int w2;
        unsigned char f2;
    };
    short s6;
    char p8;
    unsigned char b91;
    short s92;
    int ptr;
    unsigned char b98;
    char p99;
    short s9A;
    char p9C[2];
    short h;
    short slot[2];
    short last;
};
#pragma pack(pop)
extern Fade g_73E488;

void __cdecl sub_4DCB90(float x, float y, float w, float h, float z, int r0, int g0, int b0, int a0, int r1, int g1, int b1, int a1, int r2, int g2, int b2, int a2, int r3, int g3, int b3, int a3, int p0, int p1, int p2, int p3);
extern float g_7403E0;
void sub_494A20();
void sub_494740();
void sub_495A10();
void sub_494CB0();
void sub_494C40();
void sub_494DA0();
void sub_4945D0();
void __cdecl sub_4C6090(int a);
void __cdecl sub_4C8390(int a);
void __cdecl sub_4E1AC0(int a, int b);
void __cdecl sub_4D64A0(int ptr);

// FUNCTION: 0x4946C0 setFadeMode
void __cdecl setFadeMode(int mode)
{
    g_73E488.mode = (unsigned char)mode;
    g_73E488.gt3 = (unsigned char)mode > 3;
    g_73E488.w2 = 0x100;
    g_73E488.s6 = 0;
}

// FUNCTION: 0x4946F0 changeFadeMode
void __cdecl changeFadeMode(int mode)
{
    if (g_73E488.mode != mode) {
        sub_4945D0();
    }
    g_73E488.gt3 = (unsigned char)mode > 3;
    unsigned char keep = *((unsigned char*)&g_73E488.w2 + 1);
    g_73E488.mode = (unsigned char)mode;
    if (keep == 0) {
        g_73E488.w2 = 0x101;
        g_73E488.s6 = 0;
    } else {
        g_73E488.f2 = 1;
    }
}

// FUNCTION: 0x4945D0 clearFade
void clearFade()
{
    short hh = g_73E488.h;
    *((unsigned char*)&g_73E488.w2 + 1) = 0;
    if (hh != -1) {
        sub_4C6090(hh);
        g_73E488.h = -1;
    }
    for (short* p = g_73E488.slot; (int)p < (int)&g_73E488.slot[2]; p++) {
        if (*p != -1) {
            sub_4C8390(*p);
            *p = -1;
        }
    }
    short l = g_73E488.last;
    if (l != -1) {
        sub_4E1AC0(l, 0);
        g_73E488.last = -1;
    }
    int ptr = g_73E488.ptr;
    g_73E488.b98 = 0;
    if (ptr) {
        sub_4D64A0(ptr);
        g_73E488.ptr = 0;
    }
    g_73E488.s9A = 0;
}

// FUNCTION: 0x495810 freeFadePtr
void freeFadePtr()
{
    int ptr = g_73E488.ptr;
    g_73E488.b98 = 0;
    if (ptr) {
        sub_4D64A0(ptr);
        g_73E488.ptr = 0;
    }
    g_73E488.s9A = 0;
}

// FUNCTION: 0x494CB0 updateFadeOut
void updateFadeOut()
{
    g_73E488.s92 = (short)((float)g_73E488.s92 + g_7403E0);
    if (g_73E488.s92 > 60) {
        g_73E488.s92 = 60;
    }
    int c = 255 - g_73E488.s92 * 255 / 60;
    sub_4DCB90(0.0f, 0.0f, 960.0f, 544.0f, 0.0f, c, c, c, 255, c, c, c, 255, c, c, c, 255, c, c, c, 255, 0x5207, 2, 1, 255);
    if (g_73E488.s92 >= 60) {
        g_73E488.b91 = 5;
    }
}

// FUNCTION: 0x494560 updateFade
void updateFade()
{
    unsigned char m = *((unsigned char*)&g_73E488.w2 + 1);
    if (m == 0) {
        return;
    }
    if (m == 1) {
        sub_494A20();
    } else if (m == 2) {
        sub_494740();
    }
    unsigned char s = g_73E488.b91;
    if (s != 0) {
        if (s == 3) {
            sub_495A10();
        } else if (s == 4) {
            sub_494CB0();
        } else if (s == 5) {
            sub_494C40();
        }
    }
    sub_494DA0();
}
