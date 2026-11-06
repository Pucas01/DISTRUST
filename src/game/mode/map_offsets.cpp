extern int g_73DA34;
extern int g_73DA38;
extern int g_73DA28;
extern int g_73DA2C;
void __cdecl sub_476440(int a, int b, int c);

extern int g_73D9C4;
extern unsigned char g_73D9CB;

// STUB: 0x474320 sub_474320 (158 bytes)
void sub_474320()
{
}

// FUNCTION: 0x4743C0 sub_4743C0
void __cdecl sub_4743C0(int a)
{
    sub_476440(a, 0x3c, 0x10);
}

// STUB: 0x4743E0 sub_4743E0 (629 bytes)
void sub_4743E0()
{
}

// STUB: 0x474660 sub_474660 (679 bytes)
void sub_474660()
{
}

// STUB: 0x474910 sub_474910 (267 bytes)
void sub_474910()
{
}

// FUNCTION: 0x474A20 sub_474A20
int __cdecl sub_474A20(int i)
{
    return ((short*)g_73DA34)[i] + g_73DA38;
}

// FUNCTION: 0x474A40 sub_474A40
int __cdecl sub_474A40(int i)
{
    return ((short*)g_73DA28)[i] + g_73DA2C;
}

// STUB: 0x474A60 sub_474A60 (241 bytes)
void sub_474A60()
{
}

// STUB: 0x474B60 sub_474B60 (122 bytes)
void sub_474B60()
{
}

// STUB: 0x474BE0 sub_474BE0 (147 bytes)
void sub_474BE0()
{
}

// FUNCTION: 0x474C90 setFadeRatio
void __cdecl setFadeRatio(int a, int b)
{
    if (a == b) {
        g_73D9C4 = 0xFF;
        g_73D9CB = 0x40;
        return;
    }
    if (a <= 0) {
        g_73D9C4 = 0;
        g_73D9CB = 0;
        return;
    }
    g_73D9C4 = 0xFF / b * a;
    g_73D9CB = 0x40 / b * a;
}
