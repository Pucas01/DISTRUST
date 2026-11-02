// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /TC /DFT2_BUILD_LIBRARY /Iexternal/freetype/include
// FUNCTION: 0x57A650 CFF_Load_FD_Select
// FUNCTION: 0x57F250 cff_charset_compute_cids
// FUNCTION: 0x57F2E0 cff_charset_load
// FUNCTION: 0x57F770 cff_encoding_load
// FUNCTION: 0x57FAD0 cff_fd_select_get
// FUNCTION: 0x57FB90 cff_font_done
// FUNCTION: 0x57FFA0 cff_font_load
// FUNCTION: 0x580490 cff_index_access_element
// FUNCTION: 0x5805E0 cff_index_done
// FUNCTION: 0x580640 cff_index_get_name
// FUNCTION: 0x5806D0 cff_index_get_pointers
// FUNCTION: 0x580820 cff_index_get_sid_string
// FUNCTION: 0x580870 cff_index_init
// FUNCTION: 0x5809A0 cff_index_load_offsets
// FUNCTION: 0x580B30 cff_index_read_offset
#include "../../../../external/freetype/src/cff/cffload.c"
