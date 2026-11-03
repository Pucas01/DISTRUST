#include <string.h>

extern unsigned long long g_buttonsA;
extern unsigned long long g_buttonsB;
extern unsigned long long g_buttonsC;
extern unsigned long long g_buttonsD;
extern unsigned long long g_buttonsE;
extern unsigned long long g_buttonsF;
extern unsigned long long g_buttonsG;
extern int g_swapConfirm;
extern char g_inputState[0x1C0];

int __cdecl sub_4C2100();

// FUNCTION: 0x4D6D60 testButtonF
int __cdecl testButtonF(unsigned int bit)
{
    return (((unsigned long long)1 << bit) & g_buttonsF) != 0;
}

// FUNCTION: 0x4D6DA0 testButtonA
int __cdecl testButtonA(unsigned int bit)
{
    return (((unsigned long long)1 << bit) & g_buttonsA) != 0;
}

// FUNCTION: 0x4D6DE0 testButtonD
int __cdecl testButtonD(unsigned int bit)
{
    return (((unsigned long long)1 << bit) & g_buttonsD) != 0;
}

// FUNCTION: 0x4D6E20 testButtonC
int __cdecl testButtonC(unsigned int bit)
{
    return (((unsigned long long)1 << bit) & g_buttonsC) != 0;
}

// FUNCTION: 0x4D6E60 testButtonE
int __cdecl testButtonE(unsigned int bit)
{
    return (((unsigned long long)1 << bit) & g_buttonsE) != 0;
}

// FUNCTION: 0x4D6EA0 testButtonG
int __cdecl testButtonG(unsigned int bit)
{
    return (((unsigned long long)1 << bit) & g_buttonsG) != 0;
}

// FUNCTION: 0x4D6EE0 testButtonB
int __cdecl testButtonB(unsigned int bit)
{
    return (((unsigned long long)1 << bit) & g_buttonsB) != 0;
}

// FUNCTION: 0x4D6F20 anyButtonB
int __cdecl anyButtonB()
{
    return g_buttonsB != 0;
}

// FUNCTION: 0x4D6FE0 cancelFlag
int __cdecl cancelFlag()
{
    return g_swapConfirm == 0 ? 0x10 : 0x20;
}

// FUNCTION: 0x4D7820 confirmFlag
int __cdecl confirmFlag()
{
    return g_swapConfirm == 0 ? 0x20 : 0x10;
}

// FUNCTION: 0x4D7000 resetInput
void __cdecl resetInput()
{
    memset(g_inputState, 0, sizeof(g_inputState));
    g_swapConfirm = sub_4C2100() == 0;
}
