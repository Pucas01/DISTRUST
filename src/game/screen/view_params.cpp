#include <emmintrin.h>

struct Vec2f {
    float x;
    float y;
};

extern char g_7401E0[];
extern char g_7401A0[];
extern char g_7402E0[];
extern char g_7402A0[];
extern char g_740148[];
extern char* g_740184;
extern float g_7400D4;
extern int g_7400D0;
extern Vec2f g_7400D8;
extern float g_7400E0;
extern Vec2f g_7400E4;
extern float g_7400EC;

void __cdecl sub_4BE160(void* obj, int value);

extern float g_69959C;
extern float g_6995A0;
extern char g_74010C[];

// STUB: 0x4BDB30 sub_4BDB30 (596 bytes)
void sub_4BDB30()
{
}

// STUB: 0x4BDD90 sub_4BDD90 (485 bytes)
void sub_4BDD90()
{
}

// STUB: 0x4BDF80 sub_4BDF80 (261 bytes)
void sub_4BDF80()
{
}

// STUB: 0x4BE090 sub_4BE090 (195 bytes)
void sub_4BE090()
{
}

// STUB: 0x4BE160 sub_4BE160 (1658 bytes)
void sub_4BE160()
{
}

// STUB: 0x4BE7E0 sub_4BE7E0 (209 bytes)
void sub_4BE7E0()
{
}

// FUNCTION: 0x4BE8C0 bindBuf740148
void __cdecl bindBuf740148(int value)
{
    g_740184 = g_740148;
    sub_4BE160(g_740148, value);
}

// FUNCTION: 0x4BE8E0 sub_4BE8E0
void __cdecl sub_4BE8E0(int value)
{
    g_740184 = (char*)&g_7400D0;
    sub_4BE160(&g_7400D0, value);
}

// FUNCTION: 0x4BE900 setAngleDegrees
void __cdecl setAngleDegrees(float degrees)
{
    g_7400D4 = (float)(degrees * 3.141592653589793 * 0.005555555555555556);
}

// FUNCTION: 0x4BE930 getBuf7401E0
char* getBuf7401E0()
{
    return g_7401E0;
}

// FUNCTION: 0x4BE940 getBuf7401A0
char* getBuf7401A0()
{
    return g_7401A0;
}

// FUNCTION: 0x4BE950 getBuf7402E0
char* getBuf7402E0()
{
    return g_7402E0;
}

// FUNCTION: 0x4BE960 getBuf7402A0
char* getBuf7402A0()
{
    return g_7402A0;
}

// STUB: 0x4BE970 sub_4BE970 (388 bytes)
void sub_4BE970()
{
}

// STUB: 0x4BEB00 sub_4BEB00 (625 bytes)
void sub_4BEB00()
{
}

// STUB: 0x4BED80 sub_4BED80 (58 bytes)
void sub_4BED80()
{
}

// FUNCTION: 0x4BEDC0 setViewParams
void __cdecl setViewParams(long long a, int b, long long c, int d)
{
    _mm_storel_epi64((__m128i*)&g_7400D8, _mm_loadl_epi64((const __m128i*)&a));
    *(int*)&g_7400E0 = b;
    g_7400D0 = 0;
    _mm_storel_epi64((__m128i*)&g_7400E4, _mm_loadl_epi64((const __m128i*)&c));
    *(int*)&g_7400EC = d;
}

// STUB: 0x4BEE00 sub_4BEE00 (118 bytes)
void sub_4BEE00()
{
}

// FUNCTION: 0x4BEE80 sub_4BEE80
void __cdecl sub_4BEE80(float a, float b)
{
    g_69959C = a;
    g_6995A0 = b;
}

// FUNCTION: 0x4BEEA0 sub_4BEEA0
void __cdecl sub_4BEEA0(int value)
{
    g_740184 = g_74010C;
    sub_4BE160(g_74010C, value);
}

// STUB: 0x4BEEC0 sub_4BEEC0 (361 bytes)
void sub_4BEEC0()
{
}

// STUB: 0x4BF030 sub_4BF030 (192 bytes)
void sub_4BF030()
{
}

// STUB: 0x4BF0F0 sub_4BF0F0 (320 bytes)
void sub_4BF0F0()
{
}

// STUB: 0x4BF230 sub_4BF230 (278 bytes)
void sub_4BF230()
{
}

// STUB: 0x4BF350 sub_4BF350 (462 bytes)
void sub_4BF350()
{
}

// STUB: 0x4BF520 sub_4BF520 (214 bytes)
void sub_4BF520()
{
}

// STUB: 0x4BF600 sub_4BF600 (217 bytes)
void sub_4BF600()
{
}

// STUB: 0x4BF6E0 sub_4BF6E0 (214 bytes)
void sub_4BF6E0()
{
}

// STUB: 0x4BF7C0 sub_4BF7C0 (198 bytes)
void sub_4BF7C0()
{
}

// STUB: 0x4BF890 sub_4BF890 (360 bytes)
void sub_4BF890()
{
}

// STUB: 0x4BFA00 sub_4BFA00 (305 bytes)
void sub_4BFA00()
{
}

// STUB: 0x4BFB40 sub_4BFB40 (146 bytes)
void sub_4BFB40()
{
}
