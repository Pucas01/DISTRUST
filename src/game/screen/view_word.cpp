extern short g_740056;

extern int g_74006C;
extern int g_740070;
extern float g_740074;

extern unsigned char g_740054;
extern unsigned char g_740058;
extern int g_74005C;
extern int g_740060;
extern int g_740064;
extern float g_740068;
extern unsigned char g_740088;

// FUNCTION: 0x4BCCE0 setView74006C
void __cdecl setView74006C(float f)
{
    g_74006C = 0;
    g_740070 = 0;
    g_740074 = f;
}

// STUB: 0x4BCD10 sub_4BCD10 (1248 bytes)
void sub_4BCD10()
{
}

// STUB: 0x4BD1F0 sub_4BD1F0 (698 bytes)
void sub_4BD1F0()
{
}

// FUNCTION: 0x4BD4B0 setWord740056
void __cdecl setWord740056(short v)
{
    g_740056 = v;
}

// STUB: 0x4BD4C0 sub_4BD4C0 (275 bytes)
void sub_4BD4C0()
{
}

// FUNCTION: 0x4BD5E0 setView740054
void __cdecl setView740054(int a, int b, float c, int d, unsigned char e, float f, float g)
{
    g_740058 = e;
    g_74005C = d;
    g_740068 = c;
    g_740060 = a;
    *(float*)&g_74006C = f;
    g_740054 = 1;
    g_740064 = b;
    g_740070 = 0;
    g_740074 = g;
    g_740088 = 0;
}

// STUB: 0x4BD650 sub_4BD650 (1245 bytes)
void sub_4BD650()
{
}
