extern unsigned char g_73E3C3;
extern unsigned char g_73E3C4;

// FUNCTION: 0x48DCE0 sub_48DCE0
int sub_48DCE0()
{
    unsigned char c = g_73E3C3;
    if (c != 7)
        return c;
    return g_73E3C4 + 10000;
}
