extern char* g_entryTable;

// STUB: 0x4C66C0 sub_4C66C0 (65 bytes)
void sub_4C66C0()
{
}

// STUB: 0x4C6710 sub_4C6710 (121 bytes)
void sub_4C6710()
{
}

// STUB: 0x4C6790 sub_4C6790 (108 bytes)
void sub_4C6790()
{
}

// STUB: 0x4C6800 sub_4C6800 (89 bytes)
void sub_4C6800()
{
}

// STUB: 0x4C6860 sub_4C6860 (880 bytes)
void sub_4C6860()
{
}

// STUB: 0x4C6BD0 sub_4C6BD0 (128 bytes)
void sub_4C6BD0()
{
}

// STUB: 0x4C6C50 sub_4C6C50 (307 bytes)
void sub_4C6C50()
{
}

// STUB: 0x4C6D90 sub_4C6D90 (400 bytes)
void sub_4C6D90()
{
}

// STUB: 0x4C6FD0 sub_4C6FD0 (2310 bytes)
void sub_4C6FD0()
{
}

// STUB: 0x4C78E0 sub_4C78E0 (87 bytes)
void sub_4C78E0()
{
}

// STUB: 0x4C7940 sub_4C7940 (900 bytes)
void sub_4C7940()
{
}

// STUB: 0x4C7CD0 sub_4C7CD0 (110 bytes)
void sub_4C7CD0()
{
}

// STUB: 0x4C7D40 sub_4C7D40 (160 bytes)
void sub_4C7D40()
{
}

// STUB: 0x4C7DE0 sub_4C7DE0 (323 bytes)
void sub_4C7DE0()
{
}

// STUB: 0x4C7F30 sub_4C7F30 (63 bytes)
void sub_4C7F30()
{
}

// STUB: 0x4C7F70 sub_4C7F70 (296 bytes)
void sub_4C7F70()
{
}

// STUB: 0x4C80A0 sub_4C80A0 (364 bytes)
void sub_4C80A0()
{
}

// FUNCTION: 0x4C8210 sub_4C8210
void __cdecl sub_4C8210(unsigned int i, char v)
{
    if (i <= 0x6d)
        g_entryTable[(i << 8) + 0x13] = v;
}

// STUB: 0x4C8230 sub_4C8230 (301 bytes)
void sub_4C8230()
{
}

// FUNCTION: 0x4C8360 sub_4C8360
void __cdecl sub_4C8360(unsigned int i, float a, float b)
{
    if (i <= 0x6d) {
        char* e = g_entryTable + (i << 8);
        if (e[0]) {
            *(float*)(e + 0x58) = a;
            *(float*)(e + 0x5c) = b;
        }
    }
}

// STUB: 0x4C8390 sub_4C8390 (468 bytes)
void sub_4C8390()
{
}

// STUB: 0x4C8570 sub_4C8570 (62 bytes)
void sub_4C8570()
{
}

// FUNCTION: 0x4C85B0 sub_4C85B0
int __cdecl sub_4C85B0(unsigned int i)
{
    if (i <= 0x6d) {
        char* e = g_entryTable + (i << 8);
        if (e[0])
            return *(short*)(e + 0x20);
    }
    return -1;
}
