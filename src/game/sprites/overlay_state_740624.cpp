extern unsigned char g_740624;
extern int g_740628;
extern float g_74062C;
extern float g_740630;
extern unsigned char g_74063D[];
void __cdecl sub_4F2670(int);
void __cdecl sub_4F26B0(int);

struct Float6x15 {
    float f[15];
};
extern Float6x15 g_74064C[];

// STUB: 0x4CE4F0 sub_4CE4F0 (72 bytes)
void sub_4CE4F0()
{
}

// FUNCTION: 0x4CE540 sub_4CE540
void sub_4CE540()
{
    if (g_740624 == 0)
        sub_4F2670(7);
    else
        sub_4F26B0(7);
}

// FUNCTION: 0x4CE560 sub_4CE560
void sub_4CE560()
{
    g_740624 = 0;
    g_740628 = 0xff0000;
    g_74062C = 1000.0f;
    g_740630 = 10000.0f;
}

// STUB: 0x4CE590 sub_4CE590 (270 bytes)
void sub_4CE590()
{
}

// STUB: 0x4CE6A0 sub_4CE6A0 (131 bytes)
void sub_4CE6A0()
{
}

// FUNCTION: 0x4CE730 sub_4CE730
void __cdecl sub_4CE730(int i, unsigned char v)
{
    if (i >= 0)
        g_74063D[i * 60] = v;
}

// FUNCTION: 0x4CE750 setFloats74064C
void __cdecl setFloats74064C(int i, float a, float b, float c, float d, float e, float f)
{
    if (i < 0)
        return;
    g_74064C[i].f[0] = a;
    g_74064C[i].f[1] = b;
    g_74064C[i].f[2] = c;
    g_74064C[i].f[3] = d;
    g_74064C[i].f[4] = e;
    g_74064C[i].f[5] = f;
}

// STUB: 0x4CE7C0 sub_4CE7C0 (495 bytes)
void sub_4CE7C0()
{
}
