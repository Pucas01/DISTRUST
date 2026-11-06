extern unsigned short g_73E9C0;

extern unsigned char g_73E8C6;
extern unsigned char g_73E8C7;
extern unsigned char g_73E840;
#pragma pack(push, 1)
struct Slot12 {
    char a;
    short w;
    char p;
    int d;
    char c;
    char pad[3];
};
#pragma pack(pop)
extern Slot12 g_73E8E0[];

// FUNCTION: 0x49F350 setState73E8C6To3
struct P2 { unsigned char a, b; };
extern P2 g_73E8C6p;
void __cdecl setState73E8C6To3()
{
    unsigned char c = g_73E8C6p.a;
    if (c == 3 || c == 0)
        return;
    P2 v = { 3, 0 };
    g_73E8C6p = v;
}

// FUNCTION: 0x49F370 setState73E8C6To1
void __cdecl setState73E8C6To1()
{
    unsigned char c = g_73E8C6;
    if (c == 1 || c == 10)
        return;
    g_73E8C6 = 1;
    g_73E8C7 = 0;
}

// STUB: 0x49F390 sub_49F390 (235 bytes)
void sub_49F390()
{
}

// STUB: 0x49F480 sub_49F480 (52 bytes)
void sub_49F480()
{
}

// STUB: 0x49F4C0 sub_49F4C0 (382 bytes)
void sub_49F4C0()
{
}

// FUNCTION: 0x49F640 resetSlot73E8E1To13
void __cdecl resetSlot73E8E1To13(unsigned int i)
{
    if (i <= 1) {
        g_73E8E0[i].w = 13;
        g_73E8E0[i].d = 0;
    }
}

// FUNCTION: 0x49F670 setWord73E9C0
void setWord73E9C0()
{
    g_73E9C0 = 10;
}

// FUNCTION: 0x49F680 isState73E840Idle
int __cdecl isState73E840Idle()
{
    unsigned char c = g_73E840;
    if (c == 0 || c == 2)
        return 1;
    return 0;
}
