void sub_4D0090();
void sub_4F43D0();

extern signed char g_6301F8[];

extern unsigned int g_73F690[];
extern int g_699590;

// FUNCTION: 0x4BC320 sub_4BC320
int __cdecl sub_4BC320(unsigned int i)
{
    if (i <= 0x60)
        return g_6301F8[i];
    return -1;
}

// FUNCTION: 0x4BC340 callPair4D0090
void callPair4D0090()
{
    sub_4D0090();
    sub_4F43D0();
}

// STUB: 0x4BC350 sub_4BC350 (476 bytes)
void sub_4BC350()
{
}

// STUB: 0x4BC530 sub_4BC530 (580 bytes)
void sub_4BC530()
{
}

// STUB: 0x4BC7A0 sub_4BC7A0 (74 bytes)
void sub_4BC7A0()
{
}

// STUB: 0x4BC7F0 sub_4BC7F0 (283 bytes)
__declspec(noinline) unsigned int sub_4BC7F0()
{
    return 0;
}

// FUNCTION: 0x4BC910 sub_4BC910
double sub_4BC910()
{
    return (double)sub_4BC7F0() * 2.3283064365386963e-10;
}

// FUNCTION: 0x4BC950 sub_4BC950
double sub_4BC950()
{
    return ((double)sub_4BC7F0() + 0.5) * 2.3283064365386963e-10;
}

// FUNCTION: 0x4BC990 sub_4BC990
void __cdecl sub_4BC990(unsigned int seed)
{
    g_73F690[0] = seed;
    int i;
    for (i = 1; i < 624; i++)
        g_73F690[i] = 1812433253 * (g_73F690[i - 1] ^ (g_73F690[i - 1] >> 30)) + i;
    g_699590 = i;
}
