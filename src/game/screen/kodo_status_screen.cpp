int __cdecl sprintf(char* buffer, const char* format, ...);
void __cdecl setEntryLayerFlag(unsigned int index, int key, char value);
void __cdecl setEntryLayerPos(unsigned int index, int key, short x, short y);
void __cdecl resetEntry(unsigned int index, const char* name);
unsigned int __cdecl sub_4AFDD0(int a, int b);
int __cdecl sub_4AFE50(int a);
void __cdecl sub_4AF2B0();

extern unsigned char g_6E4614[];
extern signed char g_6E4597[];
extern unsigned char g_6E44BB[];
extern unsigned char g_6E44AC[];

// FUNCTION: 0x4AD330 sub_4AD330
void __cdecl sub_4AD330()
{
    char name[128];
    int i;
    unsigned int entry = sub_4AFDD0(5, 0);

    setEntryLayerFlag(entry, (int)"p_sv_shojihin_boygirl_midashi_000", 1);
    setEntryLayerFlag(entry, (int)"p_sv_shojihin_boygirl_midashi_001", 1);
    setEntryLayerFlag(entry, (int)"p_sv_shojihin_charalist_zab_000", 1);
    setEntryLayerFlag(entry, (int)"p_sv_shojihin_seiketsugauge_waku_000", 1);
    for (i = 0; i < 15; i++) {
        sprintf(name, "p_sv_kodoset_hp_icon2_%03d", i);
        setEntryLayerFlag(entry, (int)name, 1);
        sprintf(name, "p_lv_saisyu_%03d", i);
        setEntryLayerFlag(entry, (int)name, 1);
        sprintf(name, "p_lv_souji_%03d", i);
        setEntryLayerFlag(entry, (int)name, 1);
    }
    for (i = 0; i < 15; i++) {
        int slot = sub_4AFE50(i);
        sprintf(name, "p_sv_kodoset_hp_icon2_%03d", i);
        setEntryLayerPos(entry, (int)name,
            g_6E4614[slot] == 2 ? 200
                : g_6E4597[slot] > 0x42 ? 0
                : g_6E4597[slot] > 0x21 ? 0x32
                : g_6E4597[slot] > 0 ? 0x64 : 0x96,
            0);
        sprintf(name, "p_lv_saisyu_%03d", i);
        int first = g_6E44BB[slot];
        if (first >= 9)
            first = 9;
        setEntryLayerPos(entry, (int)name, first * 0x32 - 0x32, 0);
        sprintf(name, "p_lv_souji_%03d", i);
        int second = g_6E44AC[slot];
        if (second >= 9)
            second = 9;
        setEntryLayerPos(entry, (int)name, second * 0x32 - 0x32, 0);
    }
    sub_4AF2B0();
    resetEntry(sub_4AFDD0(5, 4), "fl_stop");
}
