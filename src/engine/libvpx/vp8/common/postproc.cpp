// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x4086E0 vp8_post_proc_down_and_across_mb_row_c
// FUNCTION: 0x408970 vp8_mbpost_proc_across_ip_c
// FUNCTION: 0x408B10 vp8_mbpost_proc_down_c
// FUNCTION: 0x408D60 vp8_de_mblock
// FUNCTION: 0x408E00 vp8_deblock
// FUNCTION: 0x408FD0 fillrd
// FUNCTION: 0x4091B0 vp8_plane_add_noise_c
// FUNCTION: 0x409230 vp8_post_proc_frame
#include "../../../../../external/libvpx/vp8/common/postproc.c"
