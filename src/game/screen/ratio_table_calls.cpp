extern unsigned short g_6FDBA8;
extern unsigned char g_6254E4[];
int __cdecl sub_435D80(char* p, int a, int b);
int __cdecl sub_4C5D30(int a, int b, int c);

extern char g_7005F4[];
extern int g_6A9BF8;
extern int g_6A9BFC;

// FUNCTION: 0x435D10 sub_435D10
int __cdecl sub_435D10(unsigned int a, char flag)
{
    if (flag) {
        if (a <= 7)
            return g_6254E4[a];
        return 0;
    }
    return g_6FDBA8;
}

// FUNCTION: 0x435D40 sub_435D40
int __cdecl sub_435D40(int a, int b)
{
    int r = sub_435D80(g_7005F4 + b * 24, a, b);
    if (r >= 0x50)
        return 3;
    return (r >= 0x3c) + 1;
}

// STUB: 0x435D80 sub_435D80 (388 bytes)
void sub_435D80()
{
}

// FUNCTION: 0x435F10 sub_435F10
void __cdecl sub_435F10(int a, int b)
{
    sub_435D80((char*)g_7005F4 + b * 24, a, b);
}

// STUB: 0x435F30 sub_435F30 (74 bytes)
void sub_435F30()
{
}

// FUNCTION: 0x435F90 sub_435F90
void sub_435F90()
{
    g_6A9BF8 = sub_4C5D30(0x625540, 11, 0);
    g_6A9BFC = sub_4C5D30(0x625550, 10, 0);
}

// FUNCTION: 0x435FC0 sub_435FC0
bool sub_435FC0()
{
    return g_6A9BF8 == -1 && g_6A9BFC == -1;
}

// STUB: 0x435FE0 sub_435FE0 (110 bytes)
void sub_435FE0()
{
}

// STUB: 0x436050 sub_436050 (58 bytes)
void sub_436050()
{
}

// FUNCTION: 0x436090 sub_436090
int __cdecl sub_436090(int i)
{
    return *(int*)((char*)0x700608 + i * 24);
}

// STUB: 0x4360B0 sub_4360B0 (115 bytes)
void sub_4360B0()
{
}

// STUB: 0x436130 sub_436130 (47 bytes)
void sub_436130()
{
}

// STUB: 0x436160 sub_436160 (71 bytes)
void sub_436160()
{
}
