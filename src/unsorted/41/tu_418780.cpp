#include <string.h>
struct ListItem {
    int kind;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
};
struct Rec14 {
    unsigned short w[7];
};
extern Rec14* g_6A5BC0;
void __cdecl sub_4D64A0(void* p);
void* __cdecl sub_4D64C0(int n);
int __cdecl sub_4C6690(int src);
void* __cdecl sub_4C6640(int src, int i);
struct Target {
    char pad0[0x130];
    int d130;
};
extern ListItem* g_6A5BC4;
extern short g_6A5BBA;
extern char** g_68C6B8[];
float __cdecl sub_4D3E00(int id, int flag);

struct Pair { unsigned char a, b; };
extern Pair g_6A4CF4;
struct EntryRec {
    char pad0[2];
    char b2;
    char pad3[2];
    char b5;
    char pad6;
    unsigned char b7;
    unsigned char b8;
    char pad9[0x13];
    int d1c;
    int d20;
    float f24;
    float f28;
    float f2c;
};
extern EntryRec g_6A4D28[40];
#define g_entries g_6A4D28

// FUNCTION: 0x418780 sub_418780
char __cdecl sub_418780(int a, int b)
{
    const char* s = g_68C6B8[a][b];
    return _strnicmp(s + strlen(s) - 4, ".tga", 4) == 0;
}

// FUNCTION: 0x4187D0 sub_4187D0
void __cdecl sub_4187D0(int id, Target* t)
{
    ListItem* p = g_6A5BC4;
    if (p) {
        for (int i = 0; i < g_6A5BBA; i++, p++) {
            if (p->kind == 10 && p->f4 == id) {
                t->d130 = p->fc;
                return;
            }
        }
    }
}

// STUB: 0x418820 sub_418820 (144 bytes)
void sub_418820()
{
}

// STUB: 0x4188B0 sub_4188B0 (439 bytes)
void sub_4188B0()
{
}

// STUB: 0x418A70 sub_418A70 (147 bytes)
void sub_418A70()
{
}

// STUB: 0x418B10 sub_418B10 (214 bytes)
void sub_418B10()
{
}

// FUNCTION: 0x418BF0 sub_418BF0
void sub_418BF0()
{
    g_6A4CF4.a = 0xff;
    g_6A4CF4.b = 0xff;
    for (int i = 0; i < 40; i++) {
        EntryRec* e = &g_entries[i];
        if (e->d1c != -1 && (unsigned)i <= 0x27 && e->b5 != 2) {
            e->b5 = 2;
            e->d20 = 0;
        }
    }
}

// STUB: 0x418C30 sub_418C30 (234 bytes)
void sub_418C30()
{
}

// STUB: 0x418D20 sub_418D20 (917 bytes)
void sub_418D20()
{
}

// STUB: 0x4190C0 sub_4190C0 (909 bytes)
void sub_4190C0()
{
}

// STUB: 0x419450 sub_419450 (127 bytes)
void sub_419450()
{
}

// FUNCTION: 0x4194D0 sub_4194D0
int __cdecl sub_4194D0()
{
    int best = 0;
    for (int i = 0; i < 40; i++) {
        int id = g_entries[i].d1c;
        if (id != -1) {
            int v = (int)sub_4D3E00(id, 1);
            if (best < v)
                best = v;
        }
    }
    return best;
}

// STUB: 0x419520 sub_419520 (536 bytes)
void sub_419520()
{
}

// STUB: 0x419740 sub_419740 (484 bytes)
void sub_419740()
{
}

// STUB: 0x419930 sub_419930 (699 bytes)
void sub_419930()
{
}

// STUB: 0x419BF0 sub_419BF0 (207 bytes)
void sub_419BF0()
{
}

// FUNCTION: 0x419CC0 sub_419CC0
void __cdecl sub_419CC0(EntryRec* e)
{
    int n = e->d20;
    e->b2 = 1;
    e->f28 = 1.0f;
    e->f24 = 1.0f;
    if (n == 0) {
        e->b7 = 1;
        e->b8 = 1;
        e->f2c = sub_4D3E00(e->d1c, 1);
    } else if ((float)n >= e->f2c * 2.0f) {
        e->b7 = 1;
        e->b8 = 0;
        e->b5 = 2;
    }
    e->d20 = (int)((float)e->d20 + 1.0f);
}

// STUB: 0x419D40 sub_419D40 (542 bytes)
void sub_419D40()
{
}

// STUB: 0x419F70 sub_419F70 (365 bytes)
void sub_419F70()
{
}

// STUB: 0x41A0E0 sub_41A0E0 (382 bytes)
void sub_41A0E0()
{
}

// STUB: 0x41A260 sub_41A260 (1750 bytes)
void sub_41A260()
{
}
