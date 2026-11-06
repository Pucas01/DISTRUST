struct Pair2 {
    unsigned char a;
    unsigned char b;
};
extern Pair2 g_73E180;
extern short g_73E142;
extern float g_73E184;
extern float g_69813C;
extern int g_697C20;
extern int g_697C24;
void __cdecl sub_4C8910(int a, int b);
char __cdecl sub_4C88E0(int a);
void __cdecl sub_486290(int a);
void __cdecl sub_4C8D00(int h, float v);

// FUNCTION: 0x4861D0 updateMode180
void updateMode180()
{
    unsigned char m = g_73E180.a;
    if (m == 0) {
        return;
    }
    if (m == 1) {
        if (g_73E180.b == 0) {
            sub_4C8910(g_73E142, g_697C20);
            if (g_73E180.a != 2) {
                g_73E180.a = 2;
                g_73E180.b = 0;
            }
        }
    } else if (m == 3) {
        unsigned char s = g_73E180.b;
        if (s == 0) {
            sub_4C8910(g_73E142, g_697C24);
            g_73E180.b++;
        } else if (s == 1) {
            if (sub_4C88E0(g_73E142) == 1) {
                sub_486290(0);
            }
        }
    }
    sub_4C8D00(g_73E142, g_69813C * g_73E184);
}
