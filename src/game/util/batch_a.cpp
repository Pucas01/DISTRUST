#include "engine/field.h"

extern short g_73E858;
extern unsigned char g_73E900;
extern unsigned char g_6A4CEB;
extern unsigned char g_6A4CEC;
extern int g_6A4D18;
extern short g_73E640;
extern short g_73E63E;
extern char g_73E62C;
extern int g_7005F4[];

struct Vec12 {
    int x;
    int y;
    int z;
};

struct Rec755 {
    int a;
    int b;
    Vec12 v;
    int pad[3];
};
extern Rec755 g_755AE8[];

#pragma pack(push, 1)
struct Pend8 {
    unsigned char a;
    unsigned char b;
    unsigned char c;
    int d;
    char pad;
};
#pragma pack(pop)
extern Pend8 g_73E905[];

struct Param60 {
    unsigned char raw[60];
};
extern Param60 g_6A8C30[];

// FUNCTION: 0x41B230 sub_41B230
void sub_41B230(int v)
{
    if (g_6A4CEB != v) {
        g_6A4CEB = v;
        g_6A4CEC = 0;
        g_6A4D18 = 0;
    }
}

// FUNCTION: 0x4F27D0 sub_4F27D0
void sub_4F27D0(unsigned int i, int a, int b, const Vec12* v)
{
    Rec755* r = &g_755AE8[i];
    r->a = a;
    r->b = b;
    r->v = *v;
}

// FUNCTION: 0x436130 sub_436130
float sub_436130(int i)
{
    return (float)g_7005F4[i * 6] * 0.01f * 12.0f;
}

// FUNCTION: 0x4ED880 sub_4ED880
void sub_4ED880(float* p, float a, float b, float c, float d)
{
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;
}

// FUNCTION: 0x49DDD0 sub_49DDD0
void sub_49DDD0(int i, int v)
{
    Pend8* p = &g_73E905[i];
    if (p->a != v) {
        p->a = v;
        p->b = 0;
        p->d = 0;
    }
}

// STUB: 0x49F1D0 sub_49F1D0 (41 bytes)
void sub_49F1D0()
{
}

// STUB: 0x49A620 sub_49A620 (49 bytes)
void sub_49A620()
{
}

// STUB: 0x430F00 sub_430F00 (59 bytes)
void sub_430F00()
{
}
