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

// FUNCTION: 0x49F200 setSlot73E8E8Byte
void __cdecl setSlot73E8E8Byte(unsigned int i, char v)
{
    if (i <= 1)
        g_73E8E0[i].c = v;
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

// FUNCTION: 0x49F330 setFloat73E854
void setFloat73E854()
{
    g_73E854 = 30.0f;
}
