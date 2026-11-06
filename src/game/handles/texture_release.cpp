extern int g_744C70;
extern int g_744C74[];
extern int g_744C80[];
bool __cdecl touchTexture(int id, int generation);

extern int g_744C4C;
extern int g_744C88;
extern int g_744C8C;
extern int g_744C50;
extern unsigned char g_744C58;
extern unsigned char g_740638[];

// FUNCTION: 0x4CF970 sub_4CF970
void sub_4CF970()
{
    g_744C4C ^= 1;
    g_744C88 = 0;
    g_744C8C = 0;
    g_744C50 = 0;
    g_744C58 = 1;
}

// FUNCTION: 0x4CF9A0 sub_4CF9A0
void __cdecl sub_4CF9A0(unsigned int i, unsigned char c)
{
    if (i <= 0xff)
        g_740638[i * 60] = c;
}

// STUB: 0x4CF9C0 sub_4CF9C0 (80 bytes)
void sub_4CF9C0()
{
}

// STUB: 0x4CFA10 sub_4CFA10 (618 bytes)
void sub_4CFA10()
{
}

// STUB: 0x4CFC80 sub_4CFC80 (1032 bytes)
void sub_4CFC80()
{
}

// FUNCTION: 0x4D0090 releaseTextures744C
void releaseTextures744C()
{
    touchTexture(g_744C70, 0);
    g_744C70 = -1;
    int* p = g_744C74;
    do {
        touchTexture(*p, 0);
        *p = -1;
        p++;
    } while ((int)p < (int)g_744C80);
}

// STUB: 0x4D00D0 sub_4D00D0 (654 bytes)
void sub_4D00D0()
{
}

// STUB: 0x4D0360 sub_4D0360 (97 bytes)
void sub_4D0360()
{
}

// STUB: 0x4D03D0 sub_4D03D0 (612 bytes)
void sub_4D03D0()
{
}
