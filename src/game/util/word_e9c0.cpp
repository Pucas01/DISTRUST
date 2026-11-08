extern unsigned short g_73E9C0;

extern unsigned char g_73E8C6;
extern unsigned char g_73E8C7;
extern unsigned char g_73E840;
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

// STUB: 0x49F390 sub_49F390 (235 bytes)
void sub_49F390()
{
}

// STUB: 0x49F4C0 sub_49F4C0 (382 bytes)
void sub_49F4C0()
{
}

// FUNCTION: 0x49F680 isState73E840Idle
int __cdecl isState73E840Idle()
{
    unsigned char c = g_73E840;
    if (c == 0 || c == 2)
        return 1;
    return 0;
}
