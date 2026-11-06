struct S_7403F8 {
    int a;
    unsigned char b;
    unsigned char c;
    unsigned char d;
    int e;
};
#pragma pack(push, 1)
struct G_7403F8 {
    int a;
    unsigned char b;
    unsigned char c;
    unsigned char d;
    char p;
    int e;
};
#pragma pack(pop)
extern G_7403F8 g_7403F8;

// STUB: 0x4C2130 sub_4C2130 (222 bytes)
void sub_4C2130()
{
}

// STUB: 0x4C2210 sub_4C2210 (3074 bytes)
void sub_4C2210()
{
}

// STUB: 0x4C2E20 sub_4C2E20 (989 bytes)
void sub_4C2E20()
{
}

// STUB: 0x4C3200 sub_4C3200 (528 bytes)
void sub_4C3200()
{
}

// STUB: 0x4C3410 sub_4C3410 (45 bytes)
void sub_4C3410()
{
}

// STUB: 0x4C3440 sub_4C3440 (208 bytes)
void sub_4C3440()
{
}

// STUB: 0x4C3510 sub_4C3510 (347 bytes)
void sub_4C3510()
{
}

// STUB: 0x4C3670 sub_4C3670 (440 bytes)
void sub_4C3670()
{
}

// STUB: 0x4C3830 sub_4C3830 (270 bytes)
void sub_4C3830()
{
}

// FUNCTION: 0x4C3940 sub_4C3940
void __cdecl sub_4C3940(char* o)
{
    if (o) {
        *(int*)o = g_7403F8.a;
        o[4] = g_7403F8.b;
        o[5] = g_7403F8.c;
        o[6] = g_7403F8.d;
        *(int*)(o + 8) = g_7403F8.e;
    }
}

// FUNCTION: 0x4C3980 sub_4C3980
void __cdecl sub_4C3980(char* o)
{
    if (o) {
        g_7403F8.a = *(int*)o;
        g_7403F8.b = o[4];
        g_7403F8.c = o[5];
        g_7403F8.d = o[6];
        g_7403F8.e = *(int*)(o + 8);
    }
}

// STUB: 0x4C39C0 sub_4C39C0 (218 bytes)
void sub_4C39C0()
{
}

// STUB: 0x4C3AA0 sub_4C3AA0 (477 bytes)
void sub_4C3AA0()
{
}
