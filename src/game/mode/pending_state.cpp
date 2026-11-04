extern unsigned char g_73E382;
extern unsigned char g_73E38F;
extern unsigned char g_pending;
extern unsigned char g_73E38D;
extern unsigned char g_73E38E;

// STUB: 0x48DE00 sub_48DE00 (25 bytes)
void sub_48DE00()
{
}

// FUNCTION: 0x48DE20 setPending73E38
void __cdecl setPending73E38(unsigned int a, unsigned int b, int c, unsigned int d)
{
    if (a > 2 || c < 0 || d > 1 || b > 0x1F)
        return;
    g_73E382 = 1;
    g_73E38F = a;
    g_pending = b;
    g_73E38D = c;
    g_73E38E = d;
}
