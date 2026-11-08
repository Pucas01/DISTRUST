extern unsigned char g_73D110;
extern unsigned int g_6E4758;

// FUNCTION: 0x483CC0 sub_483CC0
int __cdecl sub_46DBE0(int id);
void __cdecl sub_46DB50(int id);
int __cdecl sub_46DC10(int id);
void __cdecl sub_4CE9B0(int h, int v);
int __cdecl sub_474A20(int v);
void __cdecl sub_4F3C90(int a, int b, int c, int d, int e, int f, int g, int h, int i);
void __cdecl sub_483CC0(int a, int v)
{
    if (sub_46DBE0(0x3e8) != -2)
        sub_46DB50(0x3e8);
    int h = sub_46DC10(0x3e8);
    if (h != -2) {
        sub_4F3C90(0, h, 0x70, 0x2c4, 0, sub_474A20(a), 0, 0x12, 0);
        sub_4CE9B0(h, v);
    }
}

// STUB: 0x483D30 sub_483D30 (236 bytes)
void sub_483D30()
{
}

// STUB: 0x483E20 sub_483E20 (32 bytes)
void sub_483E20()
{
}

// FUNCTION: 0x483E40 sub_483E40
bool sub_483E40()
{
    if (g_73D110 == 0xff)
        return false;
    if (!((g_6E4758 >> 6) & 1))
        return false;
    return true;
}
