#include "engine/field.h"

#include <emmintrin.h>
extern int g_6A9C58;
extern int g_6A9C5C;
extern unsigned char g_6A9C60;
extern int g_6A9C6C;
extern char g_6A9C64[];

extern int g_screenTimer;

// FUNCTION: 0x43BC30 sub_43BC30
int sub_43BC30()
{
    return g_screenTimer / 30;
}

// STUB: 0x43BC50 sub_43BC50 (25 bytes)
void sub_43BC50()
{
}

// STUB: 0x43BD00 sub_43BD00 (6897 bytes)
void sub_43BD00()
{
}

// STUB: 0x43D800 sub_43D800 (2263 bytes)
void sub_43D800()
{
}

// FUNCTION: 0x43E0E0 sub_43E0E0
void sub_43E0E0()
{
    g_6A9C58 = -1;
    g_6A9C5C = 0;
    g_6A9C60 = 7;
    _mm_storel_epi64((__m128i*)g_6A9C64, _mm_setzero_si128());
    g_6A9C6C = 0;
}

// STUB: 0x43E120 sub_43E120 (276 bytes)
void sub_43E120()
{
}

// STUB: 0x43E360 sub_43E360 (82 bytes)
void sub_43E360()
{
}

// STUB: 0x43E440 sub_43E440 (56 bytes)
void sub_43E440()
{
}
