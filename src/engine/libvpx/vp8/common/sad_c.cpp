// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x40B600 sad_mx_n_c
// FUNCTION: 0x40B6E0 vp8_sad16x16_c
// FUNCTION: 0x40B700 vp8_sad8x8_c
// FUNCTION: 0x40B720 vp8_sad16x8_c
// FUNCTION: 0x40B740 vp8_sad8x16_c
// FUNCTION: 0x40B760 vp8_sad4x4_c
// FUNCTION: 0x40B780 vp8_sad16x16x3_c
// FUNCTION: 0x40B7F0 vp8_sad16x16x8_c
// FUNCTION: 0x40B8E0 vp8_sad16x8x3_c
// FUNCTION: 0x40B950 vp8_sad16x8x8_c
// FUNCTION: 0x40BA40 vp8_sad8x8x3_c
// FUNCTION: 0x40BAB0 vp8_sad8x8x8_c
// FUNCTION: 0x40BBA0 vp8_sad8x16x3_c
// FUNCTION: 0x40BC10 vp8_sad8x16x8_c
// FUNCTION: 0x40BD00 vp8_sad4x4x3_c
// FUNCTION: 0x40BD70 vp8_sad4x4x8_c
// FUNCTION: 0x40BE60 vp8_sad16x16x4d_c
// FUNCTION: 0x40BEF0 vp8_sad16x8x4d_c
// FUNCTION: 0x40BF80 vp8_sad8x8x4d_c
// FUNCTION: 0x40C010 vp8_sad8x16x4d_c
// FUNCTION: 0x40C0A0 vp8_sad4x4x4d_c
#include "../../../../../external/libvpx/vp8/common/sad_c.c"
