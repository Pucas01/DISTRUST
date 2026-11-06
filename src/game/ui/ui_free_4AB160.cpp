extern int g_73EC58;
extern int g_73EC5C;
extern int g_73ECB8[];
extern int g_73EC78[];
void __cdecl sub_4D64A0(int p);
void __cdecl sub_4AFD70(int a);
void __cdecl sub_4E1AC0(int a, int b);
void __cdecl sub_4C8390(int a);
char __cdecl sub_4B0150(int a);
int __cdecl sub_4AFD20(int a, int b);
void __cdecl sub_4C8AF0(int h, float x, float y);

// FUNCTION: 0x4AB160 freeUiResources
void freeUiResources()
{
    if (g_73EC58) {
        sub_4D64A0(g_73EC58);
        g_73EC58 = 0;
    }
    if (g_73EC5C) {
        sub_4D64A0(g_73EC5C);
        g_73EC5C = 0;
    }
    sub_4AFD70(3);
    for (int* p = g_73ECB8; (int)p < (int)&g_73ECB8[29]; p++) {
        sub_4E1AC0(*p, 0);
    }
    for (int* p = g_73EC78; (int)p < (int)&g_73EC78[15]; p++) {
        if (*p > 0) {
            sub_4C8390(*p);
            *p = -1;
        }
    }
}

// FUNCTION: 0x4AA950 loadUiIcons
void loadUiIcons()
{
    int i = 0;
    if (sub_4B0150(3) == 1) {
        for (int* p = g_73EC78; (int)p < (int)&g_73EC78[15]; p++) {
            *p = sub_4AFD20(3, 0x15);
        }
        int y = 0x54;
        for (int row = 4; row != 0; row--) {
            int col = 0;
            int x = col + 0x14;
            for (; col < 4; col++) {
                if (i >= 15) {
                    break;
                }
                sub_4C8AF0(g_73EC78[i], (float)x, (float)y);
                x += 0x74;
                i++;
            }
            y += 0x74;
        }
    }
}
