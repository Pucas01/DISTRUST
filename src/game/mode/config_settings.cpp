int __cdecl sub_46DBE0(int id);
void __cdecl sub_46DB50(int id);
int __cdecl sub_46DC10(int id);
void __cdecl sub_4CE9B0(int h, int v);
int __cdecl sub_474A20(int v);
void __cdecl sub_4F3C90(int a, int b, int c, int d, int e, int f, int g, int h, int i);

extern unsigned char g_6A9C74;
extern unsigned char g_6A9C75;
extern unsigned char g_6A9C76;
extern unsigned char g_6A9C7A;
extern unsigned char g_6A9C79;
extern unsigned char g_73DC72;
extern unsigned char g_73DC73;
extern unsigned char g_73DC82;
extern unsigned char g_73DC83;
extern unsigned char g_73DC84;

extern int g_73DC64;
extern int g_73DC68;

extern short g_mapState;
void __cdecl sub_4800B0(int a);
__declspec(safebuffers) void __cdecl sub_480000(int a, int b, int c, int d, int e);

// STUB: 0x47F4A0 sub_47F4A0 (1835 bytes)
void sub_47F4A0()
{
}

// FUNCTION: 0x47FBD0 copySettings6A9C
void copySettings6A9C()
{
    g_73DC72 = g_6A9C74;
    g_73DC73 = g_6A9C75;
    g_73DC82 = g_6A9C76;
    g_73DC83 = g_6A9C7A;
    g_73DC84 = g_6A9C79;
}

// STUB: 0x47FC10 sub_47FC10 (113 bytes)
void sub_47FC10()
{
}

// STUB: 0x47FC90 sub_47FC90 (175 bytes)
void sub_47FC90()
{
}

// STUB: 0x47FD40 sub_47FD40 (689 bytes)
void sub_47FD40()
{
}

// FUNCTION: 0x480000 sub_480000
__declspec(safebuffers) void __cdecl sub_480000(int idx, int c, int d, int e, int f)
{
    if (sub_46DBE0(0x3e8) != -2)
        sub_46DB50(0x3e8);
    int h = sub_46DC10(0x3e8);
    if (h != -2) {
        int tbl[6] = { 0xa, 0xb, 0xc, 0x11, 0xd, 0xe };
        sub_4F3C90(0, h, c, d + 0x11e, 0, sub_474A20(tbl[idx]), 0, f, 0);
        sub_4CE9B0(h, e);
    }
}

// FUNCTION: 0x4800B0 sub_4800B0
int sub_4C2100();
int __cdecl sub_474A40(int v);
void __cdecl sub_4F41C0(int a, int b, int c, int d, int e, int f, int g, int h);
extern short* g_73DC7C;
extern short g_62882C[];
extern short g_628868[];
__declspec(safebuffers) void __cdecl sub_4800B0(int v)
{
    if (sub_46DBE0(0x3e7) != -2)
        sub_46DB50(0x3e7);
    int h = sub_46DC10(0x3e7);
    if (h != -2) {
        int tbl[9] = { 0xa, 0xb, 0xc, 0x25, 0xd, 0xe, 0xf, 0x10, 0x11 };
        short* pos = sub_4C2100() == 0 ? g_62882C : g_628868;
        for (int i = 0; i < 9; i++)
            sub_4F41C0(0, h, pos[i], g_73DC7C[i] + 0x118, sub_474A40(tbl[i]), 0, 0xe, 0);
        sub_4CE9B0(h, v);
    }
}

// FUNCTION: 0x4801B0 sub_4801B0
void __cdecl sub_4801B0(int a)
{
    sub_4800B0(a);
    sub_480000(g_mapState, 0x70, 0x1a2, a, 0x12);
}

// FUNCTION: 0x4801E0 sub_4801E0
int __cdecl sub_4801E0(int i)
{
    if (i == 0)
        return g_73DC64;
    if (i == 1)
        return g_73DC68;
    return -1;
}

// STUB: 0x480200 sub_480200 (207 bytes)
void sub_480200()
{
}

// STUB: 0x4802D0 sub_4802D0 (663 bytes)
void sub_4802D0()
{
}
