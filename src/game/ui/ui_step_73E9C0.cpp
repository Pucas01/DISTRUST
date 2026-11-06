extern unsigned char g_73E9C0;
extern unsigned char g_73E9C1;
extern short g_73E874;
extern int g_698ED8;
void __cdecl sub_4C89A0(int h, int v);
void __cdecl sub_4C8B90(int a, int b);
char __cdecl sub_4C88E0(int a);
void __cdecl sub_4C9310(int a);

// FUNCTION: 0x49F770 stepMode49F770
void stepMode49F770()
{
    unsigned char m = g_73E9C0;
    if (m == 0) {
        return;
    }
    if (m != 10) {
        return;
    }
    unsigned char s = g_73E9C1;
    if (s == 0) {
        sub_4C89A0(g_73E874, g_698ED8);
        sub_4C8B90(g_73E874, 1);
        g_73E9C1++;
        return;
    }
    if (s == 1) {
        if (sub_4C88E0(g_73E874) == 1) {
            sub_4C8B90(g_73E874, 0);
            sub_4C9310(g_73E874);
            g_73E9C0 = 0;
        }
    }
}
