extern short g_73EA78;
extern unsigned char g_73EA68;
extern unsigned char g_73EA69;
extern int g_73EA70;
extern int g_73EA74;
int __cdecl sub_4C8390(int);

// STUB: 0x4A5950 sub_4A5950 (106 bytes)
void sub_4A5950()
{
}

// STUB: 0x4A59C0 sub_4A59C0 (226 bytes)
void sub_4A59C0()
{
}

// STUB: 0x4A5AB0 sub_4A5AB0 (108 bytes)
void sub_4A5AB0()
{
}

// FUNCTION: 0x4A5B20 sub_4A5B20
void sub_4A5B20()
{
    if (g_73EA78 != -1) {
        sub_4C8390(g_73EA78);
        g_73EA78 = -1;
    }
    g_73EA68 = 0;
}

// STUB: 0x4A5B50 sub_4A5B50 (46 bytes)
void sub_4A5B50()
{
}

// FUNCTION: 0x4A5B80 sub_4A5B80
void __cdecl sub_4A5B80(int v)
{
    if (g_73EA68 != v) {
        g_73EA68 = (unsigned char)v;
        g_73EA69 = 0;
    }
}

// FUNCTION: 0x4A5BA0 sub_4A5BA0
void __cdecl sub_4A5BA0(int a, int b)
{
    g_73EA70 = a;
    g_73EA74 = b;
}

// STUB: 0x4A5BC0 sub_4A5BC0 (38 bytes)
void sub_4A5BC0()
{
}

// STUB: 0x4A5BF0 sub_4A5BF0 (660 bytes)
void sub_4A5BF0()
{
}
