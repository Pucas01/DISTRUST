int __cdecl sub_497940(int kind);
int __cdecl sub_4977D0(int kind);
short __cdecl sub_4C8640(int a, int b);
void __cdecl sub_4C8C50(int id, int value);
short __cdecl sub_4C8790(int id);
void __cdecl sub_4C8D30(int id, const char* name, int value);
void __cdecl sub_4A5AB0(int a, int b, int c);
void __cdecl setEntryLayerFlag(unsigned int index, int key, char value);

extern short g_73E142;
extern short g_73E144;
extern short g_73E146;
extern short g_73E148[15];
extern short g_73E166;
extern short g_73E168;
extern short g_73E16A;
extern short g_73E16C;
extern short g_73E16E;
extern unsigned short g_628AE2[15];

// FUNCTION: 0x486370 sub_486370
void __cdecl sub_486370()
{
    g_73E142 = sub_4C8640(sub_4977D0(0), sub_497940(0));
    sub_4C8C50(g_73E142, 0);
    g_73E144 = sub_4C8640(sub_4977D0(0xF), sub_497940(0xF));
    sub_4C8C50(g_73E144, 0x2328);
    g_73E146 = sub_4C8640(sub_4977D0(0x10), sub_497940(0x10));
    sub_4C8C50(g_73E146, 0x2328);
    for (int i = 0; i < 15; i++) {
        g_73E148[i] = sub_4C8790(g_73E146);
        sub_4C8C50(g_73E148[i], g_628AE2[i]);
    }
    g_73E166 = sub_4C8640(sub_4977D0(0xA), sub_497940(0xA));
    sub_4C8C50(g_73E166, 0x2328);
    setEntryLayerFlag(g_73E166, (int)"ins_time_sub_page_num_1", 0);
    setEntryLayerFlag(g_73E166, (int)"ins_time_sub_page_num_2", 0);
    setEntryLayerFlag(g_73E166, (int)"ins_time_sub_page_num_3", 0);
    setEntryLayerFlag(g_73E166, (int)"ins_time_sub_page_num_4", 0);
    setEntryLayerFlag(g_73E166, (int)"ins_time_sub_page_num_5", 0);
    setEntryLayerFlag(g_73E166, (int)"ins_time_sub_page_tx", 0);
    g_73E168 = sub_4C8640(sub_4977D0(0xB), sub_497940(0xB));
    sub_4C8C50(g_73E168, 0x2EE0);
    sub_4C8D30(g_73E168, "ins_anagram_hit_tx", 4);
    g_73E16A = sub_4C8640(sub_4977D0(0xC), sub_497940(0xC));
    sub_4C8C50(g_73E16A, 0x2EE0);
    g_73E16C = sub_4C8640(sub_4977D0(8), sub_497940(8));
    sub_4C8C50(g_73E16C, 0x2EE0);
    g_73E16E = sub_4C8640(sub_4977D0(0xE), sub_497940(0xE));
    sub_4C8C50(g_73E16E, 0x2328);
    sub_4A5AB0(sub_4977D0(0x11), sub_497940(0x11), 0x2328);
}
