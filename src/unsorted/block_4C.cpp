#include "unsorted/entry_table.h"

extern EntryRecord* g_entryTable; // 0x7405ec

// FUNCTION: 0x4C85E0 sub_4C85E0
int __cdecl sub_4C85E0(unsigned int index, int slot)
{
    if (index <= 0x6d) {
        EntryRecord* entry = &g_entryTable[index];
        if (entry->valid && slot >= 0 && slot < entry->count) {
            short* values = entry->values;
            if (values) {
                return *(short*)((char*)values + slot * 10);
            }
        }
    }
    return -1;
}

// STUB: 0x4C0340 sub_4C0340 (1591 bytes)
void sub_4C0340()
{
}

// STUB: 0x4C0980 sub_4C0980 (2380 bytes)
void sub_4C0980()
{
}

// STUB: 0x4C12D0 sub_4C12D0 (153 bytes)
void sub_4C12D0()
{
}

// STUB: 0x4C1370 sub_4C1370 (18 bytes)
void sub_4C1370()
{
}

// STUB: 0x4C1390 sub_4C1390 (1285 bytes)
void sub_4C1390()
{
}

// STUB: 0x4C18A0 sub_4C18A0 (87 bytes)
void sub_4C18A0()
{
}

// STUB: 0x4C1900 sub_4C1900 (132 bytes)
void sub_4C1900()
{
}

// STUB: 0x4C1990 sub_4C1990 (247 bytes)
void sub_4C1990()
{
}

// STUB: 0x4C1A90 sub_4C1A90 (549 bytes)
void sub_4C1A90()
{
}

// STUB: 0x4C1CC0 sub_4C1CC0 (111 bytes)
void sub_4C1CC0()
{
}

// STUB: 0x4C1D30 sub_4C1D30 (594 bytes)
void sub_4C1D30()
{
}

// STUB: 0x4C1F90 sub_4C1F90 (30 bytes)
void sub_4C1F90()
{
}

// STUB: 0x4C1FB0 sub_4C1FB0 (116 bytes)
void sub_4C1FB0()
{
}

// STUB: 0x4C2030 sub_4C2030 (57 bytes)
void sub_4C2030()
{
}

// STUB: 0x4C2070 sub_4C2070 (134 bytes)
void sub_4C2070()
{
}

// STUB: 0x4C2100 sub_4C2100 (6 bytes)
void sub_4C2100()
{
}

// STUB: 0x4C2110 sub_4C2110 (6 bytes)
void sub_4C2110()
{
}

// STUB: 0x4C2120 sub_4C2120 (6 bytes)
void sub_4C2120()
{
}

// STUB: 0x4C2130 sub_4C2130 (222 bytes)
void sub_4C2130()
{
}

// STUB: 0x4C2210 sub_4C2210 (3074 bytes)
void sub_4C2210()
{
}

// STUB: 0x4C2E20 sub_4C2E20 (989 bytes)
void sub_4C2E20()
{
}

// STUB: 0x4C3200 sub_4C3200 (528 bytes)
void sub_4C3200()
{
}

// STUB: 0x4C3410 sub_4C3410 (45 bytes)
void sub_4C3410()
{
}

// STUB: 0x4C3440 sub_4C3440 (208 bytes)
void sub_4C3440()
{
}

// STUB: 0x4C3510 sub_4C3510 (347 bytes)
void sub_4C3510()
{
}

// STUB: 0x4C3670 sub_4C3670 (440 bytes)
void sub_4C3670()
{
}

// STUB: 0x4C3830 sub_4C3830 (270 bytes)
void sub_4C3830()
{
}

// STUB: 0x4C3940 sub_4C3940 (57 bytes)
void sub_4C3940()
{
}

// STUB: 0x4C3980 sub_4C3980 (54 bytes)
void sub_4C3980()
{
}

// STUB: 0x4C39C0 sub_4C39C0 (218 bytes)
void sub_4C39C0()
{
}

// STUB: 0x4C3AA0 sub_4C3AA0 (477 bytes)
void sub_4C3AA0()
{
}

// STUB: 0x4C3C80 sub_4C3C80 (13 bytes)
void sub_4C3C80()
{
}

// STUB: 0x4C3C90 sub_4C3C90 (181 bytes)
void sub_4C3C90()
{
}

// STUB: 0x4C3D50 sub_4C3D50 (13 bytes)
void sub_4C3D50()
{
}

// STUB: 0x4C3D60 sub_4C3D60 (90 bytes)
void sub_4C3D60()
{
}

// STUB: 0x4C3DC0 sub_4C3DC0 (73 bytes)
void sub_4C3DC0()
{
}

// STUB: 0x4C3E10 sub_4C3E10 (18 bytes)
void sub_4C3E10()
{
}

// STUB: 0x4C3E30 sub_4C3E30 (338 bytes)
void sub_4C3E30()
{
}

// STUB: 0x4C3F90 sub_4C3F90 (82 bytes)
void sub_4C3F90()
{
}

// STUB: 0x4C3FF0 sub_4C3FF0 (122 bytes)
void sub_4C3FF0()
{
}

// STUB: 0x4C4070 sub_4C4070 (44 bytes)
void sub_4C4070()
{
}

// STUB: 0x4C40A0 sub_4C40A0 (386 bytes)
void sub_4C40A0()
{
}

// STUB: 0x4C4230 sub_4C4230 (123 bytes)
void sub_4C4230()
{
}

// STUB: 0x4C42B0 sub_4C42B0 (6 bytes)
void sub_4C42B0()
{
}

// STUB: 0x4C42C0 sub_4C42C0 (587 bytes)
void sub_4C42C0()
{
}

// STUB: 0x4C4510 sub_4C4510 (297 bytes)
void sub_4C4510()
{
}

// STUB: 0x4C4640 sub_4C4640 (67 bytes)
void sub_4C4640()
{
}

// STUB: 0x4C4690 sub_4C4690 (934 bytes)
void sub_4C4690()
{
}

// STUB: 0x4C4A40 sub_4C4A40 (80 bytes)
void sub_4C4A40()
{
}

// STUB: 0x4C4A90 sub_4C4A90 (13 bytes)
void sub_4C4A90()
{
}

// STUB: 0x4C4AA0 sub_4C4AA0 (8 bytes)
void sub_4C4AA0()
{
}

// STUB: 0x4C4AB0 sub_4C4AB0 (6 bytes)
void sub_4C4AB0()
{
}

// STUB: 0x4C4AC0 sub_4C4AC0 (47 bytes)
void sub_4C4AC0()
{
}

// STUB: 0x4C4AF0 sub_4C4AF0 (32 bytes)
void sub_4C4AF0()
{
}

// STUB: 0x4C4B10 sub_4C4B10 (120 bytes)
void sub_4C4B10()
{
}

// STUB: 0x4C4C60 sub_4C4C60 (71 bytes)
void sub_4C4C60()
{
}

// STUB: 0x4C4CB0 sub_4C4CB0 (183 bytes)
void sub_4C4CB0()
{
}

// STUB: 0x4C4D70 sub_4C4D70 (138 bytes)
void sub_4C4D70()
{
}

// STUB: 0x4C4E00 sub_4C4E00 (186 bytes)
void sub_4C4E00()
{
}

// STUB: 0x4C4F70 sub_4C4F70 (13 bytes)
void sub_4C4F70()
{
}

// STUB: 0x4C4F80 sub_4C4F80 (900 bytes)
void sub_4C4F80()
{
}

// STUB: 0x4C5310 sub_4C5310 (11 bytes)
void sub_4C5310()
{
}

// STUB: 0x4C5320 sub_4C5320 (11 bytes)
void sub_4C5320()
{
}

// STUB: 0x4C5330 sub_4C5330 (21 bytes)
void sub_4C5330()
{
}

// STUB: 0x4C5350 sub_4C5350 (131 bytes)
void sub_4C5350()
{
}

// STUB: 0x4C53E0 sub_4C53E0 (224 bytes)
void sub_4C53E0()
{
}

// STUB: 0x4C54C0 sub_4C54C0 (7 bytes)
void sub_4C54C0()
{
}

// STUB: 0x4C65B0 sub_4C65B0 (44 bytes)
void sub_4C65B0()
{
}

// STUB: 0x4C65E0 sub_4C65E0 (96 bytes)
void sub_4C65E0()
{
}

// STUB: 0x4C6640 sub_4C6640 (72 bytes)
void sub_4C6640()
{
}

// STUB: 0x4C6690 sub_4C6690 (47 bytes)
void sub_4C6690()
{
}

// STUB: 0x4C66C0 sub_4C66C0 (65 bytes)
void sub_4C66C0()
{
}

// STUB: 0x4C6710 sub_4C6710 (121 bytes)
void sub_4C6710()
{
}

// STUB: 0x4C6790 sub_4C6790 (108 bytes)
void sub_4C6790()
{
}

// STUB: 0x4C6800 sub_4C6800 (89 bytes)
void sub_4C6800()
{
}

// STUB: 0x4C6860 sub_4C6860 (880 bytes)
void sub_4C6860()
{
}

// STUB: 0x4C6BD0 sub_4C6BD0 (128 bytes)
void sub_4C6BD0()
{
}

// STUB: 0x4C6C50 sub_4C6C50 (307 bytes)
void sub_4C6C50()
{
}

// STUB: 0x4C6D90 sub_4C6D90 (400 bytes)
void sub_4C6D90()
{
}

// STUB: 0x4C6FD0 sub_4C6FD0 (2310 bytes)
void sub_4C6FD0()
{
}

// STUB: 0x4C78E0 sub_4C78E0 (87 bytes)
void sub_4C78E0()
{
}

// STUB: 0x4C7940 sub_4C7940 (900 bytes)
void sub_4C7940()
{
}

// STUB: 0x4C7CD0 sub_4C7CD0 (110 bytes)
void sub_4C7CD0()
{
}

// STUB: 0x4C7D40 sub_4C7D40 (160 bytes)
void sub_4C7D40()
{
}

// STUB: 0x4C7DE0 sub_4C7DE0 (323 bytes)
void sub_4C7DE0()
{
}

// STUB: 0x4C7F30 sub_4C7F30 (63 bytes)
void sub_4C7F30()
{
}

// STUB: 0x4C7F70 sub_4C7F70 (296 bytes)
void sub_4C7F70()
{
}

// STUB: 0x4C80A0 sub_4C80A0 (364 bytes)
void sub_4C80A0()
{
}

// STUB: 0x4C8210 sub_4C8210 (28 bytes)
void sub_4C8210()
{
}

// STUB: 0x4C8230 sub_4C8230 (301 bytes)
void sub_4C8230()
{
}

// STUB: 0x4C8360 sub_4C8360 (47 bytes)
void sub_4C8360()
{
}

// STUB: 0x4C8390 sub_4C8390 (468 bytes)
void sub_4C8390()
{
}

// STUB: 0x4C8570 sub_4C8570 (62 bytes)
void sub_4C8570()
{
}

// STUB: 0x4C85B0 sub_4C85B0 (36 bytes)
void sub_4C85B0()
{
}

// STUB: 0x4C8620 sub_4C8620 (32 bytes)
void sub_4C8620()
{
}

// STUB: 0x4C8640 sub_4C8640 (333 bytes)
void sub_4C8640()
{
}

// STUB: 0x4C8790 sub_4C8790 (223 bytes)
void sub_4C8790()
{
}

// STUB: 0x4C8870 sub_4C8870 (100 bytes)
void sub_4C8870()
{
}

// STUB: 0x4C88E0 sub_4C88E0 (39 bytes)
void sub_4C88E0()
{
}

// STUB: 0x4C8910 sub_4C8910 (130 bytes)
void sub_4C8910()
{
}

// STUB: 0x4C89A0 sub_4C89A0 (322 bytes)
void sub_4C89A0()
{
}

// STUB: 0x4C8AF0 sub_4C8AF0 (42 bytes)
void sub_4C8AF0()
{
}

// STUB: 0x4C8B20 sub_4C8B20 (42 bytes)
void sub_4C8B20()
{
}

// STUB: 0x4C8B50 sub_4C8B50 (58 bytes)
void sub_4C8B50()
{
}

// STUB: 0x4C8B90 sub_4C8B90 (125 bytes)
void sub_4C8B90()
{
}

// STUB: 0x4C8C10 sub_4C8C10 (28 bytes)
void sub_4C8C10()
{
}

// STUB: 0x4C8C30 sub_4C8C30 (28 bytes)
void sub_4C8C30()
{
}

// STUB: 0x4C8C50 sub_4C8C50 (30 bytes)
void sub_4C8C50()
{
}

// STUB: 0x4C8C70 sub_4C8C70 (28 bytes)
void sub_4C8C70()
{
}

// STUB: 0x4C8C90 sub_4C8C90 (28 bytes)
void sub_4C8C90()
{
}

// STUB: 0x4C8CB0 sub_4C8CB0 (70 bytes)
void sub_4C8CB0()
{
}

// STUB: 0x4C8D00 sub_4C8D00 (35 bytes)
void sub_4C8D00()
{
}

// STUB: 0x4C8D30 sub_4C8D30 (82 bytes)
void sub_4C8D30()
{
}

// STUB: 0x4C8D90 sub_4C8D90 (82 bytes)
void sub_4C8D90()
{
}

// STUB: 0x4C8DF0 sub_4C8DF0 (82 bytes)
void sub_4C8DF0()
{
}

// STUB: 0x4C8E50 sub_4C8E50 (175 bytes)
void sub_4C8E50()
{
}

// STUB: 0x4C8F00 sub_4C8F00 (348 bytes)
void sub_4C8F00()
{
}

// STUB: 0x4C9060 sub_4C9060 (244 bytes)
void sub_4C9060()
{
}

// STUB: 0x4C9160 sub_4C9160 (82 bytes)
void sub_4C9160()
{
}

// STUB: 0x4C91C0 sub_4C91C0 (84 bytes)
void sub_4C91C0()
{
}

// STUB: 0x4C9220 sub_4C9220 (108 bytes)
void sub_4C9220()
{
}

// STUB: 0x4C9290 sub_4C9290 (122 bytes)
void sub_4C9290()
{
}

// STUB: 0x4C9310 sub_4C9310 (26 bytes)
void sub_4C9310()
{
}

// STUB: 0x4C9330 sub_4C9330 (102 bytes)
void sub_4C9330()
{
}

// STUB: 0x4C93A0 sub_4C93A0 (57 bytes)
void sub_4C93A0()
{
}

// STUB: 0x4C93E0 sub_4C93E0 (96 bytes)
void sub_4C93E0()
{
}

// STUB: 0x4C9440 sub_4C9440 (84 bytes)
void sub_4C9440()
{
}

// STUB: 0x4C94A0 sub_4C94A0 (3301 bytes)
void sub_4C94A0()
{
}

// STUB: 0x4CA190 sub_4CA190 (90 bytes)
void sub_4CA190()
{
}

// STUB: 0x4CA1F0 sub_4CA1F0 (800 bytes)
void sub_4CA1F0()
{
}

// STUB: 0x4CA510 sub_4CA510 (92 bytes)
void sub_4CA510()
{
}

// STUB: 0x4CA570 sub_4CA570 (94 bytes)
void sub_4CA570()
{
}

// STUB: 0x4CA5D0 sub_4CA5D0 (142 bytes)
void sub_4CA5D0()
{
}

// STUB: 0x4CA660 sub_4CA660 (92 bytes)
void sub_4CA660()
{
}

// STUB: 0x4CA6C0 sub_4CA6C0 (80 bytes)
void sub_4CA6C0()
{
}

// STUB: 0x4CA710 sub_4CA710 (96 bytes)
void sub_4CA710()
{
}

// STUB: 0x4CA770 sub_4CA770 (675 bytes)
void sub_4CA770()
{
}

// STUB: 0x4CAA20 sub_4CAA20 (314 bytes)
void sub_4CAA20()
{
}

// STUB: 0x4CAB60 sub_4CAB60 (1789 bytes)
void sub_4CAB60()
{
}

// STUB: 0x4CB270 sub_4CB270 (6608 bytes)
void sub_4CB270()
{
}

// STUB: 0x4CCC40 sub_4CCC40 (122 bytes)
void sub_4CCC40()
{
}

// STUB: 0x4CCCC0 sub_4CCCC0 (260 bytes)
void sub_4CCCC0()
{
}

// STUB: 0x4CCDD0 sub_4CCDD0 (125 bytes)
void sub_4CCDD0()
{
}

// STUB: 0x4CCE50 sub_4CCE50 (126 bytes)
void sub_4CCE50()
{
}

// STUB: 0x4CCED0 sub_4CCED0 (176 bytes)
void sub_4CCED0()
{
}

// STUB: 0x4CCF80 sub_4CCF80 (124 bytes)
void sub_4CCF80()
{
}

// STUB: 0x4CD000 sub_4CD000 (113 bytes)
void sub_4CD000()
{
}

// STUB: 0x4CD080 sub_4CD080 (129 bytes)
void sub_4CD080()
{
}

// STUB: 0x4CD110 sub_4CD110 (606 bytes)
void sub_4CD110()
{
}

// STUB: 0x4CD370 sub_4CD370 (386 bytes)
void sub_4CD370()
{
}

// STUB: 0x4CD500 sub_4CD500 (295 bytes)
void sub_4CD500()
{
}

// STUB: 0x4CD630 sub_4CD630 (168 bytes)
void sub_4CD630()
{
}

// STUB: 0x4CD6E0 sub_4CD6E0 (139 bytes)
void sub_4CD6E0()
{
}

// STUB: 0x4CD770 sub_4CD770 (345 bytes)
void sub_4CD770()
{
}

// STUB: 0x4CD8D0 sub_4CD8D0 (66 bytes)
void sub_4CD8D0()
{
}

// STUB: 0x4CD920 sub_4CD920 (227 bytes)
void sub_4CD920()
{
}

// STUB: 0x4CDA10 sub_4CDA10 (364 bytes)
void sub_4CDA10()
{
}

// STUB: 0x4CDB80 sub_4CDB80 (154 bytes)
void sub_4CDB80()
{
}

// STUB: 0x4CDC20 sub_4CDC20 (210 bytes)
void sub_4CDC20()
{
}

// STUB: 0x4CDD00 sub_4CDD00 (78 bytes)
void sub_4CDD00()
{
}

// STUB: 0x4CDD50 sub_4CDD50 (78 bytes)
void sub_4CDD50()
{
}

// STUB: 0x4CDDA0 sub_4CDDA0 (142 bytes)
void sub_4CDDA0()
{
}

// STUB: 0x4CDE30 sub_4CDE30 (74 bytes)
void sub_4CDE30()
{
}

// STUB: 0x4CDE80 sub_4CDE80 (68 bytes)
void sub_4CDE80()
{
}

// STUB: 0x4CDED0 sub_4CDED0 (84 bytes)
void sub_4CDED0()
{
}

// STUB: 0x4CDF30 sub_4CDF30 (188 bytes)
void sub_4CDF30()
{
}

// STUB: 0x4CDFF0 sub_4CDFF0 (1274 bytes)
void sub_4CDFF0()
{
}

// STUB: 0x4CE4F0 sub_4CE4F0 (72 bytes)
void sub_4CE4F0()
{
}

// STUB: 0x4CE540 sub_4CE540 (27 bytes)
void sub_4CE540()
{
}

// STUB: 0x4CE560 sub_4CE560 (38 bytes)
void sub_4CE560()
{
}

// STUB: 0x4CE590 sub_4CE590 (270 bytes)
void sub_4CE590()
{
}

// STUB: 0x4CE6A0 sub_4CE6A0 (131 bytes)
void sub_4CE6A0()
{
}

// STUB: 0x4CE730 sub_4CE730 (29 bytes)
void sub_4CE730()
{
}

// STUB: 0x4CE750 sub_4CE750 (103 bytes)
void sub_4CE750()
{
}

// STUB: 0x4CE7C0 sub_4CE7C0 (495 bytes)
void sub_4CE7C0()
{
}

// STUB: 0x4CE9B0 sub_4CE9B0 (32 bytes)
void sub_4CE9B0()
{
}

// STUB: 0x4CE9D0 sub_4CE9D0 (267 bytes)
void sub_4CE9D0()
{
}

// STUB: 0x4CEAE0 sub_4CEAE0 (58 bytes)
void sub_4CEAE0()
{
}

// STUB: 0x4CEB20 sub_4CEB20 (122 bytes)
void sub_4CEB20()
{
}

// STUB: 0x4CEBA0 sub_4CEBA0 (3496 bytes)
void sub_4CEBA0()
{
}

// STUB: 0x4CF950 sub_4CF950 (32 bytes)
void sub_4CF950()
{
}

// STUB: 0x4CF970 sub_4CF970 (45 bytes)
void sub_4CF970()
{
}

// STUB: 0x4CF9A0 sub_4CF9A0 (32 bytes)
void sub_4CF9A0()
{
}

// STUB: 0x4CF9C0 sub_4CF9C0 (80 bytes)
void sub_4CF9C0()
{
}

// STUB: 0x4CFA10 sub_4CFA10 (618 bytes)
void sub_4CFA10()
{
}

// STUB: 0x4CFC80 sub_4CFC80 (1032 bytes)
void sub_4CFC80()
{
}
