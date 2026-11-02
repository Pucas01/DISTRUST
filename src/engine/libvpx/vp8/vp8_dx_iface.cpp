// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x401260 vp8_init_ctx
// FUNCTION: 0x4012E0 vp8_init
// FUNCTION: 0x401340 vp8_destroy
// FUNCTION: 0x4013A0 vp8_peek_si_internal
// FUNCTION: 0x4014A0 vp8_peek_si
// FUNCTION: 0x4014C0 vp8_get_si
// FUNCTION: 0x4014F0 yuvconfig2image
// FUNCTION: 0x401580 update_fragments
// FUNCTION: 0x401680 vp8_decode
// FUNCTION: 0x401AC0 vp8_get_frame
// FUNCTION: 0x401B90 image2yuvconfig
// FUNCTION: 0x401C00 vp8_get_reference
// FUNCTION: 0x401C50 vp8_set_reference
// FUNCTION: 0x401CA0 vp8_set_postproc
// FUNCTION: 0x401CE0 vp8_set_dbg_color_ref_frame
// FUNCTION: 0x401CF0 vp8_get_last_ref_updates
// FUNCTION: 0x401D40 vp8_get_last_ref_frame
// FUNCTION: 0x401DC0 vp8_get_frame_corrupted
// FUNCTION: 0x401E00 vp8_set_decryptor
// FUNCTION: 0x418750 vpx_codec_vp8_dx
#include "../../../../external/libvpx/vp8/vp8_dx_iface.c"
