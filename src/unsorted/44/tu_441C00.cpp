// FUNCTION: 0x441C00 sub_441C00
struct Pair441C00 {
    unsigned char a;
    unsigned char b;
};
extern Pair441C00 g_73C3E8;
extern short g_73C3F8;
extern unsigned char g_73C3ED;
extern int g_73C404;
extern int g_73C408;
extern short g_73C40E;
extern float g_73C400;
extern short g_73C40C;
void sub_441C00()
{
    unsigned char s = g_73C3E8.a;
    if (s == 0 || s == 4) {
        g_73C3F8 = 0;
        g_73C3ED = 0;
        g_73C404 = 0;
        g_73C408 = 0;
        g_73C40E = 0;
        g_73C3E8.a = 2;
        g_73C3E8.b = 0;
        g_73C400 = 1.0f;
        g_73C40C = -1;
    }
}

// FUNCTION: 0x441C50 sub_441C50
extern unsigned char g_73C50C;
extern unsigned char g_73C50E;
extern int g_73C410;
void __cdecl sub_4C8B90(int a, int b);
void __cdecl sub_4C9310(int a);
void sub_441C50()
{
    if (g_73C50C) {
        int h = g_73C410;
        g_73C50C = 0;
        g_73C50E = 0;
        sub_4C8B90(h, 0);
        sub_4C9310(g_73C410);
    }
}
