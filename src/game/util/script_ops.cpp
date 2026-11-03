#include "unsorted/bitset.h"

extern signed char g_626224[0x20];
extern short g_626E28[][3];
extern unsigned int g_6E4900[];
extern int g_695DA0;
extern unsigned char g_695DA4;
extern unsigned char g_695DAC;
extern int g_695DA8;
extern char g_73C6DD;
extern int g_73CB78;
extern unsigned char g_73CB7C;
extern int g_73CC74;
extern char g_73CC40;
extern char g_73CC51;
extern char g_73CC52;

void __cdecl sub_4DA4F0(int a);
void __cdecl sub_4DA540(int handle, int a, int b, int c, int d);
void __cdecl sub_4DB210(int a, int b);
void __cdecl sub_4DB320(int a);
void __cdecl sub_4DB560(int a);
void __cdecl sub_4DB900();
int __cdecl sub_463340(int a, int b, int c);
int __cdecl sub_441990();
void __cdecl sub_46CDE0();
void __cdecl sub_46CC90();
void __cdecl sub_4419D0(int a);

// FUNCTION: 0x462250 lookupSignedByte
int __cdecl lookupSignedByte(unsigned int index)
{
    if (index <= 0x1F)
        return g_626224[index];
    return -1;
}

// FUNCTION: 0x462D50 setFlag73C6DD
void __cdecl setFlag73C6DD(char value)
{
    g_73C6DD = value;
}

// FUNCTION: 0x462D60 isMode2Or3
bool __cdecl isMode2Or3(int mode)
{
    return mode == 2 || mode == 3;
}

// FUNCTION: 0x462D80 getRecord626E28
short* __cdecl getRecord626E28(unsigned int index)
{
    if (index <= 0x2C)
        return g_626E28[index];
    return 0;
}

// FUNCTION: 0x462DA0 isBitSet6E4900
char __cdecl isBitSet6E4900(unsigned int index)
{
    if (index <= 0x45) {
        if (testBit(g_6E4900, 0x28) == 1)
            return 1;
        return testBit(g_6E4900, index);
    }
    return 0;
}

// FUNCTION: 0x462DE0 isZeroOrOne
bool __cdecl isZeroOrOne(int value)
{
    return value == 0 || value == 1;
}

// FUNCTION: 0x462E30 cmd462E30
bool __cdecl cmd462E30()
{
    sub_4DA4F0(1);
    return true;
}

// FUNCTION: 0x462EE0 cmd462EE0
bool __cdecl cmd462EE0()
{
    sub_4DA4F0(0);
    return true;
}

// FUNCTION: 0x462E40 cmd462E40
bool __cdecl cmd462E40(int reserved, int a, int b, int c)
{
    int handle = g_695DA0;
    if (handle == -1)
        return false;
    sub_4DA540(handle, a, b, g_695DA4, c);
    return true;
}

// FUNCTION: 0x462F90 resetState695DA0
void __cdecl resetState695DA0()
{
    g_695DA0 = -1;
    g_695DA4 = 1;
}

// FUNCTION: 0x463170 cmd463170
bool __cdecl cmd463170(int a)
{
    sub_4DB210(a, 1);
    return true;
}

// FUNCTION: 0x463270 cmd463270
bool __cdecl cmd463270(int a)
{
    sub_4DB210(a, 0);
    return true;
}

// FUNCTION: 0x463300 cmd463300
bool __cdecl cmd463300(int a)
{
    sub_4DB320(a);
    return true;
}

// FUNCTION: 0x4634B0 cmd4634B0
bool __cdecl cmd4634B0(int a, int b, int c)
{
    int result = sub_463340(a, b, c);
    if (result == -1)
        return false;
    sub_4DB560(result);
    return true;
}

// FUNCTION: 0x4634E0 cmd4634E0
bool __cdecl cmd4634E0()
{
    sub_4DB900();
    return true;
}

// FUNCTION: 0x463980 setValue73CB78
void __cdecl setValue73CB78(unsigned char value)
{
    g_73CB78 = value;
}

// FUNCTION: 0x463990 resetState695DAC
void __cdecl resetState695DAC()
{
    g_695DAC = 3;
    g_73CB7C = 0x26;
}

// FUNCTION: 0x463C80 setValue695DA8
void __cdecl setValue695DA8(int value)
{
    g_695DA8 = value;
}

// FUNCTION: 0x46B8A0 getValue73CC74
int __cdecl getValue73CC74()
{
    return g_73CC40 == 1 ? -1 : g_73CC74;
}

// FUNCTION: 0x46BA00 cmd46BA00
void __cdecl cmd46BA00()
{
    if (sub_441990() != 1)
        sub_46CDE0();
}

// FUNCTION: 0x46BA80 setPair73CC51
void __cdecl setPair73CC51(char a, char b)
{
    g_73CC51 = a;
    g_73CC52 = b;
}

// FUNCTION: 0x46BAA0 cmd46BAA0
void __cdecl cmd46BAA0()
{
    sub_46CC90();
    sub_4419D0(0);
}
