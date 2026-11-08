// FUNCTION: 0x430F40 sub_430F40
void __cdecl sub_430F40(unsigned int a, unsigned int b)
{
    if (a <= 3 && b <= 2)
        *((char*)0x6a8c31 + a * 60) = (char)b;
}

// FUNCTION: 0x430F70 sub_430F70
void __cdecl sub_430F70(unsigned int i, float a, float b, float c)
{
    if (i <= 3) {
        int k = i * 15;
        *(float*)((char*)0x6a8c44 + k * 4) = a;
        *(float*)((char*)0x6a8c48 + k * 4) = b;
        *(float*)((char*)0x6a8c4c + k * 4) = c;
    }
}

// FUNCTION: 0x430FB0 sub_430FB0
void __cdecl sub_430FB0(unsigned int a, unsigned int b)
{
    if (a <= 3 && b <= 3)
        *((char*)0x6a8c30 + a * 60) = (char)b;
}

// STUB: 0x430FF0 sub_430FF0 (88 bytes)
void sub_430FF0()
{
}

// STUB: 0x431050 sub_431050 (53 bytes)
void sub_431050()
{
}

// STUB: 0x4310F0 sub_4310F0 (20 bytes)
void sub_4310F0()
{
}

// STUB: 0x431110 sub_431110 (229 bytes)
void sub_431110()
{
}

// FUNCTION: 0x431200 sub_431200
void* __cdecl sub_431200(unsigned int i)
{
    if (i <= 0x84)
        return (char*)0x624d30 + i * 8;
    return 0;
}

// FUNCTION: 0x431220 sub_431220
void* __cdecl sub_431220(unsigned int i)
{
    if (i <= 8)
        return (char*)0x625158 + i * 4;
    return 0;
}

// STUB: 0x431240 sub_431240 (1280 bytes)
void sub_431240()
{
}

// STUB: 0x431770 sub_431770 (295 bytes)
void sub_431770()
{
}

// STUB: 0x4318A0 sub_4318A0 (441 bytes)
void sub_4318A0()
{
}

// STUB: 0x431A60 sub_431A60 (191 bytes)
void sub_431A60()
{
}

// STUB: 0x431B20 sub_431B20 (241 bytes)
void sub_431B20()
{
}

// STUB: 0x431C20 sub_431C20 (2952 bytes)
void sub_431C20()
{
}

// STUB: 0x432840 sub_432840 (387 bytes)
void sub_432840()
{
}
