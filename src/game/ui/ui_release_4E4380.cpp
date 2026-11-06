struct Elem18 {
    int h;
    char pad[0x14];
};
extern int g_74D584;
extern int g_74D888;
extern int g_74D88C;
extern Elem18 g_74D5B0[];
void __cdecl sub_4E1AC0(int a, int b);
void sub_4B0B10();

// FUNCTION: 0x4E4380 releaseHandles4E4380
int releaseHandles4E4380()
{
    g_74D584 = 0;
    if (g_74D888 != -1) {
        sub_4E1AC0(g_74D888, 0);
        g_74D888 = -1;
    }
    if (g_74D88C != -1) {
        sub_4E1AC0(g_74D88C, 0);
        g_74D88C = -1;
    }
    for (Elem18* p = g_74D5B0; (int)p < (int)&g_74D5B0[30]; p++) {
        if (p->h >= 0 && p->h != -1) {
            sub_4E1AC0(p->h, 0);
            p->h = -1;
        }
    }
    sub_4B0B10();
    return 0;
}
