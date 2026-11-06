void __cdecl sub_5C49E0(char* a, char* b, int c);
void __cdecl sub_5BB687(int a, int b, int c);
void __cdecl sub_5BB78B(char* a, char* b);
void __cdecl sub_5BBC30(int a, int b, int c, int d, int e);

// FUNCTION: 0x4138E0 sub_4138E0
void __cdecl sub_4138E0(char* a, char* b, int c)
{
    sub_5C49E0(a, b, c);
    sub_5C49E0(a + 8, b + 0x20, c);
}

// FUNCTION: 0x413910 sub_413910
void __cdecl sub_413910(char* p, int c)
{
    sub_5BB687(*(int*)(p + 0x748), *(int*)(p + 0x14c4), c);
}

// FUNCTION: 0x413930 sub_413930
void __cdecl sub_413930(char* p)
{
    sub_5BB78B(p + 0x520, p + 0x1300);
}

// FUNCTION: 0x413950 sub_413950
void __cdecl sub_413950(char* a, char* b, int c)
{
    sub_5BBC30(**(int**)(a + 0x24) + *(int*)(a + 0x28), *(int*)(a + 0x2c), *(int*)a, *(int*)(b + 8), c);
}

// STUB: 0x413980 sub_413980 (148 bytes)
void sub_413980()
{
}

// STUB: 0x413A20 sub_413A20 (89 bytes)
void sub_413A20()
{
}

// STUB: 0x413A80 sub_413A80 (147 bytes)
void sub_413A80()
{
}

// STUB: 0x413B20 sub_413B20 (124 bytes)
void sub_413B20()
{
}
