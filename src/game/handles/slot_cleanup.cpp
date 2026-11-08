extern unsigned char g_73CDA4[];
extern short g_73CDB0[];
extern unsigned short g_73CDA1;
int __cdecl sub_4C6090(int id);

extern int g_73CDC8[];
extern int g_73CE7C[];
extern int g_73CE80[];
extern int g_73CF00[];
bool __cdecl touchTexture(int id, int generation);

// STUB: 0x46CCF0 sub_46CCF0 (233 bytes)
void sub_46CCF0()
{
}

// FUNCTION: 0x46CE00 clearSlots73CD
void clearSlots73CD()
{
    int i = 0;
    short* p = g_73CDB0;
    do {
        g_73CDA4[i] = 0;
        if (*p != -1) {
            sub_4C6090(*p);
            *p = -1;
        }
        p++;
        i++;
    } while ((int)p < (int)&g_73CDB0[12]);
    g_73CDA1 = 0;
}

// STUB: 0x46CE50 sub_46CE50 (88 bytes)
void sub_46CE50()
{
}

// STUB: 0x46CEB0 sub_46CEB0 (122 bytes)
void sub_46CEB0()
{
}

// STUB: 0x46CF30 sub_46CF30 (100 bytes)
void sub_46CF30()
{
}

// STUB: 0x46D000 sub_46D000 (79 bytes)
void sub_46D000()
{
}

// FUNCTION: 0x46D050 releaseTextures73CD
void releaseTextures73CD()
{
    int* p = g_73CDC8;
    do {
        touchTexture(*p, 0);
        *p = -1;
        p++;
    } while ((int)p < (int)g_73CE7C);
    p = g_73CE80;
    do {
        touchTexture(*p, 0);
        *p = -1;
        p++;
    } while ((int)p < (int)g_73CF00);
}
