extern int g_73CBC4;
extern unsigned char g_73CBC8;
extern unsigned char g_73CBCA;
extern unsigned char g_73CBC9;
extern short g_73CBCC;
extern short g_73CBD0;
extern unsigned char g_73CBCB;

extern float g_7403E0;

// STUB: 0x464800 sub_464800 (310 bytes)
void sub_464800()
{
}

// STUB: 0x464940 sub_464940 (353 bytes)
void sub_464940()
{
}

// STUB: 0x464AB0 sub_464AB0 (109 bytes)
void sub_464AB0()
{
}

// STUB: 0x464B20 sub_464B20 (223 bytes)
void sub_464B20()
{
}

// STUB: 0x464C00 sub_464C00 (46 bytes)
void sub_464C00()
{
}

// STUB: 0x464C30 sub_464C30 (304 bytes)
void sub_464C30()
{
}

// STUB: 0x464D60 sub_464D60 (256 bytes)
void sub_464D60()
{
}

// STUB: 0x464E60 sub_464E60 (431 bytes)
void sub_464E60()
{
}

// FUNCTION: 0x465010 sub_465010
void sub_465010()
{
    g_73CBC4 = -1;
    g_73CBC8 = 0xd;
    g_73CBCA = 0xd;
    g_73CBC9 = 0;
    g_73CBCC = 0;
    g_73CBD0 = 0;
    g_73CBCB = 0;
}

// STUB: 0x465050 sub_465050 (157 bytes)
void sub_465050()
{
}

// STUB: 0x465130 sub_465130 (574 bytes)
void sub_465130()
{
}

// STUB: 0x465370 sub_465370 (95 bytes)
void sub_465370()
{
}

// STUB: 0x4653D0 sub_4653D0 (34 bytes)
void sub_4653D0()
{
}

// STUB: 0x465400 sub_465400 (67 bytes)
void sub_465400()
{
}

// STUB: 0x465450 sub_465450 (43 bytes)
void sub_465450()
{
}

// STUB: 0x465480 sub_465480 (62 bytes)
void sub_465480()
{
}

// FUNCTION: 0x4654C0 sub_4654C0
void sub_4654C0()
{
    signed char c = g_73CBC9;
    if (c >= 8) {
        g_73CBD0--;
        g_73CBC9 = 0;
        g_73CBC8 = 3;
        return;
    }
    int t = (int)((float)c + g_7403E0);
    unsigned char r = (unsigned char)t;
    if ((signed char)r > 8)
        r = 8;
    g_73CBC9 = r;
}

// STUB: 0x465510 sub_465510 (686 bytes)
void sub_465510()
{
}

// STUB: 0x4657C0 sub_4657C0 (46 bytes)
void sub_4657C0()
{
}

// FUNCTION: 0x4657F0 sub_4657F0
void sub_4657F0()
{
    signed char c = g_73CBC9;
    if (c >= 8) {
        g_73CBD0++;
        g_73CBC9 = 0;
        g_73CBC8 = 3;
        return;
    }
    int t = (int)((float)c + g_7403E0);
    unsigned char r = (unsigned char)t;
    if ((signed char)r > 8)
        r = 8;
    g_73CBC9 = r;
}

// STUB: 0x465840 sub_465840 (419 bytes)
void sub_465840()
{
}

// STUB: 0x4659F0 sub_4659F0 (164 bytes)
void sub_4659F0()
{
}

// STUB: 0x465AA0 sub_465AA0 (1165 bytes)
void sub_465AA0()
{
}
