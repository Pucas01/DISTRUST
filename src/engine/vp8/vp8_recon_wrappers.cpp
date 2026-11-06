void __cdecl sub_5BB708(int a, int b, int c);
void __cdecl sub_5BB7D8(char* a, char* b);
void __cdecl sub_5C3080(int a, int b, int c, int d, int e);
void __cdecl sub_410710(char* a, char* b, int c);

// FUNCTION: 0x4104B0 sub_4104B0
void __cdecl sub_4104B0(char* p, int c)
{
    sub_5BB708(*(int*)(p + 0x748), *(int*)(p + 0x14c4), c);
}

// FUNCTION: 0x4104D0 sub_4104D0
void __cdecl sub_4104D0(char* p)
{
    sub_5BB7D8(p + 0x520, p + 0x1300);
}

// FUNCTION: 0x4104F0 sub_4104F0
void __cdecl sub_4104F0(char* a, char* b, int c)
{
    sub_5C3080(**(int**)(a + 0x24) + *(int*)(a + 0x28), *(int*)(a + 0x2c), *(int*)a, *(int*)(b + 8), c);
}

// STUB: 0x410520 sub_410520 (179 bytes)
void sub_410520()
{
}

// STUB: 0x4105E0 sub_4105E0 (304 bytes)
void sub_4105E0()
{
}

// STUB: 0x410710 sub_410710 (999 bytes)
void sub_410710()
{
}

// FUNCTION: 0x410B00 sub_410B00
void __cdecl sub_410B00(char* a, char* b, int c)
{
    sub_410710(a, b, c);
    sub_410710(a + 8, b + 0x20, c);
}

// STUB: 0x410B30 sub_410B30 (837 bytes)
void sub_410B30()
{
}
