// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x4010B0 vpx_codec_dec_init_ver
// FUNCTION: 0x4011D0 vpx_codec_decode
// FUNCTION: 0x401230 vpx_codec_get_frame
#include "../../../../../external/libvpx/vpx/src/vpx_decoder.c"
