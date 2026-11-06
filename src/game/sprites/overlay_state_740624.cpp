extern unsigned char g_740624;
extern int g_740628;
extern float g_74062C;
extern float g_740630;
extern unsigned char g_74063D[];
void __cdecl sub_4F2670(int);
void __cdecl sub_4F26B0(int);

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

// STUB: 0x4CE750 sub_4CE750 (103 bytes)
void sub_4CE750()
{
}

// STUB: 0x4CE7C0 sub_4CE7C0 (495 bytes)
void sub_4CE7C0()
{
}
