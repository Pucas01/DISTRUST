struct U4 {
    unsigned char a;
    unsigned char b;
    unsigned char c;
    unsigned char d;
};
extern short g_73E13A;
extern U4 g_73E190;
extern short g_73E16C;
extern unsigned char g_73E138;
extern short g_73E13C;
extern int g_697C20;
extern float g_7403E0;
void __cdecl sub_4634B0(int a, int b, int c);
void __cdecl sub_4C8910(int a, int b);
void __cdecl sub_463190(int a, int b);
void __cdecl sub_463430(int a, int b, int c, int d, int e, int f);
char __cdecl sub_4C88E0(int a);
void __cdecl sub_4877C0(int a);
void __cdecl sub_4A5B80(int a);
void __cdecl sub_487B90(int a);
void sub_499380();

// FUNCTION: 0x487C00 updateFlow487C00
void updateFlow487C00()
{
    short s = g_73E13A;
    if (s == 0) {
        if (g_73E190.a != 8) {
            g_73E190.a = 8;
            g_73E190.b = 0;
            g_73E190.c = 0;
            g_73E190.d = 0;
        }
        sub_4634B0(0, 8, 0x4B);
        g_73E13A++;
        return;
    }
    if (s == 1) {
        unsigned char m = g_73E190.a;
        if (m == 2 || m == 0 || m == 4) {
            g_73E13A = 10;
        }
        return;
    }
    if (s == 10) {
        sub_4C8910(g_73E16C, g_697C20);
        sub_463190(0x1E, 0x64);
        sub_463430(0, 8, 0x4B, 0x64, 0, 0x1000);
        g_73E13A++;
        return;
    }
    if (s == 11) {
        if (sub_4C88E0(g_73E16C) == 1) {
            g_73E138 = 0;
        }
        return;
    }
    if (s == 0x14) {
        sub_4877C0(3);
        sub_4A5B80(3);
        sub_487B90(3);
        sub_499380();
        g_73E13A++;
        g_73E13C = 0;
        return;
    }
    if (s == 0x15) {
        int n = (int)((float)g_73E13C + g_7403E0);
        unsigned char b = g_73E138;
        if ((short)n >= 0x3C) {
            b = 0;
        }
        g_73E13C = n;
        g_73E138 = b;
    }
}
