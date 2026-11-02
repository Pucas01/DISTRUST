// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /TC /DFT2_BUILD_LIBRARY /Iexternal/freetype/include
// FUNCTION: 0x5B2B70 FT_Stream_OpenLZW
// FUNCTION: 0x5B2C60 ft_lzw_file_init
// FUNCTION: 0x5B2CF0 ft_lzw_file_io
// FUNCTION: 0x5B2DE0 ft_lzw_file_reset
// FUNCTION: 0x5B2E30 ft_lzw_file_skip_output
// FUNCTION: 0x5B3200 ft_lzw_stream_close
// FUNCTION: 0x5B3250 ft_lzw_stream_io
// FUNCTION: 0x5B3270 ft_lzwstate_done
// FUNCTION: 0x5B3300 ft_lzwstate_get_code
// FUNCTION: 0x5B3420 ft_lzwstate_init
// FUNCTION: 0x5B34B0 ft_lzwstate_io
// FUNCTION: 0x5B37B0 ft_lzwstate_prefix_grow
// FUNCTION: 0x5B3820 ft_lzwstate_stack_grow
#include "../../../external/freetype/src/lzw/ftlzw.c"
