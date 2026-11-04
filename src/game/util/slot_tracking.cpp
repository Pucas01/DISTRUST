extern int g_73C3F0;
extern int g_73C3F4;
extern unsigned char g_73C3ED;
extern int g_73C4E8;
extern int g_73C410[];
extern int g_73C438[];
extern int g_73C498[];

// STUB: 0x441550 sub_441550 (64 bytes)
void sub_441550()
{
}

// STUB: 0x441590 sub_441590 (50 bytes)
void sub_441590()
{
}

// STUB: 0x4415D0 sub_4415D0 (280 bytes)
void sub_4415D0()
{
}

// STUB: 0x4416F0 sub_4416F0 (254 bytes)
void sub_4416F0()
{
}

// STUB: 0x4417F0 sub_4417F0 (415 bytes)
void sub_4417F0()
{
}

// FUNCTION: 0x441990 allSlotsUsed73C4
int allSlotsUsed73C4()
{
    int* p = g_73C410;
    do {
        if (*p == -1)
            return 0;
        p++;
    } while ((int)p < (int)g_73C438);
    p = g_73C438;
    do {
        if (*p == -1)
            return 0;
        p++;
    } while ((int)p < (int)g_73C498);
    return g_73C4E8 != -1;
}

// STUB: 0x4419D0 sub_4419D0 (21 bytes)
void sub_4419D0()
{
}

// STUB: 0x4419F0 sub_4419F0 (82 bytes)
void sub_4419F0()
{
}

// STUB: 0x441A50 sub_441A50 (46 bytes)
void sub_441A50()
{
}

// FUNCTION: 0x441A80 setOrigin73C3F0
void __cdecl setOrigin73C3F0(int x, int y)
{
    int nx = x - 0x1E0;
    if (g_73C3F0 == nx && g_73C3F4 == y - 0x110)
        return;
    g_73C3F0 = nx;
    g_73C3F4 = y - 0x110;
    g_73C3ED = 1;
}

// STUB: 0x441AC0 sub_441AC0 (182 bytes)
void sub_441AC0()
{
}

// STUB: 0x441B80 sub_441B80 (110 bytes)
void sub_441B80()
{
}
