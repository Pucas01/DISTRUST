struct StringRef
{
    const char* text;
    int length;

    StringRef* set(const char* s);
};

// FUNCTION: 0x4FD320 StringRef::set
StringRef* StringRef::set(const char* s)
{
    text = s;
    if (s) {
        const char* next = s + 1;
        while (*s++) {
        }
        length = (int)(s - next);
    } else {
        length = 0;
    }
    return this;
}

// STUB: 0x4F0090 sub_4F0090 (3241 bytes)
void sub_4F0090()
{
}

// STUB: 0x4F0D60 sub_4F0D60 (254 bytes)
void sub_4F0D60()
{
}

// STUB: 0x4F0E60 sub_4F0E60 (1276 bytes)
void sub_4F0E60()
{
}

// STUB: 0x4F1360 sub_4F1360 (264 bytes)
void sub_4F1360()
{
}

// STUB: 0x4F1470 sub_4F1470 (341 bytes)
void sub_4F1470()
{
}

// STUB: 0x4F1660 sub_4F1660 (231 bytes)
void sub_4F1660()
{
}

// STUB: 0x4F1750 sub_4F1750 (145 bytes)
void sub_4F1750()
{
}

// STUB: 0x4F17F0 sub_4F17F0 (40 bytes)
void sub_4F17F0()
{
}

// STUB: 0x4F1820 sub_4F1820 (65 bytes)
void sub_4F1820()
{
}

// STUB: 0x4F1870 sub_4F1870 (151 bytes)
void sub_4F1870()
{
}

// STUB: 0x4F1910 sub_4F1910 (281 bytes)
void sub_4F1910()
{
}

// STUB: 0x4F1A30 sub_4F1A30 (123 bytes)
void sub_4F1A30()
{
}

// STUB: 0x4F1AB0 sub_4F1AB0 (61 bytes)
void sub_4F1AB0()
{
}

// STUB: 0x4F1AF0 sub_4F1AF0 (80 bytes)
void sub_4F1AF0()
{
}

// STUB: 0x4F1B50 sub_4F1B50 (162 bytes)
void sub_4F1B50()
{
}

// STUB: 0x4F1C00 sub_4F1C00 (547 bytes)
void sub_4F1C00()
{
}

// STUB: 0x4F1E30 sub_4F1E30 (349 bytes)
void sub_4F1E30()
{
}

// STUB: 0x4F1F90 sub_4F1F90 (346 bytes)
void sub_4F1F90()
{
}

// STUB: 0x4F20F0 sub_4F20F0 (140 bytes)
void sub_4F20F0()
{
}

// STUB: 0x4F2180 sub_4F2180 (119 bytes)
void sub_4F2180()
{
}

// STUB: 0x4F2200 sub_4F2200 (60 bytes)
void sub_4F2200()
{
}

// STUB: 0x4F2240 sub_4F2240 (142 bytes)
void sub_4F2240()
{
}

// STUB: 0x4F22D0 sub_4F22D0 (685 bytes)
void sub_4F22D0()
{
}

// STUB: 0x4F2580 sub_4F2580 (6 bytes)
void sub_4F2580()
{
}

// STUB: 0x4F25D0 sub_4F25D0 (51 bytes)
void sub_4F25D0()
{
}

// STUB: 0x4F2610 sub_4F2610 (18 bytes)
void sub_4F2610()
{
}

// STUB: 0x4F2630 sub_4F2630 (13 bytes)
void sub_4F2630()
{
}

// STUB: 0x4F2640 sub_4F2640 (18 bytes)
void sub_4F2640()
{
}

// STUB: 0x4F2660 sub_4F2660 (13 bytes)
void sub_4F2660()
{
}

// STUB: 0x4F2670 sub_4F2670 (53 bytes)
void sub_4F2670()
{
}

// STUB: 0x4F26B0 sub_4F26B0 (147 bytes)
void sub_4F26B0()
{
}

// STUB: 0x4F2760 sub_4F2760 (16 bytes)
void sub_4F2760()
{
}

// STUB: 0x4F2770 sub_4F2770 (61 bytes)
void sub_4F2770()
{
}

// STUB: 0x4F27B0 sub_4F27B0 (24 bytes)
void sub_4F27B0()
{
}

// STUB: 0x4F27D0 sub_4F27D0 (46 bytes)
void sub_4F27D0()
{
}

// STUB: 0x4F2800 sub_4F2800 (53 bytes)
void sub_4F2800()
{
}

// STUB: 0x4F2840 sub_4F2840 (18 bytes)
void sub_4F2840()
{
}

// STUB: 0x4F2860 sub_4F2860 (77 bytes)
void sub_4F2860()
{
}

// STUB: 0x4F28B0 sub_4F28B0 (890 bytes)
void sub_4F28B0()
{
}

// STUB: 0x4F2C30 sub_4F2C30 (813 bytes)
void sub_4F2C30()
{
}

// STUB: 0x4F2F60 sub_4F2F60 (786 bytes)
void sub_4F2F60()
{
}

// STUB: 0x4F3280 sub_4F3280 (723 bytes)
void sub_4F3280()
{
}

// STUB: 0x4F3560 sub_4F3560 (141 bytes)
void sub_4F3560()
{
}

// STUB: 0x4F35F0 sub_4F35F0 (220 bytes)
void sub_4F35F0()
{
}

// STUB: 0x4F36D0 sub_4F36D0 (120 bytes)
void sub_4F36D0()
{
}

// STUB: 0x4F3750 sub_4F3750 (396 bytes)
void sub_4F3750()
{
}

// STUB: 0x4F38E0 sub_4F38E0 (87 bytes)
void sub_4F38E0()
{
}

// STUB: 0x4F3940 sub_4F3940 (216 bytes)
void sub_4F3940()
{
}

// STUB: 0x4F3A20 sub_4F3A20 (54 bytes)
void sub_4F3A20()
{
}

// STUB: 0x4F3A60 sub_4F3A60 (190 bytes)
void sub_4F3A60()
{
}

// STUB: 0x4F3B20 sub_4F3B20 (365 bytes)
void sub_4F3B20()
{
}

// STUB: 0x4F3C90 sub_4F3C90 (1313 bytes)
void sub_4F3C90()
{
}

// STUB: 0x4F41C0 sub_4F41C0 (516 bytes)
void sub_4F41C0()
{
}

// STUB: 0x4F4420 sub_4F4420 (27 bytes)
void sub_4F4420()
{
}

// STUB: 0x4F4440 sub_4F4440 (75 bytes)
void sub_4F4440()
{
}

// STUB: 0x4F4490 sub_4F4490 (39 bytes)
void sub_4F4490()
{
}

// STUB: 0x4F44C0 sub_4F44C0 (124 bytes)
void sub_4F44C0()
{
}

// STUB: 0x4F4540 sub_4F4540 (54 bytes)
void sub_4F4540()
{
}

// STUB: 0x4F4580 sub_4F4580 (62 bytes)
void sub_4F4580()
{
}

// STUB: 0x4F45C0 sub_4F45C0 (167 bytes)
void sub_4F45C0()
{
}

// STUB: 0x4F47C0 sub_4F47C0 (10 bytes)
void sub_4F47C0()
{
}

// STUB: 0x4F47E0 sub_4F47E0 (128 bytes)
void sub_4F47E0()
{
}

// STUB: 0x4F4870 sub_4F4870 (130 bytes)
void sub_4F4870()
{
}

// STUB: 0x4F4900 sub_4F4900 (130 bytes)
void sub_4F4900()
{
}

// STUB: 0x4F4990 sub_4F4990 (130 bytes)
void sub_4F4990()
{
}

// STUB: 0x4F4A20 sub_4F4A20 (119 bytes)
void sub_4F4A20()
{
}

// STUB: 0x4F4AA0 sub_4F4AA0 (124 bytes)
void sub_4F4AA0()
{
}

// STUB: 0x4F4B20 sub_4F4B20 (429 bytes)
void sub_4F4B20()
{
}

// STUB: 0x4F4CD0 sub_4F4CD0 (79 bytes)
void sub_4F4CD0()
{
}

// STUB: 0x4F4D20 sub_4F4D20 (608 bytes)
void sub_4F4D20()
{
}

// STUB: 0x4F4F80 sub_4F4F80 (530 bytes)
void sub_4F4F80()
{
}

// STUB: 0x4F51A0 sub_4F51A0 (433 bytes)
void sub_4F51A0()
{
}

// STUB: 0x4F5360 sub_4F5360 (374 bytes)
void sub_4F5360()
{
}

// STUB: 0x4F54E0 sub_4F54E0 (283 bytes)
void sub_4F54E0()
{
}

// STUB: 0x4F5600 sub_4F5600 (261 bytes)
void sub_4F5600()
{
}

// STUB: 0x4F5710 sub_4F5710 (99 bytes)
void sub_4F5710()
{
}

// STUB: 0x4F5780 sub_4F5780 (124 bytes)
void sub_4F5780()
{
}

// STUB: 0x4F5800 sub_4F5800 (150 bytes)
void sub_4F5800()
{
}

// STUB: 0x4F58A0 sub_4F58A0 (88 bytes)
void sub_4F58A0()
{
}

// STUB: 0x4F5900 sub_4F5900 (171 bytes)
void sub_4F5900()
{
}

// STUB: 0x4F59B0 sub_4F59B0 (171 bytes)
void sub_4F59B0()
{
}

// STUB: 0x4F5A60 sub_4F5A60 (65 bytes)
void sub_4F5A60()
{
}

// STUB: 0x4F5AB0 sub_4F5AB0 (207 bytes)
void sub_4F5AB0()
{
}

// STUB: 0x4F5B80 sub_4F5B80 (688 bytes)
void sub_4F5B80()
{
}

// STUB: 0x4F5E30 sub_4F5E30 (1065 bytes)
void sub_4F5E30()
{
}

// STUB: 0x4F6260 sub_4F6260 (199 bytes)
void sub_4F6260()
{
}

// STUB: 0x4F6330 sub_4F6330 (199 bytes)
void sub_4F6330()
{
}

// STUB: 0x4F6400 sub_4F6400 (114 bytes)
void sub_4F6400()
{
}

// STUB: 0x4F6480 sub_4F6480 (7 bytes)
void sub_4F6480()
{
}

// STUB: 0x4F6490 sub_4F6490 (97 bytes)
void sub_4F6490()
{
}

// STUB: 0x4F6500 sub_4F6500 (97 bytes)
void sub_4F6500()
{
}

// STUB: 0x4F6570 sub_4F6570 (97 bytes)
void sub_4F6570()
{
}

// STUB: 0x4F65E0 sub_4F65E0 (97 bytes)
void sub_4F65E0()
{
}

// STUB: 0x4F6650 sub_4F6650 (97 bytes)
void sub_4F6650()
{
}

// STUB: 0x4F66C0 sub_4F66C0 (97 bytes)
void sub_4F66C0()
{
}

// STUB: 0x4F6730 sub_4F6730 (133 bytes)
void sub_4F6730()
{
}

// STUB: 0x4F67C0 sub_4F67C0 (66 bytes)
void sub_4F67C0()
{
}

// STUB: 0x4F6810 sub_4F6810 (113 bytes)
void sub_4F6810()
{
}

// STUB: 0x4F6890 sub_4F6890 (116 bytes)
void sub_4F6890()
{
}

// STUB: 0x4F6910 sub_4F6910 (193 bytes)
void sub_4F6910()
{
}

// STUB: 0x4F6BF0 sub_4F6BF0 (121 bytes)
void sub_4F6BF0()
{
}

// STUB: 0x4F6C70 sub_4F6C70 (210 bytes)
void sub_4F6C70()
{
}

// STUB: 0x4F6E20 sub_4F6E20 (68 bytes)
void sub_4F6E20()
{
}

// STUB: 0x4F6E70 sub_4F6E70 (309 bytes)
void sub_4F6E70()
{
}

// STUB: 0x4F6FB0 sub_4F6FB0 (271 bytes)
void sub_4F6FB0()
{
}

// STUB: 0x4F70C0 sub_4F70C0 (334 bytes)
void sub_4F70C0()
{
}

// STUB: 0x4F7210 sub_4F7210 (93 bytes)
void sub_4F7210()
{
}

// STUB: 0x4F7270 sub_4F7270 (88 bytes)
void sub_4F7270()
{
}

// STUB: 0x4F72D0 sub_4F72D0 (43 bytes)
void sub_4F72D0()
{
}

// STUB: 0x4F7300 sub_4F7300 (37 bytes)
void sub_4F7300()
{
}

// STUB: 0x4F7325 sub_4F7325 (5 bytes)
void sub_4F7325()
{
}

// STUB: 0x4F7450 sub_4F7450 (149 bytes)
void sub_4F7450()
{
}

// STUB: 0x4F74F0 sub_4F74F0 (176 bytes)
void sub_4F74F0()
{
}

// STUB: 0x4F75A0 sub_4F75A0 (176 bytes)
void sub_4F75A0()
{
}

// STUB: 0x4F7650 sub_4F7650 (164 bytes)
void sub_4F7650()
{
}

// STUB: 0x4F7700 sub_4F7700 (160 bytes)
void sub_4F7700()
{
}

// STUB: 0x4F77A0 sub_4F77A0 (160 bytes)
void sub_4F77A0()
{
}

// STUB: 0x4F7840 sub_4F7840 (129 bytes)
void sub_4F7840()
{
}

// STUB: 0x4F78D0 sub_4F78D0 (113 bytes)
void sub_4F78D0()
{
}

// STUB: 0x4F7950 sub_4F7950 (29 bytes)
void sub_4F7950()
{
}

// STUB: 0x4F7970 sub_4F7970 (152 bytes)
void sub_4F7970()
{
}

// STUB: 0x4F7A10 sub_4F7A10 (205 bytes)
void sub_4F7A10()
{
}

// STUB: 0x4F7AE0 sub_4F7AE0 (607 bytes)
void sub_4F7AE0()
{
}

// STUB: 0x4F7D40 sub_4F7D40 (251 bytes)
void sub_4F7D40()
{
}

// STUB: 0x4F7E40 sub_4F7E40 (204 bytes)
void sub_4F7E40()
{
}

// STUB: 0x4F7F10 sub_4F7F10 (217 bytes)
void sub_4F7F10()
{
}

// STUB: 0x4F7FF0 sub_4F7FF0 (222 bytes)
void sub_4F7FF0()
{
}

// STUB: 0x4F80D0 sub_4F80D0 (205 bytes)
void sub_4F80D0()
{
}

// STUB: 0x4F81A0 sub_4F81A0 (114 bytes)
void sub_4F81A0()
{
}

// STUB: 0x4F8220 sub_4F8220 (114 bytes)
void sub_4F8220()
{
}

// STUB: 0x4F82A0 sub_4F82A0 (97 bytes)
void sub_4F82A0()
{
}

// STUB: 0x4F8310 sub_4F8310 (43 bytes)
void sub_4F8310()
{
}

// STUB: 0x4F8340 sub_4F8340 (388 bytes)
void sub_4F8340()
{
}

// STUB: 0x4F84D0 sub_4F84D0 (198 bytes)
void sub_4F84D0()
{
}

// STUB: 0x4F85A0 sub_4F85A0 (26 bytes)
void sub_4F85A0()
{
}

// STUB: 0x4F85C0 sub_4F85C0 (99 bytes)
void sub_4F85C0()
{
}

// STUB: 0x4F8630 sub_4F8630 (112 bytes)
void sub_4F8630()
{
}

// STUB: 0x4F86A0 sub_4F86A0 (115 bytes)
void sub_4F86A0()
{
}

// STUB: 0x4F8720 sub_4F8720 (319 bytes)
void sub_4F8720()
{
}

// STUB: 0x4F8860 sub_4F8860 (180 bytes)
void sub_4F8860()
{
}

// STUB: 0x4F8920 sub_4F8920 (91 bytes)
void sub_4F8920()
{
}

// STUB: 0x4F8980 sub_4F8980 (189 bytes)
void sub_4F8980()
{
}

// STUB: 0x4F8A40 sub_4F8A40 (691 bytes)
void sub_4F8A40()
{
}

// STUB: 0x4F8D00 sub_4F8D00 (189 bytes)
void sub_4F8D00()
{
}

// STUB: 0x4F8DC0 sub_4F8DC0 (724 bytes)
void sub_4F8DC0()
{
}

// STUB: 0x4F90A0 sub_4F90A0 (158 bytes)
void sub_4F90A0()
{
}

// STUB: 0x4F9140 sub_4F9140 (604 bytes)
void sub_4F9140()
{
}

// STUB: 0x4F93A0 sub_4F93A0 (90 bytes)
void sub_4F93A0()
{
}

// STUB: 0x4F9400 sub_4F9400 (395 bytes)
void sub_4F9400()
{
}

// STUB: 0x4F9590 sub_4F9590 (484 bytes)
void sub_4F9590()
{
}

// STUB: 0x4F9780 sub_4F9780 (301 bytes)
void sub_4F9780()
{
}

// STUB: 0x4F98B0 sub_4F98B0 (212 bytes)
void sub_4F98B0()
{
}

// STUB: 0x4F9990 sub_4F9990 (118 bytes)
void sub_4F9990()
{
}

// STUB: 0x4F9A10 sub_4F9A10 (21 bytes)
void sub_4F9A10()
{
}

// STUB: 0x4F9A30 sub_4F9A30 (109 bytes)
void sub_4F9A30()
{
}

// STUB: 0x4F9AA0 sub_4F9AA0 (224 bytes)
void sub_4F9AA0()
{
}

// STUB: 0x4F9B80 sub_4F9B80 (559 bytes)
void sub_4F9B80()
{
}

// STUB: 0x4F9DB0 sub_4F9DB0 (431 bytes)
void sub_4F9DB0()
{
}

// STUB: 0x4F9F60 sub_4F9F60 (311 bytes)
void sub_4F9F60()
{
}

// STUB: 0x4FA0A0 sub_4FA0A0 (97 bytes)
void sub_4FA0A0()
{
}

// STUB: 0x4FA110 sub_4FA110 (7 bytes)
void sub_4FA110()
{
}

// STUB: 0x4FA120 sub_4FA120 (271 bytes)
void sub_4FA120()
{
}

// STUB: 0x4FDC20 AgString::operator+= (184 bytes)
void AgString_operator_plus_eq()
{
}

// STUB: 0x4FDD50 sub_4FDD50 (207 bytes)
void sub_4FDD50()
{
}

// STUB: 0x4FDE20 sub_4FDE20 (26 bytes)
void sub_4FDE20()
{
}

// STUB: 0x4FDE40 sub_4FDE40 (26 bytes)
void sub_4FDE40()
{
}

// STUB: 0x4FDE60 sub_4FDE60 (32 bytes)
void sub_4FDE60()
{
}

// STUB: 0x4FDE80 sub_4FDE80 (92 bytes)
void sub_4FDE80()
{
}

// STUB: 0x4FDEE0 sub_4FDEE0 (211 bytes)
void sub_4FDEE0()
{
}

// STUB: 0x4FDFC0 sub_4FDFC0 (88 bytes)
void sub_4FDFC0()
{
}

// STUB: 0x4FE020 sub_4FE020 (73 bytes)
void sub_4FE020()
{
}

// STUB: 0x4FE070 sub_4FE070 (147 bytes)
void sub_4FE070()
{
}

// STUB: 0x4FE110 sub_4FE110 (580 bytes)
void sub_4FE110()
{
}

// STUB: 0x4FE360 sub_4FE360 (286 bytes)
void sub_4FE360()
{
}

// STUB: 0x4FE480 sub_4FE480 (270 bytes)
void sub_4FE480()
{
}

// STUB: 0x4FE590 sub_4FE590 (36 bytes)
void sub_4FE590()
{
}

// STUB: 0x4FE5C0 sub_4FE5C0 (152 bytes)
void sub_4FE5C0()
{
}

// STUB: 0x4FE6C0 sub_4FE6C0 (105 bytes)
void sub_4FE6C0()
{
}

// STUB: 0x4FE730 sub_4FE730 (188 bytes)
void sub_4FE730()
{
}

// STUB: 0x4FE7F0 sub_4FE7F0 (114 bytes)
void sub_4FE7F0()
{
}

// STUB: 0x4FE870 sub_4FE870 (7 bytes)
void sub_4FE870()
{
}

// STUB: 0x4FE880 sub_4FE880 (97 bytes)
void sub_4FE880()
{
}

// STUB: 0x4FE8F0 sub_4FE8F0 (66 bytes)
void sub_4FE8F0()
{
}

// STUB: 0x4FEA90 sub_4FEA90 (83 bytes)
void sub_4FEA90()
{
}

// STUB: 0x4FEAF0 sub_4FEAF0 (117 bytes)
void sub_4FEAF0()
{
}

// STUB: 0x4FEB70 sub_4FEB70 (222 bytes)
void sub_4FEB70()
{
}

// STUB: 0x4FEC50 sub_4FEC50 (114 bytes)
void sub_4FEC50()
{
}

// STUB: 0x4FECD0 sub_4FECD0 (189 bytes)
void sub_4FECD0()
{
}

// STUB: 0x4FED90 sub_4FED90 (663 bytes)
void sub_4FED90()
{
}

// STUB: 0x4FF030 sub_4FF030 (106 bytes)
void sub_4FF030()
{
}

// STUB: 0x4FF0A0 sub_4FF0A0 (106 bytes)
void sub_4FF0A0()
{
}

// STUB: 0x4FF110 sub_4FF110 (154 bytes)
void sub_4FF110()
{
}

// STUB: 0x4FF1B0 sub_4FF1B0 (105 bytes)
void sub_4FF1B0()
{
}

// STUB: 0x4FF220 sub_4FF220 (1169 bytes)
void sub_4FF220()
{
}

// STUB: 0x4FF6C0 sub_4FF6C0 (20 bytes)
void sub_4FF6C0()
{
}

// STUB: 0x4FF6E0 sub_4FF6E0 (129 bytes)
void sub_4FF6E0()
{
}

// STUB: 0x4FF770 sub_4FF770 (148 bytes)
void sub_4FF770()
{
}

// STUB: 0x4FF810 sub_4FF810 (184 bytes)
void sub_4FF810()
{
}

// STUB: 0x4FF8D0 sub_4FF8D0 (195 bytes)
void sub_4FF8D0()
{
}

// STUB: 0x4FF9A0 sub_4FF9A0 (148 bytes)
void sub_4FF9A0()
{
}

// STUB: 0x4FFA40 sub_4FFA40 (220 bytes)
void sub_4FFA40()
{
}

// STUB: 0x4FFB20 sub_4FFB20 (116 bytes)
void sub_4FFB20()
{
}

// STUB: 0x4FFBA0 sub_4FFBA0 (7 bytes)
void sub_4FFBA0()
{
}

// STUB: 0x4FFBB0 sub_4FFBB0 (183 bytes)
void sub_4FFBB0()
{
}

// STUB: 0x4FFC70 sub_4FFC70 (96 bytes)
void sub_4FFC70()
{
}

// STUB: 0x4FFCD0 sub_4FFCD0 (83 bytes)
void sub_4FFCD0()
{
}

// STUB: 0x4FFD30 sub_4FFD30 (66 bytes)
void sub_4FFD30()
{
}

// STUB: 0x4FFE60 sub_4FFE60 (205 bytes)
void sub_4FFE60()
{
}

// STUB: 0x4FFF30 sub_4FFF30 (114 bytes)
void sub_4FFF30()
{
}

// STUB: 0x4FFFB0 sub_4FFFB0 (869 bytes)
void sub_4FFFB0()
{
}
