extern int g_7007D4[];
extern float g_623418;
extern int g_7404CC;
extern int g_7404D0;
extern int g_7404D4;
extern unsigned char g_73E5DF;
extern unsigned char g_73E5E0[];
extern unsigned char g_73D9F8;
extern float g_6285C0;
extern float g_6285C4;
extern float g_6285C8;
extern float g_6285CC;
extern float g_6285D0;
extern float g_62360C;
extern unsigned char g_6254B8[];
extern unsigned char g_6254E4[];
extern short g_6A9C00[];
extern unsigned short g_6FDBA8;

struct Timer2A4 {
    char b0;
    unsigned char state;
    char pad2[10];
    short armed;
    short count;
};
extern Timer2A4* g_73E2A4;

int __cdecl testButtonA(int code);
void __cdecl sub_4CFA10(int a, float b, float c, float d, float e, float f, int g, int h);

// FUNCTION: 0x435870 sub_435870
int sub_435870(int a, int b)
{
    int idx = a * 20 + b;
    int total = g_7007D4[idx * 6 + 1];
    if (total <= 0)
        return 0;
    int v = (int)((float)g_7007D4[idx * 6] / (float)total * g_623418);
    if (v > 40)
        v = 40;
    return v;
}

// FUNCTION: 0x4C4A40 sub_4C4A40
int sub_4C4A40(int a, int b)
{
    g_7404CC = a * 120 / 960;
    g_7404D0 = b * 68 / 544;
    return g_7404D4;
}

// FUNCTION: 0x4CF9C0 sub_4CF9C0
void sub_4CF9C0(int a, float b, float c, float d, float e, float f)
{
    sub_4CFA10(a, b, c, d, e, f, 0, 0xFF);
}

// FUNCTION: 0x48BD50 sub_48BD50
void sub_48BD50()
{
    Timer2A4* t = g_73E2A4;
    if (t->armed == 0) {
        t->count = (short)((float)t->count + 1.0f);
        if (testButtonA(0x30))
            t->count = 300;
        if (t->count >= 300) {
            t->state = 0xF;
            t->armed = 0;
        }
    }
}

// FUNCTION: 0x49A840 sub_49A840
void sub_49A840(int v)
{
    if (v < 0)
        v = 0;
    else if (v > 19)
        v = 19;
    g_73E5DF = (unsigned char)v;
    g_73E5E0[0] = 1;
    for (int i = (unsigned char)v; i < 20; i++)
        g_73E5E0[1 + i] = 0;
    g_73E5E0[0x15] = 1;
}

// FUNCTION: 0x475F80 sub_475F80
float sub_475F80()
{
    float a, b;
    if (g_73D9F8) {
        a = g_6285C4;
        b = g_6285CC;
    } else {
        a = g_6285C8;
        b = g_6285D0;
    }
    return b - (a + 30.0f) - g_6285C0 - g_62360C;
}

// FUNCTION: 0x435380 sub_435380
short* sub_435380(unsigned int idx, char sel)
{
    int n;
    if (sel)
        n = idx <= 7 ? g_6254E4[idx] : 0;
    else
        n = g_6FDBA8;
    int i = 0;
    for (; i < n; i++)
        g_6A9C00[i] = ((const short*)g_6254B8)[i];
    g_6A9C00[i] = 0x35A;
    return g_6A9C00;
}
