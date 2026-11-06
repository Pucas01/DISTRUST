extern unsigned char g_73C3C0;
extern unsigned char g_73C528[];

// STUB: 0x441CA0 sub_441CA0 (80 bytes)
void sub_441CA0()
{
}

// STUB: 0x441CF0 sub_441CF0 (65 bytes)
void sub_441CF0()
{
}

// FUNCTION: 0x441D40 sub_441D40
void __cdecl sub_441D40(unsigned int i, unsigned char v)
{
    if (i <= 1)
        g_73C528[i] = v;
}

// FUNCTION: 0x441D60 sub_441D60
int sub_441D60()
{
    unsigned char c = g_73C3C0;
    if (c == 0)
        return 1;
    return c == 3;
}
