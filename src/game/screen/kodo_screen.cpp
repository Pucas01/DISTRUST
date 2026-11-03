int __cdecl sprintf(char* buffer, const char* format, ...);
void __cdecl setEntryLayerFlag(unsigned int index, int key, char value);
void __cdecl setEntryLayerPos(unsigned int index, int key, short x, short y);
unsigned int __cdecl sub_4AFDD0(int a, int b);
int __cdecl sub_4AFE50(int a);
void __cdecl sub_4A8100();
void __cdecl sub_4A9240();

extern short g_73EAF4;
extern int g_73EAF8;
extern unsigned char g_6E4614[];
extern signed char g_6E45C8[];

// FUNCTION: 0x4A8100 sub_4A8100
void __cdecl sub_4A8100()
{
    char name[128];
    int pageOffset = g_73EAF8 ? 8 : 0;
    int slot = sub_4AFE50(g_73EAF4 + pageOffset);
    unsigned int entry = sub_4AFDD0(2, 0);
    int mode = g_6E4614[slot];

    setEntryLayerFlag(entry, (int)"p_sv_kodoset_bt_fin_000", 1);
    for (int i = 0; i < 8; i++) {
        sprintf(name, "p_sv_cursor_01_%03d", i);
        setEntryLayerFlag(entry, (int)name, 0);
        sprintf(name, "p_kodo_arrow_l_%03d", i);
        setEntryLayerFlag(entry, (int)name, 0);
        sprintf(name, "p_kodo_arrow_r_%03d", i);
        setEntryLayerFlag(entry, (int)name, 0);
    }
    sprintf(name, "p_sv_cursor_01_%03d", g_73EAF4);
    setEntryLayerFlag(entry, (int)name, 1);
    if (mode != 1) {
        sprintf(name, "p_kodo_arrow_l_%03d", g_73EAF4);
        setEntryLayerFlag(entry, (int)name, 1);
        sprintf(name, "p_kodo_arrow_r_%03d", g_73EAF4);
        setEntryLayerFlag(entry, (int)name, 1);
        setEntryLayerFlag(entry, (int)"p_down_count_000", 0);
        setEntryLayerFlag(entry, (int)"p_sv_kodoset_kodoicon_down", 0);
        setEntryLayerFlag(entry, (int)"p_sv_kodoset_kodoinfo_down_000", 0);
        setEntryLayerFlag(entry, (int)"p_sv_down_img", 0);
    } else {
        setEntryLayerFlag(entry, (int)"p_down_count_000", 1);
        setEntryLayerFlag(entry, (int)"p_sv_kodoset_kodoicon_down", 1);
        setEntryLayerFlag(entry, (int)"p_sv_kodoset_kodoinfo_down_000", 1);
        setEntryLayerFlag(entry, (int)"p_sv_down_img", 1);
        short x = (short)(g_6E45C8[slot] * 0x32) - 0x32;
        setEntryLayerPos(entry, (int)"p_down_count_000", x, 0);
    }
    sub_4A9240();
}

// FUNCTION: 0x4A88D0 sub_4A88D0
void __cdecl sub_4A88D0()
{
    char name[128];
    unsigned int entry = sub_4AFDD0(2, 0);

    for (int i = 0; i < 8; i++) {
        sprintf(name, "p_sv_cursor_01_%03d", i);
        setEntryLayerFlag(entry, (int)name, 0);
        sprintf(name, "p_kodo_arrow_l_%03d", i);
        setEntryLayerFlag(entry, (int)name, 0);
        sprintf(name, "p_kodo_arrow_r_%03d", i);
        setEntryLayerFlag(entry, (int)name, 0);
    }
    for (int i = 0; i < 12; i++) {
        sprintf(name, "p_sv_sozai_mappoint_on_%03d", i);
        setEntryLayerFlag(entry, (int)name, 0);
    }
    setEntryLayerFlag(entry, (int)"p_kodo_arrow_l_000", 1);
    setEntryLayerFlag(entry, (int)"p_kodo_arrow_r_000", 1);
    setEntryLayerFlag(entry, (int)"p_sv_cursor_01_000", 1);
    setEntryLayerFlag(entry, (int)"p_down_count_000", 0);
    setEntryLayerFlag(entry, (int)"p_sv_kodoset_kodoicon_down", 0);
    setEntryLayerFlag(entry, (int)"p_sv_kodoset_kodoinfo_down_000", 0);
    setEntryLayerFlag(entry, (int)"p_sv_down_img", 0);
    for (int i = 0; i < 8; i++) {
        sprintf(name, "p_sv_kodoset_charalist_zab_down_%03d", i);
        setEntryLayerFlag(entry, (int)name, 0);
    }
    for (int i = 0; i < 5; i++) {
        sprintf(name, "p_sv_hp_dn_%03d", i);
        setEntryLayerFlag(entry, (int)name, 0);
        sprintf(name, "p_sv_hp_up_%03d", i);
        setEntryLayerFlag(entry, (int)name, 0);
    }
    sub_4A8100();
}
