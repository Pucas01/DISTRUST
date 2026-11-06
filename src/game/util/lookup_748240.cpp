extern int g_748240[];
extern int g_748248[];

extern float g_748648;
extern float g_74864C;

// FUNCTION: 0x4D7880 getTable748240
int __cdecl getTable748240(int i)
{
    return g_748240[i];
}

// FUNCTION: 0x4D7890 sub_4D7890
float __cdecl sub_4D7890(int i)
{
    return g_748240[i] * 0.01f;
}

// FUNCTION: 0x4D78C0 getTable748248
int __cdecl getTable748248(int i)
{
    return g_748248[i];
}

// FUNCTION: 0x4D78D0 sub_4D78D0
float __cdecl sub_4D78D0(int i)
{
    return g_748248[i] * 0.01f;
}

// STUB: 0x4D7900 sub_4D7900 (153 bytes)
void sub_4D7900()
{
}

// FUNCTION: 0x4D79A0 sub_4D79A0
void __cdecl sub_4D79A0(float a, float b)
{
    g_748648 = a;
    g_74864C = b;
}

// FUNCTION: 0x4D79C0 sub_4D79C0
int __cdecl sub_4D79C0(int i)
{
    int k = 0;
    char* p = (char*)0x748320 + i * 0xc0;
    for (; k < 6; k++, p += 0x20) {
        if (p[0] == 1)
            return k;
    }
    return -1;
}

// FUNCTION: 0x4D79F0 sub_4D79F0
int __cdecl sub_4D79F0(int i, int j)
{
    return *(int*)((char*)0x748338 + (i + 6 * j) * 32);
}

// FUNCTION: 0x4D7A10 sub_4D7A10
float __cdecl sub_4D7A10(int i, int j)
{
    return *(float*)((char*)0x748324 + (i + 6 * j) * 32);
}

// FUNCTION: 0x4D7A30 sub_4D7A30
float __cdecl sub_4D7A30(int i, int j)
{
    return *(float*)((char*)0x748328 + (i + 6 * j) * 32);
}

// STUB: 0x4D7A50 sub_4D7A50 (583 bytes)
void sub_4D7A50()
{
}

// STUB: 0x4D7CA0 sub_4D7CA0 (471 bytes)
void sub_4D7CA0()
{
}
