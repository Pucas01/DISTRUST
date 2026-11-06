extern short g_73E4B0;
extern unsigned char g_73E4AD;
void __cdecl sub_4E1AC0(int a, int b);
int __cdecl sub_4977D0(int a);
int __cdecl sub_497940(int a);
int __cdecl sub_4C6640(int a, int b);
int __cdecl sub_4C6710(int a, int b, int c);
int __cdecl sub_4DC4A0(int a, int b, int c, int d, int e, int f);

// FUNCTION: 0x495C50 loadFadeTexture
void __cdecl loadFadeTexture(int id)
{
    short h = g_73E4B0;
    if (h != -1) {
        sub_4E1AC0(h, 0);
        g_73E4B0 = -1;
    }
    int a = sub_4977D0(id);
    if (a == 0) {
        short h2 = g_73E4B0;
        if (h2 != -1) {
            sub_4E1AC0(h2, a);
            g_73E4B0 = -1;
        }
        return;
    }
    int b = sub_497940(id);
    if (id == 9) {
        g_73E4AD = 1;
    } else {
        g_73E4AD = id == 13 ? 0 : g_73E4AD;
    }
    int t = sub_4C6640(a, 0);
    int u = sub_4C6710(a, 0, b);
    g_73E4B0 = sub_4DC4A0(t, u, 0, 0, 1, 0);
}
