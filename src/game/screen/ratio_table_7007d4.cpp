int __cdecl sub_435D80(char* p, int a, int b);

struct E24_7007D4 {
    int pad[5];
    int f;
};
extern E24_7007D4 g_7007D4[][20];
struct E24w_7007D4 {
    unsigned short pad[4];
    unsigned short w08;
    unsigned short w0a;
    unsigned short w0c;
    unsigned short w0e;
    char pad2[8];
};
extern E24w_7007D4 g_7005F4[];


// STUB: 0x435290 sub_435290 (153 bytes)
void sub_435290()
{
}

// STUB: 0x435330 sub_435330 (69 bytes)
void sub_435330()
{
}

// STUB: 0x4353E0 sub_4353E0 (134 bytes)
void sub_4353E0()
{
}

// STUB: 0x435470 sub_435470 (57 bytes)
void sub_435470()
{
}

// STUB: 0x4354B0 sub_4354B0 (195 bytes)
void sub_4354B0()
{
}

// STUB: 0x435580 sub_435580 (85 bytes)
void sub_435580()
{
}

// STUB: 0x4355E0 sub_4355E0 (98 bytes)
void sub_4355E0()
{
}

// STUB: 0x435650 sub_435650 (199 bytes)
void sub_435650()
{
}

// FUNCTION: 0x435720 sub_435720
int __cdecl sub_435720(int a, int b)
{
    int r = sub_435D80((char*)&g_7007D4[a][b], a, b);
    if (r >= 0x50)
        return 3;
    return (r >= 0x3c) + 1;
}

// FUNCTION: 0x435760 sub_435760
void __cdecl sub_435760(int a, int b)
{
    sub_435D80((char*)&g_7007D4[a][b], a, b);
}

// FUNCTION: 0x435790 sub_435790
int __cdecl sub_435790(int a, int b)
{
    return g_7007D4[a][b].f;
}

// STUB: 0x4357B0 sub_4357B0 (124 bytes)
void sub_4357B0()
{
}

// FUNCTION: 0x435830 sub_435830
float __cdecl sub_435830(int a, int b)
{
    return g_7007D4[a][b].pad[0] * 0.01f * 1.0f;
}

// STUB: 0x4358C0 sub_4358C0 (184 bytes)
void sub_4358C0()
{
}

// STUB: 0x435980 sub_435980 (188 bytes)
void sub_435980()
{
}

// FUNCTION: 0x435A90 sub_435A90
float __cdecl sub_435A90(int a, int b)
{
    E24w_7007D4* e = (E24w_7007D4*)&g_7007D4[a][b];
    float r;
    if (e->w08 == 0)
        r = 0;
    else {
        float cap = (float)e->w08 * 0.5f;
        float cur = (float)e->w0a;
        if (cur != 0 && cap != 0) {
            if (cur > cap)
                cur = cap;
            r = cur / cap;
        } else
            r = 0;
    }
    return r;
}

// FUNCTION: 0x435B10 sub_435B10
int __cdecl sub_435B10(int a, int b)
{
    E24w_7007D4* e = (E24w_7007D4*)&g_7007D4[a][b];
    float r;
    if (e->w08 == 0)
        r = 0;
    else {
        float cap = (float)e->w08 * 0.5f;
        float cur = (float)e->w0a;
        if (cur != 0 && cap != 0) {
            if (cur > cap)
                cur = cap;
            r = cur / cap;
        } else
            r = 0;
    }
    float lim = 20.0f;
    float x = r * lim;
    return (int)(x > lim ? lim : x);
}

// FUNCTION: 0x435BA0 sub_435BA0
float __cdecl sub_435BA0(int a)
{
    E24w_7007D4* e = &g_7005F4[a];
    float r;
    if (e->w08 == 0)
        r = 0;
    else {
        float cap = (float)e->w08 * 0.5f;
        float cur = (float)e->w0a;
        if (cur != 0 && cap != 0) {
            if (cur > cap)
                cur = cap;
            r = cur / cap;
        } else
            r = 0;
    }
    return r;
}

// FUNCTION: 0x435C10 sub_435C10
int __cdecl sub_435C10(int a)
{
    E24w_7007D4* e = &g_7005F4[a];
    float r;
    if (e->w08 == 0)
        r = 0;
    else {
        float cap = (float)e->w08 * 0.5f;
        float cur = (float)e->w0a;
        if (cur != 0 && cap != 0) {
            if (cur > cap)
                cur = cap;
            r = cur / cap;
        } else
            r = 0;
    }
    float lim = 20.0f;
    float x = r * lim;
    return (int)(x > lim ? lim : x);
}

// FUNCTION: 0x435C90 sub_435C90
float __cdecl sub_435C90(int a, int b)
{
    E24w_7007D4* e = (E24w_7007D4*)&g_7007D4[a][b];
    float total = (float)(e->w0c + e->w08);
    float r;
    if (total <= 0)
        r = 0;
    else
        r = (float)(e->w0e + e->w0a) / total;
    return r;
}
