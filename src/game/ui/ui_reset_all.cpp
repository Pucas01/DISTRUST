#include <string.h>
struct Pair2 {
    unsigned char a;
    unsigned char b;
};
struct U4 {
    unsigned char a;
    unsigned char b;
    unsigned char c;
    unsigned char d;
};
extern Pair2 g_73E180;
extern Pair2 g_73E188;
extern U4 g_73E190;
extern Pair2 g_73E29C;
extern short g_73E2A0;
extern short g_73E142[];
extern short g_73E170;
void sub_4993B0();
void sub_4A5B20();
void __cdecl sub_4C8390(int a);
void __cdecl sub_4E1AC0(int a, int b);

struct E3C {
    unsigned char on;
    char p[0x27];
    short w;
    char q[0x3c - 0x2a];
};
extern char g_73DCC8[];
extern E3C g_73DF58[];

// FUNCTION: 0x4867D0 resetUiModes
void resetUiModes()
{
    if (g_73E180.a != 0) {
        g_73E180.a = 0;
        g_73E180.b = 0;
    }
    if (g_73E188.a != 0) {
        g_73E188.a = 0;
        g_73E188.b = 0;
    }
    if (g_73E190.a != 0) {
        g_73E190.a = 0;
        g_73E190.b = 0;
        g_73E190.c = 0;
        g_73E190.d = 0;
    }
    if (g_73E29C.a != 0) {
        g_73E29C.a = 0;
        g_73E29C.b = 0;
        g_73E2A0 = 0;
    }
    sub_4993B0();
    sub_4A5B20();
    for (short* p = g_73E142; (int)p < (int)&g_73E142[23]; p++) {
        if (*p != -1) {
            sub_4C8390(*p);
            *p = -1;
        }
    }
    short h = g_73E170;
    if (h != -1) {
        sub_4E1AC0(h, 0);
        g_73E170 = -1;
    }
}

// FUNCTION: 0x484A20 clearE3C
void clearE3C()
{
    memset(g_73DCC8, 0, 0x468);
    g_73DF58[0].on = 0;
    g_73DF58[0].w = -1;
    g_73DF58[1].on = 0;
    g_73DF58[1].w = -1;
    g_73DF58[2].on = 0;
    g_73DF58[2].w = -1;
    g_73DF58[3].on = 0;
    g_73DF58[3].w = -1;
    g_73DF58[4].on = 0;
    g_73DF58[4].w = -1;
    g_73DF58[5].on = 0;
    g_73DF58[5].w = -1;
}
