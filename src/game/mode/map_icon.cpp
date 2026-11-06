extern unsigned char g_73D9C9;
extern float g_73D9C0;
extern int g_73D0C4;
void __cdecl sub_473920(int a);
extern char g_628406[];
void __cdecl sub_4761B0(const char* s, int a, int b, int c, int d, int e, int f);

extern void* g_6A8D24;
struct P2_73D9DC {
    short a;
    short b;
};
extern P2_73D9DC g_73D9DC;
extern int g_7005D4;
extern unsigned short g_6E4694;
extern unsigned char g_73D9D6;
extern unsigned char g_73D9D7;
bool __cdecl sub_473C60(int);
void __cdecl sub_4740F0(int);
void __cdecl freeUnmanaged(void* p);

extern int g_697B40;
void clearMapState();

// STUB: 0x472830 sub_472830 (565 bytes)
void sub_472830()
{
}

// FUNCTION: 0x472A70 sub_472A70
void sub_472A70()
{
    if (g_6A8D24) {
        freeUnmanaged(g_6A8D24);
        g_6A8D24 = 0;
    }
}

// STUB: 0x472A90 sub_472A90 (389 bytes)
__declspec(noinline) void sub_472A90()
{
    __asm nop
}

// STUB: 0x472C20 sub_472C20 (532 bytes)
void sub_472C20()
{
}

// STUB: 0x472E40 sub_472E40 (250 bytes)
void sub_472E40()
{
}

// STUB: 0x472F40 sub_472F40 (596 bytes)
void sub_472F40()
{
}

// STUB: 0x473290 sub_473290 (74 bytes)
void sub_473290()
{
}

// FUNCTION: 0x4732E0 sub_4732E0
void sub_4732E0()
{
    clearMapState();
    g_6E4694 |= 4;
    g_73D9D6 = 9;
    sub_472A90();
    g_73D9D7 = *(unsigned short*)((char*)g_6A8D24 + 2) > 0;
}

// STUB: 0x473350 sub_473350 (184 bytes)
void sub_473350()
{
}

// FUNCTION: 0x473470 sub_473470
char sub_473470()
{
    char r = sub_473C60(g_697B40);
    sub_4740F0(g_697B40);
    return r;
}

// STUB: 0x473490 sub_473490 (347 bytes)
void sub_473490()
{
}

// STUB: 0x4735F0 sub_4735F0 (210 bytes)
void sub_4735F0()
{
}

// STUB: 0x4736D0 sub_4736D0 (510 bytes)
void sub_4736D0()
{
}

// FUNCTION: 0x4738D0 sub_4738D0
void sub_4738D0()
{
    g_73D9DC.a = 0;
    g_73D9DC.b = 0;
}

// FUNCTION: 0x4738E0 drawMapIcon
void drawMapIcon()
{
    sub_473920(0x1F);
    sub_4761B0(g_628406, g_73D0C4, 0x1D4, (int)g_73D9C0 + 0x26, 100, 100, g_73D9C9);
}

// STUB: 0x473920 sub_473920 (369 bytes)
void sub_473920()
{
}

// STUB: 0x473AA0 sub_473AA0 (121 bytes)
void sub_473AA0()
{
}

// STUB: 0x473B20 sub_473B20 (116 bytes)
void sub_473B20()
{
}

// STUB: 0x473BA0 sub_473BA0 (130 bytes)
void sub_473BA0()
{
}

// FUNCTION: 0x473C40 sub_473C40
bool __cdecl sub_473C40(int n)
{
    return (g_7005D4 & (1 << (n & 31))) ? true : false;
}

// STUB: 0x473C60 sub_473C60 (82 bytes)
void sub_473C60()
{
}

// STUB: 0x473D00 getColorTableA (6 bytes)
void getColorTableA()
{
}

// STUB: 0x473D10 getColorTableB (6 bytes)
void getColorTableB()
{
}
