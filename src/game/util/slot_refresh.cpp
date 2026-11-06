extern short g_73E524[];
extern const char* g_698D68;
void __cdecl setEntryFlag(unsigned int index, int value);
void __cdecl resetEntry(unsigned int index, const char* name);

extern unsigned char g_73E509[];
extern short g_73E510[];
extern unsigned char g_73E507;
int __cdecl sub_4C6090(int id);
extern short g_73E524[];
extern unsigned char g_6879EC;
void __cdecl setEntryKind(unsigned int index, int value);

bool __cdecl isEntryDone(int id);

// FUNCTION: 0x497780 clearSlots73E5
void clearSlots73E5()
{
    int i = 0;
    short* p = g_73E510;
    do {
        g_73E509[i] = 0;
        if (*p != -1) {
            sub_4C6090(*p);
            *p = -1;
        }
        p++;
        i++;
    } while ((int)p < (int)&g_73E510[6]);
    g_73E507 = 0;
}

// STUB: 0x4977D0 sub_4977D0 (366 bytes)
void sub_4977D0()
{
}

// STUB: 0x497940 sub_497940 (483 bytes)
void sub_497940()
{
}

// STUB: 0x497B30 sub_497B30 (66 bytes)
void sub_497B30()
{
}

// STUB: 0x497B80 sub_497B80 (152 bytes)
void sub_497B80()
{
}

// STUB: 0x497C20 sub_497C20 (167 bytes)
void sub_497C20()
{
}

// FUNCTION: 0x497CD0 refreshSlotKinds
void refreshSlotKinds()
{
    for (short* p = g_73E524; (int)p < (int)&g_73E524[10]; p++) {
        if (*p != -1) {
            if (!g_6879EC) {
                setEntryKind(*p, 1);
                setEntryFlag(*p, 0);
            } else {
                setEntryKind(*p, 0);
                setEntryFlag(*p, 1);
            }
        }
    }
}

// STUB: 0x497D20 sub_497D20 (437 bytes)
void sub_497D20()
{
}

// FUNCTION: 0x497EE0 resetSlotEntry
void __cdecl resetSlotEntry(int i)
{
    if (g_73E524[i] != -1) {
        setEntryFlag(g_73E524[i], 0);
        resetEntry(g_73E524[i], g_698D68);
    }
}

// STUB: 0x497F20 sub_497F20 (92 bytes)
void sub_497F20()
{
}

// STUB: 0x497F80 sub_497F80 (167 bytes)
void sub_497F80()
{
}

// STUB: 0x498030 sub_498030 (123 bytes)
void sub_498030()
{
}

// FUNCTION: 0x4980B0 sub_4980B0
int __cdecl sub_4980B0(unsigned int i)
{
    short v = g_73E524[i];
    if (v == -1)
        return 1;
    return isEntryDone(v);
}

// STUB: 0x4980E0 sub_4980E0 (224 bytes)
void sub_4980E0()
{
}

// STUB: 0x4981C0 sub_4981C0 (192 bytes)
void sub_4981C0()
{
}

// STUB: 0x498280 sub_498280 (571 bytes)
void sub_498280()
{
}
