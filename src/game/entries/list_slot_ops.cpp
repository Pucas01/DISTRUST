extern short g_6A4CE8;
extern char g_6A4D28[];
extern int g_6A4CF8;

// STUB: 0x41AAF0 sub_41AAF0 (55 bytes)
void sub_41AAF0()
{
}

// STUB: 0x41AB30 sub_41AB30 (215 bytes)
void sub_41AB30()
{
}

// STUB: 0x41AC10 sub_41AC10 (477 bytes)
void sub_41AC10()
{
}

// FUNCTION: 0x41ADF0 sub_41ADF0
int sub_41ADF0()
{
    if (g_6A4CE8 == -1)
        return 1;
    return g_6A4CF8 == -1;
}

// FUNCTION: 0x41AE10 sub_41AE10
void __cdecl sub_41AE10(unsigned int i, int v)
{
    if (i <= 0x27) {
        char* e = g_6A4D28 + i * 0x30;
        if ((unsigned char)e[5] != v) {
            e[5] = (char)v;
            *(int*)(e + 0x20) = 0;
        }
    }
}

// STUB: 0x41AE40 sub_41AE40 (49 bytes)
void sub_41AE40()
{
}

// STUB: 0x41AE80 sub_41AE80 (175 bytes)
void sub_41AE80()
{
}

// STUB: 0x41AF30 sub_41AF30 (31 bytes)
void sub_41AF30()
{
}

// STUB: 0x41AF50 sub_41AF50 (47 bytes)
void sub_41AF50()
{
}
