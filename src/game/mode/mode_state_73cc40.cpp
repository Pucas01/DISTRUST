extern unsigned char g_73CC40;
extern unsigned char g_73CC44;
extern int g_73CC60;
extern int g_73CC68;
extern unsigned char g_73CC49;
extern unsigned char g_73CD88[];

extern float g_73CC80;
extern float g_73CC88;
extern float g_73CCA4;
extern float g_73CCAC;
extern float g_6235B4;
extern unsigned char g_73CC4E;

extern unsigned char g_73CC40;
extern int g_73CC74;
extern int g_695E64;
bool __cdecl touchTexture(int id, int generation);
void __cdecl sub_4C4AA0();
void __cdecl sub_4419F0();
void __cdecl sub_441420();
void __cdecl sub_441CA0();
void __cdecl sub_441C50();
void __cdecl sub_441520();
void __cdecl sub_423250();
void __cdecl sub_423290();
void __cdecl sub_435070();

// STUB: 0x46BAB0 sub_46BAB0 (438 bytes)
void sub_46BAB0()
{
}

// STUB: 0x46BC70 sub_46BC70 (657 bytes)
void sub_46BC70()
{
}

// FUNCTION: 0x46BF10 sub_46BF10
void __cdecl sub_46BF10(unsigned char v)
{
    g_73CC40 = 1;
    g_73CC44 = 2;
    g_73CC60 = 0;
    g_73CC68 = 0;
    g_73CC49 = v;
}

// STUB: 0x46BF60 sub_46BF60 (433 bytes)
void sub_46BF60()
{
}

// FUNCTION: 0x46C120 sub_46C120
void __cdecl sub_46C120(float a, float b, float c, float d)
{
    g_73CC80 = a;
    g_73CC88 = b;
    g_73CCA4 = c;
    g_73CCAC = d;
    if (d != g_6235B4)
        g_73CC4E = 1;
}

// STUB: 0x46C170 sub_46C170 (1178 bytes)
void sub_46C170()
{
}

// STUB: 0x46C610 sub_46C610 (397 bytes)
void sub_46C610()
{
}

// STUB: 0x46C7A0 sub_46C7A0 (539 bytes)
void sub_46C7A0()
{
}

// STUB: 0x46C9C0 sub_46C9C0 (176 bytes)
void sub_46C9C0()
{
}

// STUB: 0x46CA70 sub_46CA70 (250 bytes)
void sub_46CA70()
{
}

// STUB: 0x46CB70 sub_46CB70 (133 bytes)
void sub_46CB70()
{
}

// STUB: 0x46CC00 sub_46CC00 (143 bytes)
void sub_46CC00()
{
}

// FUNCTION: 0x46CC90 sub_46CC90
void sub_46CC90()
{
    g_73CC40 = 0;
    g_73CC74 = 0;
    sub_4C4AA0();
    if (g_695E64 != -1) {
        touchTexture(g_695E64, 0);
        g_695E64 = -1;
    }
    sub_4419F0();
    sub_441420();
    sub_441CA0();
    sub_441C50();
    sub_441520();
    sub_423250();
    sub_423290();
    sub_435070();
}
