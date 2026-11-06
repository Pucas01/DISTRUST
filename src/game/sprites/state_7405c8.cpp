extern int g_7405C8;
extern unsigned char g_7405CC;

// FUNCTION: 0x4C65B0 sub_4C65B0
void __cdecl sub_4C65B0(int v)
{
    if (v == 3) {
        g_7405C8 = 1;
        g_7405CC = 1;
    } else {
        g_7405C8 = v;
        g_7405CC = 0;
    }
}

// STUB: 0x4C65E0 sub_4C65E0 (96 bytes)
void sub_4C65E0()
{
}
