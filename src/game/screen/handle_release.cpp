#include "engine/field.h"

extern short g_73EA86;

extern unsigned char g_73EA80;
extern short g_73EA82;
extern short g_73EA84;
int __cdecl sub_4C6090(int id);
int __cdecl sub_4C8390(int id);

extern char g_73EA81;
extern short g_73EA86;

extern int g_73EA98;
extern int g_73EA9C;
extern unsigned char g_73EA90;
extern int g_73EA92;

// STUB: 0x4A5EA0 sub_4A5EA0 (648 bytes)
void sub_4A5EA0()
{
}

// FUNCTION: 0x4A6130 releaseHandles73EA
void releaseHandles73EA()
{
    g_73EA80 = 0xFF;
    if (g_73EA82 != -1) {
        sub_4C6090(g_73EA82);
        g_73EA82 = -1;
    }
    if (g_73EA84 != -1) {
        sub_4C8390(g_73EA84);
        g_73EA84 = -1;
    }
}

// STUB: 0x4A6180 sub_4A6180 (44 bytes)
void sub_4A6180()
{
}

// FUNCTION: 0x4A61B0 setWord73EA86
int setWord73EA86()
{
    return g_73EA86 = 0x65;
}

// FUNCTION: 0x4A61C0 sub_4A61C0
int sub_4A61C0()
{
    if (g_73EA80 == 0xFF || g_73EA86 == 100)
        return 1;
    return g_73EA81;
}

// STUB: 0x4A61E0 sub_4A61E0 (94 bytes)
void sub_4A61E0()
{
}

// STUB: 0x4A6240 sub_4A6240 (51 bytes)
void sub_4A6240()
{
}

#include <string.h>

// FUNCTION: 0x4A6280 sub_4A6280
void sub_4A6280()
{
    memset(&g_73EA90, 0, 24);
}

// FUNCTION: 0x4A62A0 beginPair73EA90
void __cdecl beginPair73EA90(int a, int b)
{
    g_73EA98 = a;
    g_73EA9C = b;
    g_73EA90 = 1;
    *(short*)((char*)&g_73EA90 + 2) = 0;
    *(short*)((char*)&g_73EA90 + 4) = 0;
}
