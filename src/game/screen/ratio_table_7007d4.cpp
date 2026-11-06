int __cdecl sub_435D80(char* p, int a, int b);

struct E24_7007D4 {
    int pad[5];
    int f;
};
extern E24_7007D4 g_7007D4[][20];

// STUB: 0x435290 sub_435290 (153 bytes)
void sub_435290()
{
}

// STUB: 0x435330 sub_435330 (69 bytes)
void sub_435330()
{
}

// STUB: 0x435380 sub_435380 (90 bytes)
void sub_435380()
{
}

// STUB: 0x4353E0 sub_4353E0 (134 bytes)
void sub_4353E0()
{
}

// STUB: 0x435470 sub_435470 (57 bytes)
void sub_435470()
{
}

// STUB: 0x4354B0 sub_4354B0 (195 bytes)
void sub_4354B0()
{
}

// STUB: 0x435580 sub_435580 (85 bytes)
void sub_435580()
{
}

// STUB: 0x4355E0 sub_4355E0 (98 bytes)
void sub_4355E0()
{
}

// STUB: 0x435650 sub_435650 (199 bytes)
void sub_435650()
{
}

// FUNCTION: 0x435720 sub_435720
int __cdecl sub_435720(int a, int b)
{
    int r = sub_435D80((char*)&g_7007D4[a][b], a, b);
    if (r >= 0x50)
        return 3;
    return (r >= 0x3c) + 1;
}

// FUNCTION: 0x435760 sub_435760
void __cdecl sub_435760(int a, int b)
{
    sub_435D80((char*)&g_7007D4[a][b], a, b);
}

// FUNCTION: 0x435790 sub_435790
int __cdecl sub_435790(int a, int b)
{
    return g_7007D4[a][b].f;
}

// STUB: 0x4357B0 sub_4357B0 (124 bytes)
void sub_4357B0()
{
}

// FUNCTION: 0x435830 sub_435830
float __cdecl sub_435830(int a, int b)
{
    return g_7007D4[a][b].pad[0] * 0.01f * 1.0f;
}

// STUB: 0x435870 sub_435870 (80 bytes)
void sub_435870()
{
}

// STUB: 0x4358C0 sub_4358C0 (184 bytes)
void sub_4358C0()
{
}

// STUB: 0x435980 sub_435980 (188 bytes)
void sub_435980()
{
}

// STUB: 0x435A40 sub_435A40 (77 bytes)
void sub_435A40()
{
}

// STUB: 0x435A90 sub_435A90 (116 bytes)
void sub_435A90()
{
}

// STUB: 0x435B10 sub_435B10 (131 bytes)
void sub_435B10()
{
}

// STUB: 0x435BA0 sub_435BA0 (107 bytes)
void sub_435BA0()
{
}

// STUB: 0x435C10 sub_435C10 (122 bytes)
void sub_435C10()
{
}

// STUB: 0x435C90 sub_435C90 (102 bytes)
void sub_435C90()
{
}
