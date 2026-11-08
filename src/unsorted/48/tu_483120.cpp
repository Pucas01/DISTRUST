int __cdecl sub_46DBE0(int id);
void __cdecl sub_46DB50(int id);
int __cdecl sub_46DC10(int id);
void __cdecl sub_4CE9B0(int h, int v);
int __cdecl sub_474A20(int v);
void __cdecl sub_4F3C90(int a, int b, int c, int d, int e, int f, int g, int h, int i);

// STUB: 0x483150 sub_483150 (85 bytes)
void sub_483150()
{
}

// STUB: 0x4831B0 sub_4831B0 (281 bytes)
void sub_4831B0()
{
}

// FUNCTION: 0x4832D0 sub_4832D0
__declspec(safebuffers) void __cdecl sub_4832D0(int idx, int v)
{
    int tbl[5] = { 6, 7, 8, 9, 0xf };
    if (sub_46DBE0(0x3e8) != -2)
        sub_46DB50(0x3e8);
    int h = sub_46DC10(0x3e8);
    if (h != -2) {
        sub_4F3C90(0, h, 0x70, 0x2c4, 0, sub_474A20(tbl[idx]), 0, 0x12, 0);
        sub_4CE9B0(h, v);
    }
}

// FUNCTION: 0x483370 sub_483370
void __cdecl sub_483370(int v)
{
    if (sub_46DBE0(0x3e9) != -2)
        sub_46DB50(0x3e9);
    int h = sub_46DC10(0x3e9);
    if (h != -2) {
        sub_4F3C90(0, h, 0x80, 0x1dc, 0, sub_474A20(0x10), 0, 0, 0);
        sub_4CE9B0(h, v);
    }
}

// FUNCTION: 0x4833E0 sub_4833E0
unsigned char sub_457800();
extern short g_6289EC[];
void __cdecl sub_4F41C0(int a, int b, int c, int d, int e, int f, int g, int h);
int __cdecl sub_474A40(int v);
__declspec(safebuffers) void __cdecl sub_4833E0(int v)
{
    int tbl[5] = { 6, 7, 8, 9, 0x24 };
    if (sub_46DBE0(0x3e7) != -2)
        sub_46DB50(0x3e7);
    int h = sub_46DC10(0x3e7);
    if (h != -2) {
        for (int i = 0; i < 5; i++) {
            int c;
            if ((unsigned int)i <= 1)
                c = (sub_457800() == 0) * 4 + 0xe;
            else
                c = 0xe;
            sub_4F41C0(0, h, 0x74, g_6289EC[i] + 0x114, sub_474A40(tbl[i]), 0, c, 0);
        }
        sub_4CE9B0(h, v);
    }
}

// STUB: 0x4834E0 sub_4834E0 (69 bytes)
void sub_4834E0()
{
}

// STUB: 0x483530 sub_483530 (292 bytes)
void sub_483530()
{
}

// STUB: 0x483660 sub_483660 (84 bytes)
void sub_483660()
{
}
