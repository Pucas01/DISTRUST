extern int g_73CB84;
extern int g_73CB88;
extern int g_73CB8C;
extern int g_73CB90;
extern int g_73CB94;
extern int g_695DA8;
extern int g_73CB78;
extern unsigned char g_695DAC;
extern unsigned char g_73CB7C;
extern short g_695DB0;
void __cdecl sub_463A30(int a);

// FUNCTION: 0x4639A0 sub_4639A0
void sub_4639A0()
{
    g_73CB84 = 0;
    g_73CB88 = 0;
    g_73CB8C = 0;
    g_73CB90 = 0;
    g_73CB94 = 0;
    g_695DA8 = 5;
    g_73CB78 = 0;
    g_695DAC = 4;
    g_73CB7C = 0;
    g_695DB0 = 0x3c0;
}

// FUNCTION: 0x463A00 sub_463A00
void __cdecl sub_463A00(int a)
{
    sub_463A30(a);
    g_695DB0 = 0x324;
    g_695DAC = 2;
    g_73CB7C = 0x26;
}

// FUNCTION: 0x463A30 sub_463A30
void __cdecl sub_463A30(int a)
{
    if (g_695DAC != 2) {
        g_695DA8 = a;
        g_73CB84 = 0;
        g_73CB88 = 0;
        g_73CB8C = 0;
        g_73CB90 = 0;
        g_73CB94 = 0;
        g_73CB78 = 1;
        g_695DAC = 1;
        g_73CB7C = 0;
        g_695DB0 = 0x3c0;
    }
}

// STUB: 0x463AA0 sub_463AA0 (477 bytes)
void sub_463AA0()
{
}
