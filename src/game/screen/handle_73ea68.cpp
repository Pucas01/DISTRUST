extern short g_73EA78;
extern unsigned char g_73EA68;
extern unsigned char g_73EA69;
extern int g_73EA70;
extern int g_73EA74;
int __cdecl sub_4C8390(int);

extern unsigned char g_73E9E9;
extern unsigned char g_73E9EA;
extern unsigned char g_73E9EB;
extern unsigned char g_73E9EC;
extern unsigned char g_73E9ED;
extern unsigned char g_73E9EE;
extern unsigned char g_73E9EF;
extern unsigned char g_73E9F0;
extern unsigned char g_73E9F1;
extern unsigned char g_73E9F2;
extern unsigned char g_73E9F3;
extern unsigned char g_73E9F4;

// FUNCTION: 0x4A5950 shiftCursorHistory
void __cdecl shiftCursorHistory()
{
    g_73E9EA = g_73E9E9;
    g_73E9EC = g_73E9EB;
    g_73E9EE = g_73E9ED;
    g_73E9F0 = g_73E9EF;
    unsigned char t = g_73E9F1;
    g_73E9E9 = 0xFF;
    g_73E9EB = 0xFF;
    g_73E9ED = 0xFF;
    g_73E9EF = 0xFF;
    g_73E9F2 = t;
    g_73E9F1 = 0xFF;
    g_73E9F4 = t;
    g_73E9F3 = 0xFF;
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
