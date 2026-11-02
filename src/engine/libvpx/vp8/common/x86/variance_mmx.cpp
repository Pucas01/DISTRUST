// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x40CB90 vp8_variance_halfpixvar16x16_h_mmx
// FUNCTION: 0x40CBB0 vp8_variance_halfpixvar16x16_v_mmx
// FUNCTION: 0x40CBD0 vp8_variance_halfpixvar16x16_hv_mmx
// FUNCTION: 0x40F450 vp8_variance8x8_mmx
// FUNCTION: 0x40F490 vp8_variance4x4_mmx
// FUNCTION: 0x40F560 vp8_variance16x16_mmx
// FUNCTION: 0x40F610 vp8_variance16x8_mmx
// FUNCTION: 0x40F670 vp8_variance8x16_mmx
// FUNCTION: 0x40F6E0 vp8_sub_pixel_variance4x4_mmx
// FUNCTION: 0x40F740 vp8_sub_pixel_variance8x8_mmx
// FUNCTION: 0x40F7A0 vp8_sub_pixel_variance16x16_mmx
// FUNCTION: 0x40F860 vp8_sub_pixel_variance16x8_mmx
// FUNCTION: 0x40F8F0 vp8_sub_pixel_variance8x16_mmx
#include "../../../../../../external/libvpx/vp8/common/x86/variance_mmx.c"
