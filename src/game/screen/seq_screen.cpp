int __cdecl sprintf(char* buffer, const char* format, ...);
void __cdecl setEntryLayerFlag(unsigned int index, int key, char value);
unsigned int __cdecl sub_4AFDD0(int a, int b);
int __cdecl sub_4AFDF0(int a, int b);
void __cdecl sub_4C8360(unsigned int entry, float x, float y);
void __cdecl sub_4C8D90(unsigned int entry, const char* name, int value);
void __cdecl sub_4C8F00(unsigned int entry, const char* name, int handle, int a, int b, int c);
void __cdecl sub_4C8E50(unsigned int entry, const char* name, int handle, int a, int b, int c, int d);

extern signed char g_73EAC0;
extern signed char g_73EAC1;

// FUNCTION: 0x4A7380 sub_4A7380
void __cdecl sub_4A7380()
{
    char name[128];
    unsigned int entry = sub_4AFDD0(6, 0);

    sub_4C8360(entry, 0.0f, 252.0f);
    sub_4C8D90(entry, "p_tx_c_cl35_000", 1);
    sub_4C8F00(entry, "p_tx_c_cl35_000", sub_4AFDF0(5, 0), 0x32, 0, 0);
    sub_4C8D90(entry, "p_tx_01_000", 1);
    sub_4C8E50(entry, "p_tx_01_000", sub_4AFDF0(5, 1), 0x33, 0, 0, g_73EAC0 == 0 ? 15 : 30);
    sub_4C8D90(entry, "p_tx_01_001", 1);
    sub_4C8E50(entry, "p_tx_01_001", sub_4AFDF0(5, 2), 0x34, 0, 0, g_73EAC0 == 1 ? 15 : 30);
    sub_4C8D90(entry, "p_tx_01_002", 1);
    sub_4C8E50(entry, "p_tx_01_002", sub_4AFDF0(5, 3), 0x35, 0, 0, g_73EAC0 == 2 ? 15 : 30);
    for (int i = 0; i < 3; i++) {
        sprintf(name, "p_seq_pl_002_%03d", i);
        setEntryLayerFlag(entry, (int)name, 0);
    }
    sprintf(name, "p_seq_pl_002_%03d", g_73EAC0);
    setEntryLayerFlag(entry, (int)name, 1);
}

// FUNCTION: 0x4A7510 sub_4A7510
void __cdecl sub_4A7510()
{
    char name[128];
    int slot = 0;
    unsigned int entry = sub_4AFDD0(6, 0);

    if (g_73EAC0 == 0)
        slot = 4;
    else if (g_73EAC0 == 1)
        slot = 5;
    sub_4C8D90(entry, "p_tx_c_cl83_000", 1);
    sub_4C8360(entry, 0.0f, 252.0f);
    sub_4C8F00(entry, "p_tx_c_cl83_000", sub_4AFDF0(5, slot), 0x36, 0, 0);
    sub_4C8D90(entry, "p_tx_02_000", 1);
    sub_4C8E50(entry, "p_tx_02_000", sub_4AFDF0(5, 6), 0x37, 0, 0, g_73EAC1 == 0 ? 15 : 30);
    sub_4C8D90(entry, "p_tx_02_001", 1);
    sub_4C8E50(entry, "p_tx_02_001", sub_4AFDF0(5, 7), 0x38, 0, 0, g_73EAC1 == 1 ? 15 : 30);
    for (int i = 0; i < 3; i++) {
        sprintf(name, "p_seq_pl_003_%03d", i);
        setEntryLayerFlag(entry, (int)name, 0);
    }
    sprintf(name, "p_seq_pl_003_%03d", g_73EAC1);
    setEntryLayerFlag(entry, (int)name, 1);
}
