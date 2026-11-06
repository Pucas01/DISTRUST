extern int g_699234;
extern unsigned char g_69922D;
extern unsigned char g_69922C;
int __cdecl sub_4C8390(int);

// STUB: 0x4B0080 sub_4B0080 (87 bytes)
void sub_4B0080()
{
}

// STUB: 0x4B00F0 sub_4B00F0 (76 bytes)
void sub_4B00F0()
{
}

// STUB: 0x4B0150 sub_4B0150 (72 bytes)
void sub_4B0150()
{
}

// STUB: 0x4B01A0 sub_4B01A0 (255 bytes)
void sub_4B01A0()
{
}

// FUNCTION: 0x4B02A0 sub_4B02A0
void sub_4B02A0()
{
    if (g_699234 > 0) {
        sub_4C8390(g_699234);
        g_699234 = -1;
    }
}

// FUNCTION: 0x4B02C0 sub_4B02C0
void __cdecl sub_4B02C0(unsigned char v)
{
    if (g_69922C != 0xff)
        g_69922D = g_69922C;
    g_69922C = v;
}

// STUB: 0x4B02F0 sub_4B02F0 (177 bytes)
void sub_4B02F0()
{
}

// FUNCTION: 0x4B03B0 sub_4B03B0
void __cdecl sub_4B03B0(int* p, int n)
{
    if (n) {
        do {
            if (p) {
                p[0] = -1;
                p[1] = -1;
            }
            p += 2;
        } while (--n);
    }
}

// STUB: 0x4B0410 sub_4B0410 (344 bytes)
void sub_4B0410()
{
}
