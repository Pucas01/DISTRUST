// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x406140 vp8cx_init_de_quantizer
// FUNCTION: 0x406270 vp8_mb_init_dequantizer
// FUNCTION: 0x406340 decode_macroblock
// FUNCTION: 0x406750 yv12_extend_frame_top_c
// FUNCTION: 0x406810 yv12_extend_frame_bottom_c
// FUNCTION: 0x4068D0 yv12_extend_frame_left_right_c
// FUNCTION: 0x4069F0 decode_mb_rows
// FUNCTION: 0x407120 read_available_partition_size
// FUNCTION: 0x4071F0 setup_token_decoder
// FUNCTION: 0x4073D0 init_frame
// FUNCTION: 0x4075F0 vp8_decode_frame
#include "../../../../../external/libvpx/vp8/decoder/decodeframe.c"
