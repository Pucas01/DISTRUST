extern short g_73E412;
extern unsigned short g_73E481;
extern unsigned char g_73E480;

extern char g_73E2C0[];
extern int g_73E2C1;
extern int g_73E2C5;
extern int g_73E2C9;
extern int g_73E2CD;
extern unsigned char g_73E2D1;
extern float g_73E340;
void* __cdecl memset(void* dst, int value, unsigned int n);

// STUB: 0x48C0C0 sub_48C0C0 (384 bytes)
void sub_48C0C0()
{
}

// STUB: 0x48C240 sub_48C240 (186 bytes)
void sub_48C240()
{
}

// STUB: 0x48C300 sub_48C300 (332 bytes)
void sub_48C300()
{
}

// STUB: 0x48C450 sub_48C450 (280 bytes)
void sub_48C450()
{
}

// STUB: 0x48C570 sub_48C570 (141 bytes)
void sub_48C570()
{
}

// STUB: 0x48C600 sub_48C600 (824 bytes)
void sub_48C600()
{
}

// STUB: 0x48C940 sub_48C940 (178 bytes)
void sub_48C940()
{
}

// STUB: 0x48CA00 sub_48CA00 (548 bytes)
void sub_48CA00()
{
}

// STUB: 0x48CC30 sub_48CC30 (403 bytes)
void sub_48CC30()
{
}

// FUNCTION: 0x48CDD0 sub_48CDD0
void __cdecl sub_48CDD0(unsigned int i, char c)
{
    if (i <= 0x10)
        ((char*)&g_73E2C1)[i] = c;
}

// STUB: 0x48CDF0 sub_48CDF0 (342 bytes)
void sub_48CDF0()
{
}

// STUB: 0x48CF50 sub_48CF50 (319 bytes)
void sub_48CF50()
{
}

// STUB: 0x48D090 sub_48D090 (37 bytes)
void sub_48D090()
{
}

// FUNCTION: 0x48D0C0 resetBlock73E2C0
void resetBlock73E2C0()
{
    memset(g_73E2C0, 0, 0x88);
    g_73E2C1 = -1;
    g_73E2C5 = -1;
    g_73E2C9 = -1;
    g_73E2CD = -1;
    g_73E2D1 = 0xFF;
    g_73E340 = 1.0f;
}

// STUB: 0x48D110 sub_48D110 (654 bytes)
void sub_48D110()
{
}

// STUB: 0x48D3A0 sub_48D3A0 (174 bytes)
void sub_48D3A0()
{
}

// STUB: 0x48D450 sub_48D450 (139 bytes)
void sub_48D450()
{
}

// FUNCTION: 0x48D4E0 resetState73E480
void resetState73E480()
{
    g_73E481 = 0xFF;
    g_73E480 = 0;
}

// STUB: 0x48D500 sub_48D500 (60 bytes)
void sub_48D500()
{
}

// FUNCTION: 0x48D540 setWord73E412
void __cdecl setWord73E412(short v)
{
    g_73E412 = v;
}
