struct GameState
{
    char pad[0x8D8C];
    char flag;
};

extern GameState* g_gameState;
extern short g_handlesA[0x14];
extern short g_handlesB[0x14];
extern int g_73CE80[];
extern unsigned short g_627B20[];
extern short g_626E2C[][3];
extern int g_744C54;
extern char g_759CD4;
extern unsigned char g_slotFlagsB[];

// FUNCTION: 0x457880 setGameStateFlag
void __cdecl setGameStateFlag(char value)
{
    if (g_gameState)
        g_gameState->flag = value;
}

// FUNCTION: 0x46DBE0 findHandleA
int __cdecl findHandleA(int id)
{
    for (int i = 0; i < 0x14; i++) {
        if (id == g_handlesA[i])
            return i + 0x32;
    }
    return -2;
}

// FUNCTION: 0x46DC10 allocHandleA
int __cdecl allocHandleA(short id)
{
    for (int i = 0; i < 0x14; i++) {
        if (g_handlesA[i] == -1) {
            g_handlesA[i] = id;
            return i + 0x32;
        }
    }
    return -2;
}

// FUNCTION: 0x46DA70 findHandleB
int __cdecl findHandleB(int id)
{
    for (int i = 0; i < 0x14; i++) {
        if (id == g_handlesB[i])
            return i + 0x46;
    }
    return -2;
}

// FUNCTION: 0x4D0640 wordsForBits
int __cdecl wordsForBits(int bits)
{
    int words = bits / 32;
    if (bits % 32 != 0)
        words++;
    return words;
}

// FUNCTION: 0x4D06C0 setActiveId
void __cdecl setActiveId(int id)
{
    g_744C54 = id;
}

// FUNCTION: 0x46D0A0 lookupHandle
int __cdecl lookupHandle(unsigned int index)
{
    if (index <= 0x25)
        return g_73CE80[g_627B20[index]];
    return -1;
}

// FUNCTION: 0x462E00 lookupShort
short __cdecl lookupShort(unsigned int index)
{
    if (index <= 0x2C)
        return g_626E2C[index][0];
    return 0;
}

// FUNCTION: 0x4CF950 setSlotFlagB
void __cdecl setSlotFlagB(unsigned int index, unsigned char value)
{
    if (index <= 0xFF)
        g_slotFlagsB[index * 60] = value;
}

// FUNCTION: 0x5072C0 getGlobalBlock
void* __cdecl getGlobalBlock()
{
    return &g_759CD4;
}
