extern unsigned char g_73DA98[];

extern int g_73D9D0;

extern unsigned char g_73DA4E;

extern short g_73DA8C;
void sub_4738D0();

extern unsigned short g_7016B6;
extern signed char g_6E4890[];

// STUB: 0x476EB0 sub_476EB0 (168 bytes)
void sub_476EB0()
{
}

// STUB: 0x477090 sub_477090 (227 bytes)
void sub_477090()
{
}

// STUB: 0x477180 sub_477180 (164 bytes)
void sub_477180()
{
}

// STUB: 0x477230 sub_477230 (240 bytes)
void sub_477230()
{
}

// FUNCTION: 0x477320 sub_477320
int sub_477320()
{
    if (g_73D9D0 >= 10) {
        g_73DA4E = 9;
        return 3;
    }
    g_73D9D0++;
    return 3;
}

// STUB: 0x477350 sub_477350 (290 bytes)
void sub_477350()
{
}

// STUB: 0x477480 sub_477480 (576 bytes)
void sub_477480()
{
}

// FUNCTION: 0x4776F0 sub_4776F0
int __cdecl sub_4776F0(int i)
{
    if (i >= 100)
        return (g_7016B6 & (1 << ((i - 3) & 31))) ? 1 : 0;
    return g_6E4890[i];
}

// STUB: 0x477730 sub_477730 (103 bytes)
void sub_477730()
{
}

// FUNCTION: 0x4777A0 sub_4777A0
bool __cdecl sub_4777A0(unsigned int i)
{
    if (i > 0x71 || (int)i >= 0x74)
        return false;
    return g_73DA98[i] == 3;
}

// FUNCTION: 0x4777D0 setTable73DA98
void __cdecl setTable73DA98(int i)
{
    g_73DA98[i] = 3;
}

// STUB: 0x4777E0 sub_4777E0 (270 bytes)
void sub_4777E0()
{
}

// FUNCTION: 0x4778F0 sub_4778F0
bool __cdecl sub_4778F0(unsigned int i)
{
    if (i > 0x71 || (int)i >= 0x74)
        return false;
    if (g_73DA98[i] != 0)
        return false;
    short s = (short)i;
    g_73DA8C = s;
    g_73DA98[s] = 1;
    return true;
}

// STUB: 0x477920 sub_477920 (226 bytes)
void sub_477920()
{
}

// STUB: 0x477A10 sub_477A10 (136 bytes)
void sub_477A10()
{
}

// STUB: 0x477AA0 sub_477AA0 (885 bytes)
void sub_477AA0()
{
}

// FUNCTION: 0x477E20 sub_477E20
int sub_477E20()
{
    if (g_73D9D0 >= 10) {
        g_73DA4E = 1;
        g_73D9D0 = 24;
        return 3;
    }
    g_73D9D0++;
    return 3;
}

// FUNCTION: 0x477E50 sub_477E50
int sub_477E50()
{
    if (g_73D9D0 <= 0) {
        g_73DA4E = 7;
        return 16;
    }
    g_73D9D0--;
    return 3;
}

// FUNCTION: 0x477E80 sub_477E80
int sub_477E80()
{
    if (g_73D9D0 <= 0) {
        g_73DA4E = 2;
        g_73D9D0 = 10;
        sub_4738D0();
        return 3;
    }
    g_73D9D0--;
    return 3;
}

// STUB: 0x477EC0 sub_477EC0 (1153 bytes)
void sub_477EC0()
{
}

// STUB: 0x478350 sub_478350 (1245 bytes)
void sub_478350()
{
}

// STUB: 0x478830 sub_478830 (1039 bytes)
void sub_478830()
{
}

// STUB: 0x478C40 sub_478C40 (717 bytes)
void sub_478C40()
{
}

// STUB: 0x478F10 sub_478F10 (569 bytes)
void sub_478F10()
{
}
