#pragma pack(push, 1)
struct Ob {
    unsigned char a;
    char p1;
    int i2;
    char p6[2];
    char e8;
    unsigned char e9;
    char pA;
    unsigned char eB;
    char pC;
    unsigned char eD;
    char pE;
    unsigned char eF;
    char p10;
    unsigned char f1;
    char p12;
    unsigned char f3;
    char p14[2];
    short f6;
};
#pragma pack(pop)
extern Ob g_cursorState;

void __cdecl sub_4C8B90(int a, int b);
void __cdecl sub_4E1AC0(int a, int b);
void __cdecl sub_4C8390(int a);
void sub_4A58F0();
void sub_4A3030();
extern short g_73E9FC;
extern short g_73E9FE[];

// FUNCTION: 0x4A3D00 setObE8
void __cdecl setObE8(int v)
{
    if (g_cursorState.a) {
        if (g_cursorState.e8 != v) {
            g_cursorState.e8 = v;
            sub_4C8B90(g_cursorState.f6, (char)v);
        }
    }
}

// FUNCTION: 0x4A3DC0 releaseCursor
void releaseCursor()
{
    if (g_73E9FC != -1) {
        sub_4E1AC0(g_73E9FC, 0);
        g_73E9FC = -1;
    }
    if (g_cursorState.f6 != -1) {
        sub_4A58F0();
        sub_4C8390(g_cursorState.f6);
        g_cursorState.f6 = -1;
    }
    for (short* p = g_73E9FE; (int)p < (int)&g_73E9FE[19]; p++) {
        if (*p != -1) {
            sub_4E1AC0(*p, 0);
            *p = -1;
        }
    }
    sub_4A3030();
    g_cursorState.a = 0;
}
