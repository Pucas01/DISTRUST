extern unsigned short g_74C000;

extern unsigned char g_749250;
extern char g_74BFFB[];
extern float g_74C190;
extern float g_74C18C;
extern short g_74C02C[];


extern float g_74C188;
extern unsigned short g_74C03C[];
extern short g_74C002;
extern short g_74C004;
extern short g_74C008;

// FUNCTION: 0x4DA4B0 sub_4DA4B0
void __cdecl sub_4DA4B0(int v)
{
    g_74C188 = v * 0.01f;
    if (g_74C000 == 12)
        g_74C000 = 7;
}

// FUNCTION: 0x4DA4F0 sub_4DA4F0
void __cdecl sub_4DA4F0(char a)
{
    if (a == 1) {
        if (g_74C000 == 12)
            g_74C000 = 9;
    } else if (g_74C000 == 13) {
        g_74C000 = 10;
    }
}

// FUNCTION: 0x4DA530 isWord74C000Thirteen
char isWord74C000Thirteen()
{
    return g_74C000 == 13;
}

// STUB: 0x4DA540 sub_4DA540 (307 bytes)
void sub_4DA540()
{
}

// FUNCTION: 0x4DA680 sub_4DA680
bool sub_4DA680()
{
    if (g_74C000 == 0)
        return false;
    return g_74C000 != 11 && g_74C000 != 1 && g_74C000 != 3;
}

// STUB: 0x4DA6B0 sub_4DA6B0 (38 bytes)
void sub_4DA6B0()
{
}

// FUNCTION: 0x4DA6E0 sub_4DA6E0
void __cdecl sub_4DA6E0(short v)
{
    if (g_74C002 != -1) {
        g_74C002 = -1;
        g_74C004 = -1;
        g_74C000 = 5;
        g_74C008 = v;
    }
}

// STUB: 0x4DA720 sub_4DA720 (501 bytes)
void sub_4DA720()
{
}

// STUB: 0x4DA920 sub_4DA920 (521 bytes)
void sub_4DA920()
{
}

// STUB: 0x4DAB30 sub_4DAB30 (77 bytes)
void sub_4DAB30()
{
}

// FUNCTION: 0x4DAB80 sub_4DAB80
void sub_4DAB80()
{
    if (g_749250 == 0)
        g_749250 = 1;
}

// FUNCTION: 0x4DABA0 allFlags74BFFBClear
bool __cdecl allFlags74BFFBClear()
{
    for (int i = 0; i < 4; i++) {
        unsigned char c = g_74BFFB[i];
        if (c != 0 && c != 3)
            return false;
    }
    return true;
}

// STUB: 0x4DABC0 sub_4DABC0 (1444 bytes)
void sub_4DABC0()
{
}

// STUB: 0x4DB170 sub_4DB170 (18 bytes)
void sub_4DB170()
{
}

// STUB: 0x4DB190 sub_4DB190 (82 bytes)
void sub_4DB190()
{
}

// FUNCTION: 0x4DB1F0 sub_4DB1F0
void __cdecl sub_4DB1F0(int v)
{
    g_74C190 = v * 0.01f;
}

// STUB: 0x4DB210 sub_4DB210 (87 bytes)
void sub_4DB210()
{
}

// STUB: 0x4DB270 sub_4DB270 (176 bytes)
void sub_4DB270()
{
}

// STUB: 0x4DB320 sub_4DB320 (65 bytes)
void sub_4DB320()
{
}

// STUB: 0x4DB370 sub_4DB370 (224 bytes)
void sub_4DB370()
{
}

// STUB: 0x4DB450 sub_4DB450 (266 bytes)
void sub_4DB450()
{
}

// STUB: 0x4DB560 sub_4DB560 (127 bytes)
void sub_4DB560()
{
}

// FUNCTION: 0x4DB5E0 sub_4DB5E0
void __cdecl sub_4DB5E0(int v)
{
    g_74C18C = v * 0.01f;
}

// STUB: 0x4DB600 sub_4DB600 (306 bytes)
void sub_4DB600()
{
}

// STUB: 0x4DB740 sub_4DB740 (74 bytes)
void sub_4DB740()
{
}

// STUB: 0x4DB790 sub_4DB790 (282 bytes)
void sub_4DB790()
{
}

// FUNCTION: 0x4DB8B0 sub_4DB8B0
bool sub_4DB8B0()
{
    for (int i = 0; i < 2; i++) {
        unsigned short x = g_74C03C[i];
        if (x != 0 && x != 11 && x != 1)
            return true;
    }
    return false;
}

// STUB: 0x4DB8E0 sub_4DB8E0 (29 bytes)
void sub_4DB8E0()
{
}

// STUB: 0x4DB900 sub_4DB900 (339 bytes)
void sub_4DB900()
{
}
