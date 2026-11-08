extern int g_73C3F0;
extern int g_73C3F4;
extern unsigned char g_73C3ED;
extern int g_73C4E8;
extern int g_73C410[];
extern int g_73C438[];
extern int g_73C498[];

extern unsigned char g_73C53E;
extern char g_73C548[];
extern unsigned char g_73C3E8;
extern unsigned char g_73C535;
extern unsigned char g_73C534;

// FUNCTION: 0x441590 sub_441590
void __cdecl sub_441590(char a, int b, int c)
{
    unsigned char n = g_73C53E;
    if (n < 0x14) {
        char* e = g_73C548 + n * 16;
        e[1] = a;
        *(int*)(e + 8) = b;
        *(int*)(e + 0xc) = c;
        g_73C53E++;
    }
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

// FUNCTION: 0x4419D0 sub_4419D0
void __cdecl sub_4419D0(int a)
{
    g_73C3E8 = (unsigned char)(((a != 1) - 1) & 3);
}

// STUB: 0x4419F0 sub_4419F0 (82 bytes)
void sub_4419F0()
{
}

// FUNCTION: 0x441A50 sub_441A50
void __cdecl sub_441A50(int a, int b)
{
    g_73C535 = (unsigned char)b;
    if (b == 1) {
        if (a != -1)
            g_73C534 = (unsigned char)a;
    }
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
