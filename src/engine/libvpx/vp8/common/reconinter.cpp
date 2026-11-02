// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x409B30 vp8_copy_mem16x16_c
// FUNCTION: 0x409B80 vp8_copy_mem8x8_c
// FUNCTION: 0x409C20 vp8_copy_mem8x4_c
// FUNCTION: 0x409C70 build_inter_predictors4b
// FUNCTION: 0x409D00 build_inter_predictors2b
// FUNCTION: 0x409D90 build_inter_predictors_b
// FUNCTION: 0x409E80 clamp_mv_to_umv_border
// FUNCTION: 0x409F00 clamp_uvmv_to_umv_border
// FUNCTION: 0x409FA0 vp8_build_inter16x16_predictors_mb
// FUNCTION: 0x40A120 build_inter4x4_predictors_mb
// FUNCTION: 0x40A4D0 build_4x4uvmvs
#include "../../../../../external/libvpx/vp8/common/reconinter.c"
