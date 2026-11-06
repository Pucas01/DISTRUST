void __cdecl sub_422750(int i);
extern char g_6A5F30[];

extern float g_6118AC;
void __cdecl sub_41B110(int a, int b);
int __cdecl sub_4C6090(int id);
extern int g_68D984;
extern int g_68D894;
extern int g_68D8E4;
extern int g_68D934;

// STUB: 0x421FF0 sub_421FF0 (103 bytes)
void sub_421FF0()
{
}

// STUB: 0x422060 sub_422060 (203 bytes)
void sub_422060()
{
}

// STUB: 0x422130 sub_422130 (268 bytes)
void sub_422130()
{
}

// STUB: 0x422240 sub_422240 (142 bytes)
void sub_422240()
{
}

// STUB: 0x4222D0 sub_4222D0 (56 bytes)
void sub_4222D0()
{
}

// STUB: 0x422310 sub_422310 (87 bytes)
void sub_422310()
{
}

// FUNCTION: 0x422370 sub_422370
float __cdecl sub_422370(unsigned int i)
{
    if (i <= 0x11) {
        char* e = g_6A5F30 + i * 0x214;
        if ((unsigned char)e[0] != 0xff && *(int*)(e + 0x14) == -1 && e[4])
            return *(float*)(e + 0x80);
    }
    return g_6118AC;
}

// STUB: 0x4223B0 sub_4223B0 (709 bytes)
void sub_4223B0()
{
}

// STUB: 0x422680 sub_422680 (159 bytes)
void sub_422680()
{
}

// FUNCTION: 0x422720 sub_422720
void __cdecl sub_422720(unsigned int i)
{
    if (i <= 0x11) {
        char* e = g_6A5F30 + i * 0x214;
        *(short*)(e + 0xe) = -1;
        e[0x10] = -1;
    }
}

// STUB: 0x422750 sub_422750 (239 bytes)
void sub_422750()
{
}

// FUNCTION: 0x422840 sub_422840
void __cdecl sub_422840(unsigned int i, char c)
{
    if (i <= 0x11) {
        *((char*)0x6a5f3b + i * 0x214) = c;
        sub_422750(i);
    }
}

// FUNCTION: 0x422870 sub_422870
void __cdecl sub_422870(unsigned int i, unsigned char v)
{
    if (i <= 0x11) {
        char* e = g_6A5F30 + i * 0x214;
        e[4] = v;
        e[7] = 0;
        sub_41B110(e[0xb], v);
    }
}

// STUB: 0x4228B0 sub_4228B0 (204 bytes)
void sub_4228B0()
{
}

// STUB: 0x422980 sub_422980 (240 bytes)
void sub_422980()
{
}

// STUB: 0x422A70 sub_422A70 (187 bytes)
void sub_422A70()
{
}

// STUB: 0x422B30 sub_422B30 (781 bytes)
void sub_422B30()
{
}

// STUB: 0x422E40 sub_422E40 (445 bytes)
void sub_422E40()
{
}

// FUNCTION: 0x423000 sub_423000
int __cdecl sub_423000(unsigned int i)
{
    if (i <= 0x11) {
        char* e = g_6A5F30 + i * 0x214;
        if ((unsigned char)e[0] != 0xff)
            return *(int*)(e + 0x14) == -1;
    }
    return 1;
}

// FUNCTION: 0x423030 sub_423030
void __cdecl sub_423030(unsigned int i, int v)
{
    if (i <= 0x11) {
        char* e = g_6A5F30 + i * 0x214;
        if ((unsigned char)e[0xa] != v) {
            e[0xa] = (char)v;
            *(int*)(e + 0x84) = 0;
            *(int*)(e + 0x88) = 0;
        }
    }
}

// FUNCTION: 0x423070 sub_423070
void __cdecl sub_423070(unsigned int i, int v, int w)
{
    if (i <= 0x11) {
        char* e = g_6A5F30 + i * 0x214;
        if ((unsigned char)e[0xa] != v) {
            e[0xa] = (char)v;
            *(int*)(e + 0x84) = 0;
            *(int*)(e + 0x88) = w;
        }
    }
}

// FUNCTION: 0x4230B0 sub_4230B0
void sub_4230B0()
{
    int h = g_68D984;
    g_68D894 = -1;
    g_68D8E4 = -1;
    g_68D934 = -1;
    if (h != -1) {
        sub_4C6090(h);
        g_68D984 = -1;
    }
}

// STUB: 0x4230F0 sub_4230F0 (271 bytes)
void sub_4230F0()
{
}

// FUNCTION: 0x423200 sub_423200
void __cdecl sub_423200(unsigned int i, float a, float b, float c)
{
    if (i <= 0x11) {
        char* e = g_6A5F30 + i * 0x214;
        *(float*)(e + 0x30) = a;
        *(float*)(e + 0x34) = b;
        *(float*)(e + 0x38) = c;
    }
}
