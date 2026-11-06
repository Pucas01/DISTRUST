extern char g_7404DC[];
extern unsigned char g_7404C8;
extern int g_7404CC;
extern int g_7404D0;
extern int g_7404D4;
void __cdecl sub_4E2B90(char* a, int b, int c, int d, int e, int f);

// FUNCTION: 0x4C4AB0 sub_4C4AB0
char* sub_4C4AB0()
{
    return g_7404DC;
}

// FUNCTION: 0x4C4AC0 sub_4C4AC0
void sub_4C4AC0()
{
    if (g_7404C8 != 1) {
        g_7404C8 = 1;
        g_7404CC = 0;
        g_7404D0 = 0;
        g_7404D4 = 0;
    }
}

// FUNCTION: 0x4C4AF0 sub_4C4AF0
void __cdecl sub_4C4AF0(int a)
{
    sub_4E2B90(g_7404DC, a, 0x78, 0x44, 0, 0x100000);
}

// STUB: 0x4C4B10 sub_4C4B10 (120 bytes)
void sub_4C4B10()
{
}

// STUB: 0x4C4C60 sub_4C4C60 (71 bytes)
void sub_4C4C60()
{
}

// STUB: 0x4C4CB0 sub_4C4CB0 (183 bytes)
void sub_4C4CB0()
{
}

// STUB: 0x4C4D70 sub_4C4D70 (138 bytes)
void sub_4C4D70()
{
}

// STUB: 0x4C4E00 sub_4C4E00 (186 bytes)
void sub_4C4E00()
{
}
