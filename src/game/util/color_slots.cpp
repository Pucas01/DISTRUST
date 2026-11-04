struct Color12 {
    int a;
    int b;
    unsigned int color;
};
extern Color12* g_7481E4;
extern unsigned char g_7481DE;

// FUNCTION: 0x4D6A90 setColorSlot
void __cdecl setColorSlot(unsigned int index, int r, int g, int b, int a)
{
    if (index <= 3) {
        g_7481E4[index].color = (((((unsigned char)b | (a << 8)) << 8) | (unsigned char)g) << 8) | (unsigned char)r;
        g_7481DE = 1;
    }
}

// STUB: 0x4D6AD0 sub_4D6AD0 (147 bytes)
void sub_4D6AD0()
{
}
