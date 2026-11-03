struct MonoState {
    char pad0[8];
    int entry;
    char pad1[0x40];
    short coins;
    short total;
};

extern MonoState* g_monoState;

void __cdecl setEntryLayerFlag(unsigned int index, int key, char value);
void __cdecl setEntryLayerPos(unsigned int index, int key, short x, short y);

static void __forceinline setDigit(int entry, const char* nameA, const char* nameB, int digit)
{
    int row = digit / 8 * 0x1900 / 100;
    int col = digit % 8 * 0x1900 / 100;
    setEntryLayerPos(entry, (int)nameA, col, row);
    setEntryLayerPos(entry, (int)nameB, col, row);
}

// FUNCTION: 0x4329D0 sub_4329D0
void __cdecl sub_4329D0()
{
    int entry = g_monoState->entry;
    setDigit(entry, "ins_mono_num_001_000a", "ins_mono_num_000_000a", g_monoState->coins % 100 / 10);
    setDigit(entry, "ins_mono_num_001_000b", "ins_mono_num_000_000b", g_monoState->coins % 10);
    setDigit(entry, "ins_mono_num_001_000c", "ins_mono_num_000_000c", g_monoState->total % 10000 / 1000);
    setDigit(entry, "ins_mono_num_001_000d", "ins_mono_num_000_000d", g_monoState->total % 1000 / 100);
    setDigit(entry, "ins_mono_num_001_000e", "ins_mono_num_000_000e", g_monoState->total % 100 / 10);
    setDigit(entry, "ins_mono_num_001_000f", "ins_mono_num_000_000f", g_monoState->total % 10);
    if (g_monoState->total == 10000) {
        setEntryLayerFlag(entry, (int)"ins_mono_num_001_000g", 1);
        setEntryLayerFlag(entry, (int)"ins_mono_num_000_000g", 1);
        setEntryLayerPos(entry, (int)"ins_mono_num_001_000g", 0x40, 0);
        setEntryLayerPos(entry, (int)"ins_mono_num_000_000g", 0x40, 0);
    } else {
        setEntryLayerFlag(entry, (int)"ins_mono_num_001_000g", 0);
        setEntryLayerFlag(entry, (int)"ins_mono_num_000_000g", 0);
    }
}
