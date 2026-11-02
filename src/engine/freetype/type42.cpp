// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /TC /DFT2_BUILD_LIBRARY /Iexternal/freetype/include
// FUNCTION: 0x586FC0 T42_Get_Interface
// FUNCTION: 0x586FD0 T42_Face_Init
// FUNCTION: 0x5872E0 T42_Face_Done
// FUNCTION: 0x587480 T42_Size_Init
// FUNCTION: 0x5874B0 T42_Size_Select
// FUNCTION: 0x587510 T42_Size_Request
// FUNCTION: 0x587570 T42_Size_Done
// FUNCTION: 0x5875B0 T42_GlyphSlot_Init
// FUNCTION: 0x587600 T42_GlyphSlot_Load
// FUNCTION: 0x587700 T42_GlyphSlot_Done
// FUNCTION: 0x587720 T42_Driver_Init
// FUNCTION: 0x587750 t42_parse_font_matrix
// FUNCTION: 0x587830 t42_parse_encoding
// FUNCTION: 0x587B70 t42_parse_charstrings
// FUNCTION: 0x587FC0 t42_parse_sfnts
// FUNCTION: 0x5882D0 t42_get_name_index
// FUNCTION: 0x5883B0 T42_Open_Face
// FUNCTION: 0x588680 t42_glyphslot_clear
// FUNCTION: 0x588720 t42_is_space
// FUNCTION: 0x588750 t42_load_keyword
// FUNCTION: 0x5887F0 t42_loader_done
// FUNCTION: 0x588880 t42_parse_dict
// FUNCTION: 0x588AA0 t42_parser_init
#include "../../../external/freetype/src/type42/type42.c"
