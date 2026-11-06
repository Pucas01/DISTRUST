extern unsigned short g_73E8C4;
extern float g_73E854;

extern unsigned char g_73E840;
extern short g_73E842;
extern unsigned char g_73E840;
extern short g_73E842;

extern int g_73E968;
extern float g_73E96C;
extern short g_73E9C8;
extern short g_73E9C6;
extern unsigned short g_73E9BC;
extern unsigned short g_73E9BE;
#pragma pack(push, 1)
struct Slot12 {
    char a;
    short w;
    char p;
    int d;
    char c;
    char pad[3];
};
#pragma pack(pop)
extern Slot12 g_73E8E0[];

// FUNCTION: 0x49F170 setPair73E968
void __cdecl setPair73E968(int a, float b)
{
    g_73E968 = a;
    g_73E96C = b;
}

// FUNCTION: 0x49F190 setWord73E8C4
void setWord73E8C4()
{
    g_73E8C4 = 11;
}

// FUNCTION: 0x49F1A0 setWord73E9C6
void __cdecl setWord73E9C6(short a, int b)
{
    g_73E9C8 = a;
    g_73E9C6 = 6;
    if (b <= 0)
        g_73E9C6 = 7;
}

// STUB: 0x49F1D0 sub_49F1D0 (41 bytes)
void sub_49F1D0()
{
}

// FUNCTION: 0x49F200 setSlot73E8E8Byte
void __cdecl setSlot73E8E8Byte(unsigned int i, char v)
{
    if (i <= 1)
        g_73E8E0[i].c = v;
}

// FUNCTION: 0x49F220 setWord73E9BC
void __cdecl setWord73E9BC(int v)
{
    g_73E9BC = 10;
    g_73E9BE = v;
    if ((unsigned short)v > 999)
        g_73E9BE = 999;
}

// STUB: 0x49F250 sub_49F250 (142 bytes)
void sub_49F250()
{
}

// FUNCTION: 0x49F2E0 setState73E8409
void setState73E8409()
{
    g_73E840 = 9;
    g_73E842 = 0;
}

// FUNCTION: 0x49F2F0 setState73E8408
void setState73E8408()
{
    g_73E840 = 8;
    g_73E842 = 0;
}

// FUNCTION: 0x49F300 resetSlot73E8E1
void __cdecl resetSlot73E8E1(unsigned int i)
{
    if (i <= 1) {
        g_73E8E0[i].w = 12;
        g_73E8E0[i].d = 0;
    }
}

// FUNCTION: 0x49F330 setFloat73E854
void setFloat73E854()
{
    g_73E854 = 30.0f;
}
