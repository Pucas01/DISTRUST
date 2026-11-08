// STUB: 0x4719A0 sub_4719A0 (292 bytes)
void sub_4719A0()
{
}

// STUB: 0x471AD0 sub_471AD0 (158 bytes)
void sub_471AD0()
{
}

// STUB: 0x471B70 sub_471B70 (302 bytes)
void sub_471B70()
{
}

// FUNCTION: 0x471CA0 sub_471CA0
int __cdecl sub_471CA0(int* a, int x, int idx)
{
    int n = a[0];
    if (idx == n - 1)
        return ((-1 - n) << 2) - a[idx + 1] + x;
    return a[idx + 2] - a[idx + 1];
}

// STUB: 0x471CD0 sub_471CD0 (508 bytes)
void sub_471CD0()
{
}

// STUB: 0x471ED0 sub_471ED0 (301 bytes)
void sub_471ED0()
{
}

// STUB: 0x472000 sub_472000 (544 bytes)
void sub_472000()
{
}

// STUB: 0x472220 sub_472220 (871 bytes)
void sub_472220()
{
}

// STUB: 0x472590 sub_472590 (429 bytes)
void sub_472590()
{
}

// STUB: 0x472740 sub_472740 (118 bytes)
void sub_472740()
{
}

// FUNCTION: 0x4727C0 sub_4727C0
struct Rec4727C0 {
    char pad0[0x10];
    int f10;
    int f14;
    int f18;
    char pad1c[0xc];
    int f28;
};
extern Rec4727C0 g_69742C[];
extern int g_697910;
void sub_4727C0()
{
    int n = g_697910;
    for (int i = 0; i < 20; i++) {
        Rec4727C0* r = &g_69742C[i];
        if ((unsigned int)i <= 0xf)
            r->f14 = 0xd480;
        else if (i == 0x10)
            r->f14 = 0xd480;
        else if (i == 0x12)
            r->f10 = n * -100;
        else if (i == 0x13)
            r->f10 = 0x17700;
        r->f18 = 0;
        r->f28 = 0x28;
    }
}
