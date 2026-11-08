extern char g_75E9B0[];
extern char g_75E9D0[];
extern char g_75E9E0[];
extern char g_75E9F0[];
extern char g_75EA00[];
extern char g_75EA10[];
extern char g_75EA20[];
extern char g_75EA30[];

// FUNCTION: 0x5C3B5B vp8_intra_pred_y_tm_ssse3
__declspec(naked) void vp8_intra_pred_y_tm_ssse3()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        mov edx, 8
        mov esi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0x18]
        pxor xmm0, xmm0
        movdqa xmm1, xmmword ptr [esi]
        movdqa xmm2, xmm1
        punpcklbw xmm1, xmm0
        punpckhbw xmm2, xmm0
        movd xmm4, dword ptr [esi - 1]
        mov esi, dword ptr [ebp + 0x14]
        punpcklbw xmm4, xmm0
        pshuflw xmm4, xmm4, 0
        punpcklqdq xmm4, xmm4
        psubw xmm1, xmm4
        psubw xmm2, xmm4
        mov edi, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0xc]
        L5C3BA3:
        mov bl, byte ptr [esi]
        movd xmm4, ebx
        mov bl, byte ptr [esi + eax]
        movd xmm5, ebx
        punpcklbw xmm4, xmm0
        punpcklbw xmm5, xmm0
        pshuflw xmm4, xmm4, 0
        pshuflw xmm5, xmm5, 0
        punpcklqdq xmm4, xmm4
        punpcklqdq xmm5, xmm5
        movdqa xmm6, xmm4
        movdqa xmm7, xmm5
        paddw xmm4, xmm1
        paddw xmm6, xmm2
        paddw xmm5, xmm1
        paddw xmm7, xmm2
        packuswb xmm4, xmm6
        packuswb xmm5, xmm7
        movdqa xmmword ptr [edi], xmm4
        movdqa xmmword ptr [edi + ecx], xmm5
        lea esi, [esi + eax*2]
        lea edi, [edi + ecx*2]
        dec edx
        jne L5C3BA3
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C3C01 vp8_intra_pred_y_tm_sse2
__declspec(naked) void vp8_intra_pred_y_tm_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        mov edx, 8
        mov esi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0x18]
        pxor xmm0, xmm0
        movdqa xmm3, xmmword ptr [g_75E9B0]
        movdqa xmm1, xmmword ptr [esi]
        movdqa xmm2, xmm1
        punpcklbw xmm1, xmm0
        punpckhbw xmm2, xmm0
        movd xmm4, dword ptr [esi - 1]
        mov esi, dword ptr [ebp + 0x14]
        pshufb xmm4, xmm3
        psubw xmm1, xmm4
        psubw xmm2, xmm4
        mov edi, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0xc]
        L5C3C49:
        mov bl, byte ptr [esi]
        movd xmm4, ebx
        mov bl, byte ptr [esi + eax]
        movd xmm5, ebx
        pshufb xmm4, xmm3
        pshufb xmm5, xmm3
        movdqa xmm6, xmm4
        movdqa xmm7, xmm5
        paddw xmm4, xmm1
        paddw xmm6, xmm2
        paddw xmm5, xmm1
        paddw xmm7, xmm2
        packuswb xmm4, xmm6
        packuswb xmm5, xmm7
        movdqa xmmword ptr [edi], xmm4
        movdqa xmmword ptr [edi + ecx], xmm5
        lea esi, [esi + eax*2]
        lea edi, [edi + ecx*2]
        dec edx
        jne L5C3C49
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C3C97 vp8_intra_pred_y_ve_sse2
__declspec(naked) void vp8_intra_pred_y_ve_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        mov eax, dword ptr [ebp + 0x10]
        mov esi, 2
        mov edx, dword ptr [ebp + 0xc]
        movdqa xmm1, xmmword ptr [eax]
        mov eax, dword ptr [ebp + 8]
        lea ecx, [edx + edx*2]
        L5C3CB0:
        movdqa xmmword ptr [eax], xmm1
        movdqa xmmword ptr [eax + edx], xmm1
        movdqa xmmword ptr [eax + edx*2], xmm1
        movdqa xmmword ptr [eax + ecx], xmm1
        lea eax, [eax + edx*4]
        movdqa xmmword ptr [eax], xmm1
        movdqa xmmword ptr [eax + edx], xmm1
        movdqa xmmword ptr [eax + edx*2], xmm1
        movdqa xmmword ptr [eax + ecx], xmm1
        lea eax, [eax + edx*4]
        dec esi
        jne L5C3CB0
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C3CE2 vp8_intra_pred_y_ho_sse2
__declspec(naked) void vp8_intra_pred_y_ho_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        mov edx, 8
        mov esi, dword ptr [ebp + 0x14]
        mov eax, dword ptr [ebp + 0x18]
        mov edi, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0xc]
        L5C3CF9:
        mov bl, byte ptr [esi]
        movd xmm0, ebx
        mov bl, byte ptr [esi + eax]
        movd xmm1, ebx
        punpcklbw xmm0, xmm0
        punpcklbw xmm1, xmm1
        pshuflw xmm0, xmm0, 0
        pshuflw xmm1, xmm1, 0
        punpcklqdq xmm0, xmm0
        punpcklqdq xmm1, xmm1
        movdqa xmmword ptr [edi], xmm0
        movdqa xmmword ptr [edi + ecx], xmm1
        lea esi, [esi + eax*2]
        lea edi, [edi + ecx*2]
        dec edx
        jne L5C3CF9
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C3D40 vp8_dequantize_b_impl_mmx
__declspec(naked) void vp8_dequantize_b_impl_mmx()
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
        movq mm1, qword ptr [esi]
        pmullw mm1, qword ptr [eax]
        movq qword ptr [edi], mm1
        movq mm1, qword ptr [esi + 8]
        pmullw mm1, qword ptr [eax + 8]
        movq qword ptr [edi + 8], mm1
        movq mm1, qword ptr [esi + 0x10]
        pmullw mm1, qword ptr [eax + 0x10]
        movq qword ptr [edi + 0x10], mm1
        movq mm1, qword ptr [esi + 0x18]
        pmullw mm1, qword ptr [eax + 0x18]
        movq qword ptr [edi + 0x18], mm1
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C3D7F sub_5C3D7F
__declspec(naked) void sub_5C3D7F()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push edi
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0xc]
        movq mm0, qword ptr [eax]
        pmullw mm0, qword ptr [edx]
        movq mm1, qword ptr [eax + 8]
        pmullw mm1, qword ptr [edx + 8]
        movq mm2, qword ptr [eax + 0x10]
        pmullw mm2, qword ptr [edx + 0x10]
        movq mm3, qword ptr [eax + 0x18]
        pmullw mm3, qword ptr [edx + 0x18]
        mov edx, dword ptr [ebp + 0x10]
        pxor mm7, mm7
        movq qword ptr [eax], mm7
        movq qword ptr [eax + 8], mm7
        movq qword ptr [eax + 0x10], mm7
        movq qword ptr [eax + 0x18], mm7
        mov edi, dword ptr [ebp + 0x14]
        psubw mm0, mm2
        paddw mm2, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        paddw mm2, mm0
        pmulhw mm5, qword ptr [g_75E9D0]
        paddw mm5, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xfb
        pmulhw mm7, qword ptr [g_75E9E0]
        paddw mm7, mm3
        psubw mm7, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        pmulhw mm5, qword ptr [g_75E9E0]
        paddw mm5, mm1
        pmulhw mm3, qword ptr [g_75E9D0]
        paddw mm3, mm4
        paddw mm3, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xf2
        _emit 0x0f
        _emit 0x6f
        _emit 0xe0
        paddw mm2, mm3
        paddw mm4, mm7
        psubw mm0, mm7
        psubw mm6, mm3
        _emit 0x0f
        _emit 0x6f
        _emit 0xca
        _emit 0x0f
        _emit 0x6f
        _emit 0xdc
        punpcklwd mm1, mm0
        punpckhwd mm2, mm0
        punpcklwd mm3, mm6
        punpckhwd mm4, mm6
        _emit 0x0f
        _emit 0x6f
        _emit 0xc1
        _emit 0x0f
        _emit 0x6f
        _emit 0xea
        punpckldq mm0, mm3
        punpckhdq mm1, mm3
        punpckldq mm2, mm4
        punpckhdq mm5, mm4
        _emit 0x0f
        _emit 0x6f
        _emit 0xdd
        psubw mm0, mm2
        paddw mm2, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        paddw mm2, mm0
        pmulhw mm5, qword ptr [g_75E9D0]
        paddw mm5, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xfb
        pmulhw mm7, qword ptr [g_75E9E0]
        paddw mm7, mm3
        psubw mm7, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        pmulhw mm5, qword ptr [g_75E9E0]
        paddw mm5, mm1
        pmulhw mm3, qword ptr [g_75E9D0]
        paddw mm3, mm4
        paddw mm3, mm5
        paddw mm0, qword ptr [g_75E9F0]
        paddw mm2, qword ptr [g_75E9F0]
        _emit 0x0f
        _emit 0x6f
        _emit 0xf2
        _emit 0x0f
        _emit 0x6f
        _emit 0xe0
        paddw mm2, mm3
        paddw mm4, mm7
        psubw mm0, mm7
        psubw mm6, mm3
        psraw mm2, 3
        psraw mm0, 3
        psraw mm4, 3
        psraw mm6, 3
        _emit 0x0f
        _emit 0x6f
        _emit 0xca
        _emit 0x0f
        _emit 0x6f
        _emit 0xdc
        punpcklwd mm1, mm0
        punpckhwd mm2, mm0
        punpcklwd mm3, mm6
        punpckhwd mm4, mm6
        _emit 0x0f
        _emit 0x6f
        _emit 0xc1
        _emit 0x0f
        _emit 0x6f
        _emit 0xea
        punpckldq mm0, mm3
        punpckhdq mm1, mm3
        punpckldq mm2, mm4
        punpckhdq mm5, mm4
        pxor mm7, mm7
        movd mm4, dword ptr [edx]
        punpcklbw mm4, mm7
        paddsw mm0, mm4
        packuswb mm0, mm7
        movd dword ptr [edx], mm0
        movd mm4, dword ptr [edx + edi]
        punpcklbw mm4, mm7
        paddsw mm1, mm4
        packuswb mm1, mm7
        movd dword ptr [edx + edi], mm1
        movd mm4, dword ptr [edx + edi*2]
        punpcklbw mm4, mm7
        paddsw mm2, mm4
        packuswb mm2, mm7
        movd dword ptr [edx + edi*2], mm2
        _emit 0x1
        _emit 0xfa
        movd mm4, dword ptr [edx + edi*2]
        punpcklbw mm4, mm7
        paddsw mm5, mm4
        packuswb mm5, mm7
        movd dword ptr [edx + edi*2], mm5
        pop edi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C3F20 sub_5C3F20
__declspec(naked) void sub_5C3F20()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x10]
        movq xmm0, qword ptr [esi]
        movq xmm1, qword ptr [esi + edx]
        lea esi, [esi + edx*2]
        movq xmm2, qword ptr [esi]
        movq xmm3, qword ptr [esi + edx]
        punpcklwd xmm0, xmm1
        punpcklwd xmm2, xmm3
        movdqa xmm1, xmm0
        punpckldq xmm0, xmm2
        punpckhdq xmm1, xmm2
        movdqa xmm2, xmm0
        paddw xmm0, xmm1
        psubw xmm2, xmm1
        psllw xmm0, 2
        psllw xmm2, 2
        movdqa xmm1, xmm0
        punpcklqdq xmm0, xmm2
        punpckhqdq xmm1, xmm2
        pxor xmm6, xmm6
        movq xmm6, xmm0
        pxor xmm7, xmm7
        pcmpeqw xmm7, xmm6
        paddw xmm7, xmmword ptr [g_75EA00]
        movdqa xmm2, xmm0
        paddw xmm0, xmm1
        psubw xmm2, xmm1
        paddw xmm0, xmm7
        pshuflw xmm3, xmm0, 0xd8
        pshufhw xmm0, xmm3, 0xd8
        pshuflw xmm3, xmm2, 0xd8
        pshufhw xmm1, xmm3, 0xd8
        movdqa xmm2, xmm0
        pmaddwd xmm0, xmmword ptr [g_75EA00]
        pmaddwd xmm2, xmmword ptr [g_75EA10]
        movdqa xmm3, xmm1
        pmaddwd xmm1, xmmword ptr [g_75EA00]
        pmaddwd xmm3, xmmword ptr [g_75EA10]
        pshufd xmm4, xmm0, 0xd8
        pshufd xmm5, xmm2, 0xd8
        pshufd xmm6, xmm1, 0x72
        pshufd xmm7, xmm3, 0x72
        movdqa xmm0, xmm4
        punpcklqdq xmm0, xmm5
        punpckhqdq xmm4, xmm5
        movdqa xmm1, xmm6
        punpcklqdq xmm1, xmm7
        punpckhqdq xmm6, xmm7
        movdqa xmm2, xmm0
        paddd xmm0, xmm4
        psubd xmm2, xmm4
        movdqa xmm3, xmm1
        paddd xmm1, xmm6
        psubd xmm3, xmm6
        pxor xmm4, xmm4
        movdqa xmm5, xmm4
        pcmpgtd xmm4, xmm0
        pcmpgtd xmm5, xmm2
        pand xmm4, xmmword ptr [g_75EA20]
        pand xmm5, xmmword ptr [g_75EA20]
        pxor xmm6, xmm6
        movdqa xmm7, xmm6
        pcmpgtd xmm6, xmm1
        pcmpgtd xmm7, xmm3
        pand xmm6, xmmword ptr [g_75EA20]
        pand xmm7, xmmword ptr [g_75EA20]
        paddd xmm0, xmm4
        paddd xmm2, xmm5
        paddd xmm0, xmmword ptr [g_75EA30]
        paddd xmm2, xmmword ptr [g_75EA30]
        paddd xmm1, xmm6
        paddd xmm3, xmm7
        paddd xmm1, xmmword ptr [g_75EA30]
        paddd xmm3, xmmword ptr [g_75EA30]
        psrad xmm0, 3
        psrad xmm1, 3
        psrad xmm2, 3
        psrad xmm3, 3
        movdqa xmm4, xmm0
        punpcklqdq xmm0, xmm1
        punpckhqdq xmm4, xmm1
        movdqa xmm5, xmm2
        punpckhqdq xmm2, xmm3
        punpcklqdq xmm5, xmm3
        packssdw xmm0, xmm4
        packssdw xmm2, xmm5
        movdqa xmmword ptr [edi], xmm0
        movdqa xmmword ptr [edi + 0x10], xmm2
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C40E0 sub_5C40E0
__declspec(naked) void sub_5C40E0()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        mov ecx, 0x10
        pxor mm4, mm4
        L5C40F3:
        movq mm0, qword ptr [eax]
        movq mm1, qword ptr [eax + 8]
        movq mm2, qword ptr [eax + 0x10]
        movq mm3, qword ptr [eax + 0x18]
        pmaddwd mm0, mm0
        pmaddwd mm1, mm1
        pmaddwd mm2, mm2
        pmaddwd mm3, mm3
        paddd mm4, mm0
        paddd mm4, mm1
        paddd mm4, mm2
        paddd mm4, mm3
        add eax, 0x20
        dec ecx
        ja L5C40F3
        movq qword ptr [esp], mm4
        mov eax, dword ptr [esp]
        mov ecx, dword ptr [esp + 4]
        _emit 0x1
        _emit 0xc8
        add esp, 8
        pop edi
        pop esi
        pop ebp
        ret
    }
}
