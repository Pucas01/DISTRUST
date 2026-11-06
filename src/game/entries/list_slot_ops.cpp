extern short g_6A4CE8;
extern char g_6A4D28[];
extern int g_6A4CF8;

int __cdecl sub_4C6090(int id);
extern int g_6A5C08;
extern int g_6A5C0C;
struct ListItem {
    int kind;
    char pad[0x24];
};
extern ListItem* g_6A5BC4;
extern short g_6A5BBA;
struct EntryRec {
    char pad0[3];
    char b3;
    char pad4[0x18];
    int d1c;
    char pad20[0x10];
};


// FUNCTION: 0x41AAF0 countListKinds
int __cdecl countListKinds()
{
    int n = 0;
    ListItem* p = g_6A5BC4;
    if (p) {
        for (int i = g_6A5BBA; i > 0; i--, p++) {
            int k = p->kind;
            if (k == 2 || k == 7 || k == 8 || k == 9)
                n++;
        }
    }
    return n;
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

// FUNCTION: 0x41AE40 releaseId6A5C08
void __cdecl releaseId6A5C08()
{
    if (g_6A5C0C == -1)
        return;
    int id = g_6A5C08;
    g_6A5C0C = -1;
    if (id == -1)
        return;
    sub_4C6090(id);
    g_6A5C08 = -1;
}

// STUB: 0x41AE80 sub_41AE80 (175 bytes)
void sub_41AE80()
{
}

// STUB: 0x41AF30 sub_41AF30 (31 bytes)
void sub_41AF30()
{
}

// FUNCTION: 0x41AF50 setEntryByte3
extern char g_6A54A8[];
void __cdecl setEntryByte3(int idx, char v)
{
    EntryRec* e = (EntryRec*)g_6A4D28;
    for (int i = 0; e < (EntryRec*)g_6A54A8; i++, e++) {
        if (e->d1c != -1 && i == idx) {
            e->b3 = v;
            return;
        }
    }
}
