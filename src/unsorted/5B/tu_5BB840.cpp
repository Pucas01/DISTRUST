extern char g_75E7A0[];
extern char g_75E7B0[];
extern char g_75E7C0[];
extern char g_75E7D0[];
extern char g_75E7E0[];
extern char g_75E7F0[];
extern char g_75E800[];
extern char g_75E810[];
extern char g_75E820[];
extern char g_75E830[];
extern char g_75E840[];
extern char g_75E850[];
extern char g_75E860[];
extern char g_75E870[];
extern char g_75E890[];
extern char g_75E8A0[];
extern char g_75E8B0[];

// FUNCTION: 0x5BB840 sub_5BB840
__declspec(naked) void sub_5BB840()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0xc]
        mov eax, dword ptr [ebp + 0x10]
        lea ecx, [esi + eax*2]
        movq xmm0, qword ptr [esi]
        movq xmm2, qword ptr [esi + eax]
        lea esi, [esi + eax*2]
        movq xmm1, qword ptr [esi]
        movq xmm3, qword ptr [esi + eax]
        punpcklqdq xmm0, xmm2
        punpcklqdq xmm1, xmm3
        movdqa xmm2, xmm0
        punpckldq xmm0, xmm1
        punpckhdq xmm2, xmm1
        movdqa xmm1, xmm0
        punpckldq xmm0, xmm2
        pshufhw xmm1, xmm1, 0xb1
        pshufhw xmm2, xmm2, 0xb1
        punpckhdq xmm1, xmm2
        movdqa xmm3, xmm0
        paddw xmm0, xmm1
        psubw xmm3, xmm1
        psllw xmm0, 3
        psllw xmm3, 3
        movdqa xmm1, xmm0
        pmaddwd xmm0, xmmword ptr [g_75E7C0]
        pmaddwd xmm1, xmmword ptr [g_75E7F0]
        movdqa xmm4, xmm3
        pmaddwd xmm3, xmmword ptr [g_75E7A0]
        pmaddwd xmm4, xmmword ptr [g_75E7B0]
        paddd xmm3, xmmword ptr [g_75E820]
        paddd xmm4, xmmword ptr [g_75E830]
        psrad xmm3, 0xc
        psrad xmm4, 0xc
        packssdw xmm0, xmm1
        packssdw xmm3, xmm4
        movdqa xmm2, xmm0
        punpcklqdq xmm0, xmm3
        punpckhqdq xmm2, xmm3
        movdqa xmm3, xmm0
        punpcklwd xmm0, xmm2
        punpckhwd xmm3, xmm2
        movdqa xmm2, xmm0
        punpcklwd xmm0, xmm3
        punpckhwd xmm2, xmm3
        movdqa xmm5, xmmword ptr [g_75E800]
        pshufd xmm2, xmm2, 0x4e
        movdqa xmm3, xmm0
        paddw xmm0, xmm2
        psubw xmm3, xmm2
        pshufd xmm0, xmm0, 0xd8
        movdqa xmm2, xmm3
        pshufd xmm3, xmm3, 0xd8
        pshuflw xmm0, xmm0, 0xd8
        pshuflw xmm3, xmm3, 0xd8
        pshufhw xmm0, xmm0, 0xd8
        pshufhw xmm3, xmm3, 0xd8
        movdqa xmm1, xmm0
        pmaddwd xmm0, xmmword ptr [g_75E7C0]
        pmaddwd xmm1, xmmword ptr [g_75E7F0]
        pxor xmm4, xmm4
        paddd xmm0, xmm5
        paddd xmm1, xmm5
        pcmpeqw xmm2, xmm4
        psrad xmm0, 4
        psrad xmm1, 4
        pandn xmm2, xmmword ptr [g_75E7D0]
        movdqa xmm4, xmm3
        pmaddwd xmm3, xmmword ptr [g_75E7A0]
        pmaddwd xmm4, xmmword ptr [g_75E7B0]
        paddd xmm3, xmmword ptr [g_75E840]
        paddd xmm4, xmmword ptr [g_75E850]
        packssdw xmm0, xmm1
        psrad xmm3, 0x10
        psrad xmm4, 0x10
        packssdw xmm3, xmm4
        movdqa xmm1, xmm0
        paddw xmm3, xmm2
        punpcklqdq xmm0, xmm3
        punpckhqdq xmm1, xmm3
        movdqa xmmword ptr [edi], xmm0
        movdqa xmmword ptr [edi + 0x10], xmm1
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BB9D8 sub_5BB9D8
__declspec(naked) void sub_5BB9D8()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0xc]
        mov eax, dword ptr [ebp + 0x10]
        lea ecx, [esi + eax*2]
        movdqa xmm0, xmmword ptr [esi]
        movdqa xmm2, xmmword ptr [esi + eax]
        lea esi, [esi + eax*2]
        movdqa xmm4, xmmword ptr [esi]
        movdqa xmm3, xmmword ptr [esi + eax]
        movdqa xmm1, xmm0
        movdqa xmm5, xmm4
        punpcklwd xmm0, xmm2
        punpckhwd xmm1, xmm2
        punpcklwd xmm4, xmm3
        punpckhwd xmm5, xmm3
        movdqa xmm2, xmm0
        punpckldq xmm0, xmm4
        punpckhdq xmm2, xmm4
        movdqa xmm4, xmm1
        punpckldq xmm4, xmm5
        punpckhdq xmm1, xmm5
        movdqa xmm3, xmm2
        punpckhqdq xmm3, xmm1
        punpcklqdq xmm2, xmm1
        movdqa xmm1, xmm0
        punpcklqdq xmm0, xmm4
        punpckhqdq xmm1, xmm4
        movdqa xmm5, xmm0
        movdqa xmm4, xmm1
        paddw xmm0, xmm3
        paddw xmm1, xmm2
        psubw xmm4, xmm2
        psubw xmm5, xmm3
        psllw xmm5, 3
        psllw xmm4, 3
        psllw xmm0, 3
        psllw xmm1, 3
        movdqa xmm2, xmm0
        paddw xmm0, xmm1
        psubw xmm2, xmm1
        movdqa xmm1, xmm5
        punpcklwd xmm1, xmm4
        punpckhwd xmm5, xmm4
        movdqa xmm3, xmm1
        movdqa xmm4, xmm5
        pmaddwd xmm1, xmmword ptr [g_75E7A0]
        pmaddwd xmm4, xmmword ptr [g_75E7A0]
        pmaddwd xmm3, xmmword ptr [g_75E7B0]
        pmaddwd xmm5, xmmword ptr [g_75E7B0]
        paddd xmm1, xmmword ptr [g_75E820]
        paddd xmm4, xmmword ptr [g_75E820]
        paddd xmm3, xmmword ptr [g_75E830]
        paddd xmm5, xmmword ptr [g_75E830]
        psrad xmm1, 0xc
        psrad xmm4, 0xc
        psrad xmm3, 0xc
        psrad xmm5, 0xc
        packssdw xmm1, xmm4
        packssdw xmm3, xmm5
        movdqa xmm4, xmm0
        movdqa xmm5, xmm2
        punpcklwd xmm0, xmm1
        punpckhwd xmm4, xmm1
        punpcklwd xmm2, xmm3
        punpckhwd xmm5, xmm3
        movdqa xmm1, xmm0
        punpckldq xmm0, xmm2
        punpckhdq xmm1, xmm2
        movdqa xmm2, xmm4
        punpckldq xmm2, xmm5
        punpckhdq xmm4, xmm5
        movdqa xmm3, xmm1
        punpckhqdq xmm3, xmm4
        punpcklqdq xmm1, xmm4
        movdqa xmm4, xmm0
        punpcklqdq xmm0, xmm2
        punpckhqdq xmm4, xmm2
        movdqa xmm5, xmm0
        movdqa xmm2, xmm1
        paddw xmm0, xmm3
        paddw xmm1, xmm4
        psubw xmm4, xmm2
        psubw xmm5, xmm3
        pxor xmm6, xmm6
        pcmpeqw xmm6, xmm5
        pandn xmm6, xmmword ptr [g_75E7E0]
        movdqa xmm2, xmm0
        paddw xmm0, xmm1
        psubw xmm2, xmm1
        paddw xmm0, xmmword ptr [g_75E810]
        paddw xmm2, xmmword ptr [g_75E810]
        psraw xmm0, 4
        psraw xmm2, 4
        movdqa xmm1, xmm5
        punpcklwd xmm1, xmm4
        punpckhwd xmm5, xmm4
        movdqa xmm3, xmm1
        movdqa xmm4, xmm5
        pmaddwd xmm1, xmmword ptr [g_75E7A0]
        pmaddwd xmm4, xmmword ptr [g_75E7A0]
        pmaddwd xmm3, xmmword ptr [g_75E7B0]
        pmaddwd xmm5, xmmword ptr [g_75E7B0]
        paddd xmm1, xmmword ptr [g_75E840]
        paddd xmm4, xmmword ptr [g_75E840]
        paddd xmm3, xmmword ptr [g_75E850]
        paddd xmm5, xmmword ptr [g_75E850]
        psrad xmm1, 0x10
        psrad xmm4, 0x10
        psrad xmm3, 0x10
        psrad xmm5, 0x10
        packssdw xmm1, xmm4
        packssdw xmm3, xmm5
        paddw xmm1, xmm6
        movdqa xmm4, xmm0
        movdqa xmm5, xmm2
        punpcklqdq xmm0, xmm1
        punpckhqdq xmm4, xmm1
        punpcklqdq xmm2, xmm3
        punpckhqdq xmm5, xmm3
        movdqa xmmword ptr [edi], xmm0
        movdqa xmmword ptr [edi + 0x10], xmm2
        movdqa xmmword ptr [edi + 0x20], xmm4
        movdqa xmmword ptr [edi + 0x30], xmm5
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BBC30 sub_5BBC30
__declspec(naked) void sub_5BBC30()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0x14]
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x18]
        pxor mm7, mm7
        movd mm0, dword ptr [esi]
        movd mm1, dword ptr [eax]
        punpcklbw mm0, mm7
        punpcklbw mm1, mm7
        psubw mm0, mm1
        movq qword ptr [edi], mm0
        movd mm0, dword ptr [esi + edx]
        movd mm1, dword ptr [eax + ecx]
        punpcklbw mm0, mm7
        punpcklbw mm1, mm7
        psubw mm0, mm1
        movq qword ptr [edi + ecx*2], mm0
        movd mm0, dword ptr [esi + edx*2]
        movd mm1, dword ptr [eax + ecx*2]
        punpcklbw mm0, mm7
        punpcklbw mm1, mm7
        psubw mm0, mm1
        movq qword ptr [edi + ecx*4], mm0
        lea esi, [esi + edx*2]
        lea ecx, [ecx + ecx*2]
        movd mm0, dword ptr [esi + edx]
        movd mm1, dword ptr [eax + ecx]
        punpcklbw mm0, mm7
        punpcklbw mm1, mm7
        psubw mm0, mm1
        movq qword ptr [edi + ecx*2], mm0
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BBCA2 sub_5BBCA2
__declspec(naked) void sub_5BBCA2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0x14]
        push ebx
        mov ebx, dword ptr [ebp + 0x18]
        pxor mm0, mm0
        mov ecx, 0x10
        L5BBCBF:
        movq mm1, qword ptr [esi]
        movq mm3, qword ptr [eax]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd1
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        punpcklbw mm1, mm0
        punpcklbw mm3, mm0
        punpckhbw mm2, mm0
        punpckhbw mm4, mm0
        psubw mm1, mm3
        psubw mm2, mm4
        movq qword ptr [edi], mm1
        movq qword ptr [edi + 8], mm2
        movq mm1, qword ptr [esi + 8]
        movq mm3, qword ptr [eax + 8]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd1
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        punpcklbw mm1, mm0
        punpcklbw mm3, mm0
        punpckhbw mm2, mm0
        punpckhbw mm4, mm0
        psubw mm1, mm3
        psubw mm2, mm4
        movq qword ptr [edi + 0x10], mm1
        movq qword ptr [edi + 0x18], mm2
        add edi, 0x20
        lea eax, [eax + ebx]
        lea esi, [esi + edx]
        dec ecx
        jne L5BBCBF
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BBD1D sub_5BBD1D
__declspec(naked) void sub_5BBD1D()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        mov eax, dword ptr [ebp + 0x18]
        add edi, 0x200
        mov ecx, 8
        push ebx
        mov ebx, dword ptr [ebp + 0x20]
        pxor mm7, mm7
        L5BBD40:
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [eax]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd8
        _emit 0x0f
        _emit 0x6f
        _emit 0xe1
        punpcklbw mm0, mm7
        punpcklbw mm1, mm7
        punpckhbw mm3, mm7
        punpckhbw mm4, mm7
        psubw mm0, mm1
        psubw mm3, mm4
        movq qword ptr [edi], mm0
        movq qword ptr [edi + 8], mm3
        add edi, 0x10
        _emit 0x1
        _emit 0xd6
        _emit 0x1
        _emit 0xd8
        dec ecx
        jne L5BBD40
        mov esi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0x1c]
        mov ecx, 8
        L5BBD7A:
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [eax]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd8
        _emit 0x0f
        _emit 0x6f
        _emit 0xe1
        punpcklbw mm0, mm7
        punpcklbw mm1, mm7
        punpckhbw mm3, mm7
        punpckhbw mm4, mm7
        psubw mm0, mm1
        psubw mm3, mm4
        movq qword ptr [edi], mm0
        movq qword ptr [edi + 8], mm3
        add edi, 0x10
        _emit 0x1
        _emit 0xd6
        _emit 0x1
        _emit 0xd8
        dec ecx
        jne L5BBD7A
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// STUB: 0x5BBDB0 sub_5BBDB0 (111 bytes)
void sub_5BBDB0()
{
}

// STUB: 0x5C004C sub_5C004C (111 bytes)
void sub_5C004C()
{
}

// FUNCTION: 0x5C21D0 vp8_loop_filter_horizontal_edge_mmx
__declspec(naked) void vp8_loop_filter_horizontal_edge_mmx()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        _emit 0x89
        _emit 0xe0
        and esp, 0xfffffff0
        lea esp, [esp - 0xc]
        push eax
        sub esp, 0x20
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x1c]
        L5C21EB:
        mov edx, dword ptr [ebp + 0x14]
        movq mm7, qword ptr [edx]
        _emit 0x89
        _emit 0xf7
        _emit 0x1
        _emit 0xc7
        movq mm2, qword ptr [edi + eax*2]
        movq mm1, qword ptr [esi + eax*2]
        _emit 0x0f
        _emit 0x6f
        _emit 0xf1
        psubusb mm1, mm2
        psubusb mm2, mm6
        por mm1, mm2
        psubusb mm1, mm7
        movq mm4, qword ptr [esi + eax]
        _emit 0x0f
        _emit 0x6f
        _emit 0xdc
        psubusb mm4, mm6
        psubusb mm6, mm3
        por mm4, mm6
        psubusb mm4, mm7
        por mm1, mm4
        movq mm4, qword ptr [esi]
        _emit 0x0f
        _emit 0x6f
        _emit 0xc4
        psubusb mm4, mm3
        psubusb mm3, mm0
        por mm4, mm3
        movq qword ptr [esp], mm4
        psubusb mm4, mm7
        por mm1, mm4
        neg eax
        movq mm2, qword ptr [esi + eax*4]
        movq mm4, qword ptr [edi + eax*4]
        _emit 0x0f
        _emit 0x6f
        _emit 0xec
        psubusb mm4, mm2
        psubusb mm2, mm5
        por mm4, mm2
        psubusb mm4, mm7
        por mm1, mm4
        movq mm4, qword ptr [esi + eax*2]
        _emit 0x0f
        _emit 0x6f
        _emit 0xdc
        psubusb mm4, mm5
        psubusb mm5, mm3
        por mm4, mm5
        psubusb mm4, mm7
        por mm1, mm4
        _emit 0x0f
        _emit 0x6f
        _emit 0xd3
        movq mm4, qword ptr [esi + eax]
        _emit 0x0f
        _emit 0x6f
        _emit 0xec
        psubusb mm4, mm3
        psubusb mm3, mm5
        por mm4, mm3
        movq qword ptr [esp + 0x10], mm4
        psubusb mm4, mm7
        por mm1, mm4
        movq mm3, qword ptr [edi]
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        psubusb mm3, mm2
        psubusb mm2, mm4
        por mm2, mm3
        pand mm2, qword ptr [g_75E860]
        psrlw mm2, 1
        _emit 0x0f
        _emit 0x6f
        _emit 0xf5
        movq mm3, qword ptr [esi]
        psubusb mm5, mm3
        psubusb mm3, mm6
        por mm5, mm3
        paddusb mm5, mm5
        paddusb mm5, mm2
        mov edx, dword ptr [ebp + 0x10]
        movq mm7, qword ptr [edx]
        psubusb mm5, mm7
        por mm1, mm5
        pxor mm5, mm5
        pcmpeqb mm1, mm5
        mov edx, dword ptr [ebp + 0x18]
        movq mm7, qword ptr [edx]
        movq mm4, qword ptr [esp]
        psubusb mm4, mm7
        movq mm3, qword ptr [esp + 0x10]
        psubusb mm3, mm7
        paddb mm4, mm3
        pcmpeqb mm4, mm5
        pcmpeqb mm5, mm5
        pxor mm4, mm5
        movq mm2, qword ptr [esi + eax*2]
        movq mm7, qword ptr [edi]
        pxor mm2, qword ptr [g_75E870]
        pxor mm7, qword ptr [g_75E870]
        psubsb mm2, mm7
        pand mm2, mm4
        pxor mm6, qword ptr [g_75E870]
        pxor mm0, qword ptr [g_75E870]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd8
        psubsb mm0, mm6
        paddsb mm2, mm0
        paddsb mm2, mm0
        paddsb mm2, mm0
        pand mm1, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xd1
        paddsb mm1, qword ptr [g_75E8A0]
        paddsb mm2, qword ptr [g_75E890]
        pxor mm0, mm0
        pxor mm5, mm5
        punpcklbw mm0, mm2
        punpckhbw mm5, mm2
        psraw mm0, 0xb
        psraw mm5, 0xb
        packsswb mm0, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        pxor mm0, mm0
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        punpcklbw mm0, mm1
        psraw mm0, 0xb
        pxor mm1, mm1
        punpckhbw mm1, mm5
        psraw mm1, 0xb
        _emit 0x0f
        _emit 0x6f
        _emit 0xe8
        packsswb mm0, mm1
        paddsw mm5, qword ptr [g_75E8B0]
        paddsw mm1, qword ptr [g_75E8B0]
        psraw mm5, 1
        psraw mm1, 1
        packsswb mm5, mm1
        pandn mm4, mm5
        paddsb mm6, mm2
        pxor mm6, qword ptr [g_75E870]
        movq qword ptr [esi + eax], mm6
        movq mm6, qword ptr [esi + eax*2]
        pxor mm6, qword ptr [g_75E870]
        paddsb mm6, mm4
        pxor mm6, qword ptr [g_75E870]
        movq qword ptr [esi + eax*2], mm6
        psubsb mm3, mm0
        pxor mm3, qword ptr [g_75E870]
        movq qword ptr [esi], mm3
        psubsb mm7, mm4
        pxor mm7, qword ptr [g_75E870]
        movq qword ptr [edi], mm7
        add esi, 8
        neg eax
        dec ecx
        jne L5C21EB
        add esp, 0x20
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}
