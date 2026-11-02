// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x40D020 vp8_build_intra_predictors_mbuv_x86
// FUNCTION: 0x40D0B0 vp8_build_intra_predictors_mbuv_s_ssse3
// FUNCTION: 0x40D0F0 vp8_build_intra_predictors_mbuv_s_sse2
// FUNCTION: 0x40D130 vp8_build_intra_predictors_mby_x86
// FUNCTION: 0x40D1F0 vp8_build_intra_predictors_mby_s_ssse3
// FUNCTION: 0x40D220 vp8_build_intra_predictors_mby_s_sse2
#include "../../../../../../external/libvpx/vp8/common/x86/recon_wrapper_sse2.c"
