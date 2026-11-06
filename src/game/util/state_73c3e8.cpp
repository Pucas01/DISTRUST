extern unsigned char g_73C510[];
extern unsigned char g_73C3E8;
extern short g_73C3F8;

// FUNCTION: 0x441490 sub_441490
void __cdecl sub_441490(unsigned int i, unsigned char v)
{
    if (i <= 3)
        g_73C510[i] = v;
}

// STUB: 0x4414B0 sub_4414B0 (101 bytes)
void sub_4414B0()
{
}

// FUNCTION: 0x441520 sub_441520
void sub_441520()
{
    unsigned char c = g_73C3E8;
    if (c != 0 && c != 4) {
        g_73C3E8 = 4;
        g_73C3F8 = 0;
    }
}
