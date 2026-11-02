// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /TC /DFT2_BUILD_LIBRARY /Iexternal/freetype/include
// FUNCTION: 0x5900C0 ps_hints_apply
// FUNCTION: 0x591100 psh_dimension_quantize_len
// FUNCTION: 0x591540 psh_glyph_compute_extrema
// FUNCTION: 0x591650 psh_glyph_compute_inflections
// FUNCTION: 0x5917A0 psh_glyph_done
// FUNCTION: 0x591800 psh_glyph_find_blue_points
// FUNCTION: 0x591910 psh_glyph_find_strong_points
// FUNCTION: 0x591A40 psh_glyph_init
// FUNCTION: 0x591D40 psh_glyph_interpolate_normal_points
// FUNCTION: 0x591F90 psh_glyph_interpolate_other_points
// FUNCTION: 0x5921D0 psh_glyph_interpolate_strong_points
// FUNCTION: 0x5922D0 psh_glyph_load_points
// FUNCTION: 0x592330 psh_glyph_save_points
// FUNCTION: 0x5926B0 psh_hint_table_activate_mask
// FUNCTION: 0x592AD0 psh_hint_table_done
// FUNCTION: 0x592B40 psh_hint_table_find_strong_points
// FUNCTION: 0x592D20 psh_hint_table_init
// FUNCTION: 0x592E40 psh_hint_table_record
// FUNCTION: 0x592ED0 psh_hint_table_record_mask
#include "../../../../external/freetype/src/pshinter/pshalgo.c"
