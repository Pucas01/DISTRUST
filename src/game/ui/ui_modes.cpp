struct Pair2 {
    unsigned char a;
    unsigned char b;
};
extern unsigned char g_73E180;
extern unsigned char g_73E181;
extern unsigned char g_73E188;
extern unsigned char g_73E189;
extern Pair2 g_73E29C;
extern short g_73E2A0;
extern unsigned char g_73E190;
extern unsigned char g_73E191;
extern short g_73E192;
extern Pair2 g_73E2A2;

struct Ent {
    char b0;
    unsigned char b1;
    unsigned char b2;
    char b3;
    short w4;
    char pad[10];
};
extern Ent g_73E19C[];

// FUNCTION: 0x486290 setMode180
void __cdecl setMode180(int v)
{
    if (g_73E180 != v) {
        g_73E180 = v;
        g_73E181 = 0;
    }
}

// FUNCTION: 0x487B90 setMode188
void __cdecl setMode188(int v)
{
    if (g_73E188 != v) {
        g_73E188 = v;
        g_73E189 = 0;
    }
}

// FUNCTION: 0x486340 setMode29C
void __cdecl setMode29C(int v)
{
    if (g_73E29C.a != v) {
        g_73E29C.a = v;
        g_73E29C.b = 0;
        g_73E2A0 = 0;
    }
}

// FUNCTION: 0x4877C0 setMode190
void __cdecl setMode190(int v)
{
    if (g_73E190 != v) {
        g_73E190 = v;
        g_73E191 = 0;
        g_73E192 = 0;
    }
}

// FUNCTION: 0x4873A0 entIdle
int __cdecl entIdle(int i)
{
    Ent* e = &g_73E19C[i];
    unsigned char s = e->b1;
    if (s == 0 || s == 4) {
        return 1;
    }
    if (s == 2 && e->b2 >= s) {
        return 1;
    }
    return 0;
}

// FUNCTION: 0x4873D0 setEntState
void __cdecl setEntState(int i, int st)
{
    Ent* e = &g_73E19C[i];
    unsigned char d = e->b1;
    if (d != st || d == 6 || d == 5) {
        e->b1 = st;
        e->b2 = 0;
        e->w4 = 0;
    }
}

// FUNCTION: 0x486890 setMode2A2
void __cdecl setMode2A2(int m)
{
    unsigned char s = g_73E2A2.a;
    if (m == 1) {
        if (s != 1 && s != 4) {
            g_73E2A2.a = 1;
            g_73E2A2.b = 0;
        }
    } else {
        if (s != 3 && s != 0) {
            g_73E2A2.a = 3;
            g_73E2A2.b = 0;
        }
    }
}

extern unsigned char g_73E29E;
extern short g_73E168;
extern short g_73E16A;
extern short g_73E17E;
extern int g_6FDB88;
extern int g_697C20;
void __cdecl sub_4C8910(int a, int b);
char __cdecl sub_4C88E0(int a);
void __cdecl sub_486340(int a);

// FUNCTION: 0x4862B0 updateMode29C
void updateMode29C()
{
    unsigned char m = g_73E29C.a;
    if (m == 0) {
        return;
    }
    if (m != 1) {
        return;
    }
    unsigned char st = g_73E29C.b;
    if (st == 0) {
        if (g_73E29E == 0) {
            sub_4C8910(g_73E168, g_697C20);
        } else {
            sub_4C8910(g_73E16A, g_697C20);
        }
        g_73E29C.b++;
        return;
    }
    if (st == 1) {
        if (g_73E29E == 0) {
            if (sub_4C88E0(g_73E168) == 1) {
                sub_486340(0);
            }
        } else {
            if (sub_4C88E0(g_73E16A) == 1) {
                sub_486340(0);
            }
        }
    }
}
