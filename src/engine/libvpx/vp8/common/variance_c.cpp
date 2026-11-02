// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x40C1C0 vp8_variance16x16_c
// FUNCTION: 0x40C260 vp8_variance8x16_c
// FUNCTION: 0x40C330 vp8_variance16x8_c
// FUNCTION: 0x40C3D0 vp8_variance8x8_c
// FUNCTION: 0x40C4A0 vp8_variance4x4_c
// FUNCTION: 0x40C5B0 vp8_sub_pixel_variance4x4_c
// FUNCTION: 0x40C790 vp8_sub_pixel_variance8x8_c
// FUNCTION: 0x40CA40 vp8_sub_pixel_variance16x16_c
// FUNCTION: 0x40CC20 vp8_sub_pixel_variance16x8_c
// FUNCTION: 0x40CD70 vp8_sub_pixel_variance8x16_c
// FUNCTION: 0x40F950 vp8_variance_halfpixvar16x16_h_c
// FUNCTION: 0x40F970 vp8_variance_halfpixvar16x16_v_c
// FUNCTION: 0x40F990 vp8_variance_halfpixvar16x16_hv_c
#include "../../../../../external/libvpx/vp8/common/variance_c.c"
