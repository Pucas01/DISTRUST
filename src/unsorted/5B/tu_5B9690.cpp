extern char g_75E660[];
extern char g_75E670[];

// FUNCTION: 0x5B9690 sub_5B9690
__declspec(naked) void sub_5B9690()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        sub esp, 0x10
        mov eax, dword ptr [ebp + 8]
        mov ecx, 8
        pxor xmm4, xmm4
        L5B96A4:
        movdqa xmm0, xmmword ptr [eax]
        movdqa xmm1, xmmword ptr [eax + 0x10]
        movdqa xmm2, xmmword ptr [eax + 0x20]
        movdqa xmm3, xmmword ptr [eax + 0x30]
        pmaddwd xmm0, xmm0
        pmaddwd xmm1, xmm1
        pmaddwd xmm2, xmm2
        pmaddwd xmm3, xmm3
        paddd xmm0, xmm1
        paddd xmm2, xmm3
        paddd xmm4, xmm0
        paddd xmm4, xmm2
        add eax, 0x40
        dec ecx
        ja L5B96A4
        movdqa xmm3, xmm4
        psrldq xmm4, 8
        paddd xmm4, xmm3
        movdqa xmm3, xmm4
        psrldq xmm4, 4
        paddd xmm4, xmm3
        movd eax, xmm4
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B9702 vp8_get8x8var_sse2
__declspec(naked) void vp8_get8x8var_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push ebx
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        lea ecx, [eax + eax*2]
        prefetcht0 byte ptr [esi]
        prefetcht0 byte ptr [esi + eax]
        prefetcht0 byte ptr [esi + eax*2]
        prefetcht0 byte ptr [esi + ecx]
        lea ebx, [esi + eax*4]
        prefetcht0 byte ptr [ebx]
        prefetcht0 byte ptr [ebx + eax]
        prefetcht0 byte ptr [ebx + eax*2]
        prefetcht0 byte ptr [ebx + ecx]
        lea ecx, [edx + edx*2]
        prefetcht0 byte ptr [edi]
        prefetcht0 byte ptr [edi + edx]
        prefetcht0 byte ptr [edi + edx*2]
        prefetcht0 byte ptr [edi + ecx]
        lea ebx, [edi + edx*4]
        prefetcht0 byte ptr [ebx]
        prefetcht0 byte ptr [ebx + edx]
        prefetcht0 byte ptr [ebx + edx*2]
        prefetcht0 byte ptr [ebx + ecx]
        pxor xmm0, xmm0
        pxor xmm7, xmm7
        pxor xmm6, xmm6
        mov ecx, 0x10
        L5B976D:
        movdqu xmm1, xmmword ptr [esi]
        movdqu xmm2, xmmword ptr [edi]
        prefetcht0 byte ptr [esi + eax*8]
        prefetcht0 byte ptr [edi + edx*8]
        movdqa xmm3, xmm1
        movdqa xmm4, xmm2
        punpcklbw xmm1, xmm0
        punpckhbw xmm3, xmm0
        punpcklbw xmm2, xmm0
        punpckhbw xmm4, xmm0
        psubw xmm1, xmm2
        psubw xmm3, xmm4
        paddw xmm7, xmm1
        pmaddwd xmm1, xmm1
        paddw xmm7, xmm3
        pmaddwd xmm3, xmm3
        paddd xmm6, xmm1
        paddd xmm6, xmm3
        _emit 0x1
        _emit 0xc6
        _emit 0x1
        _emit 0xd7
        sub ecx, 1
        jne L5B976D
        movdqa xmm1, xmm6
        pxor xmm6, xmm6
        pxor xmm5, xmm5
        punpcklwd xmm6, xmm7
        punpckhwd xmm5, xmm7
        psrad xmm5, 0x10
        psrad xmm6, 0x10
        paddd xmm6, xmm5
        movdqa xmm2, xmm1
        punpckldq xmm1, xmm0
        punpckhdq xmm2, xmm0
        movdqa xmm7, xmm6
        paddd xmm1, xmm2
        punpckldq xmm6, xmm0
        punpckhdq xmm7, xmm0
        paddd xmm6, xmm7
        movdqa xmm2, xmm1
        movdqa xmm7, xmm6
        psrldq xmm1, 8
        psrldq xmm6, 8
        paddd xmm7, xmm6
        paddd xmm1, xmm2
        mov eax, dword ptr [ebp + 0x1c]
        mov edi, dword ptr [ebp + 0x18]
        movd dword ptr [eax], xmm7
        movd dword ptr [edi], xmm1
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B982D vp8_get4x4var_mmx
__declspec(naked) void vp8_get4x4var_mmx()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        sub esp, 0x10
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        pxor xmm0, xmm0
        pxor xmm7, xmm7
        movq xmm1, qword ptr [esi]
        movq xmm2, qword ptr [edi]
        punpcklbw xmm1, xmm0
        punpcklbw xmm2, xmm0
        psubsw xmm1, xmm2
        paddw xmm7, xmm1
        pmaddwd xmm1, xmm1
        movq xmm2, qword ptr [esi + eax]
        movq xmm3, qword ptr [edi + edx]
        punpcklbw xmm2, xmm0
        punpcklbw xmm3, xmm0
        psubsw xmm2, xmm3
        paddw xmm7, xmm2
        pmaddwd xmm2, xmm2
        paddd xmm1, xmm2
        movq xmm2, qword ptr [esi + eax*2]
        movq xmm3, qword ptr [edi + edx*2]
        punpcklbw xmm2, xmm0
        punpcklbw xmm3, xmm0
        psubsw xmm2, xmm3
        paddw xmm7, xmm2
        pmaddwd xmm2, xmm2
        paddd xmm1, xmm2
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movq xmm2, qword ptr [esi + eax]
        movq xmm3, qword ptr [edi + edx]
        punpcklbw xmm2, xmm0
        punpcklbw xmm3, xmm0
        psubsw xmm2, xmm3
        paddw xmm7, xmm2
        pmaddwd xmm2, xmm2
        paddd xmm1, xmm2
        movq xmm2, qword ptr [esi + eax*2]
        movq xmm3, qword ptr [edi + edx*2]
        punpcklbw xmm2, xmm0
        punpcklbw xmm3, xmm0
        psubsw xmm2, xmm3
        paddw xmm7, xmm2
        pmaddwd xmm2, xmm2
        paddd xmm1, xmm2
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movq xmm2, qword ptr [esi + eax]
        movq xmm3, qword ptr [edi + edx]
        punpcklbw xmm2, xmm0
        punpcklbw xmm3, xmm0
        psubsw xmm2, xmm3
        paddw xmm7, xmm2
        pmaddwd xmm2, xmm2
        paddd xmm1, xmm2
        movq xmm2, qword ptr [esi + eax*2]
        movq xmm3, qword ptr [edi + edx*2]
        punpcklbw xmm2, xmm0
        punpcklbw xmm3, xmm0
        psubsw xmm2, xmm3
        paddw xmm7, xmm2
        pmaddwd xmm2, xmm2
        paddd xmm1, xmm2
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movq xmm2, qword ptr [esi + eax]
        movq xmm3, qword ptr [edi + edx]
        punpcklbw xmm2, xmm0
        punpcklbw xmm3, xmm0
        psubsw xmm2, xmm3
        paddw xmm7, xmm2
        pmaddwd xmm2, xmm2
        paddd xmm1, xmm2
        movdqa xmm6, xmm7
        punpcklwd xmm6, xmm0
        punpckhwd xmm7, xmm0
        movdqa xmm2, xmm1
        paddw xmm6, xmm7
        punpckldq xmm1, xmm0
        punpckhdq xmm2, xmm0
        movdqa xmm7, xmm6
        paddd xmm1, xmm2
        punpckldq xmm6, xmm0
        punpckhdq xmm7, xmm0
        paddw xmm6, xmm7
        movdqa xmm2, xmm1
        movdqa xmm7, xmm6
        psrldq xmm1, 8
        psrldq xmm6, 8
        paddw xmm7, xmm6
        paddd xmm1, xmm2
        mov eax, dword ptr [ebp + 0x1c]
        mov edi, dword ptr [ebp + 0x18]
        movd edx, xmm7
        movsx ecx, dx
        mov dword ptr [eax], ecx
        movd dword ptr [edi], xmm1
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B99C9 vp8_filter_block2d_bil_var_sse2
__declspec(naked) void vp8_filter_block2d_bil_var_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        pxor xmm6, xmm6
        pxor xmm7, xmm7
        lea esi, [g_75E660]
        movdqa xmm4, xmmword ptr [esi]
        lea ecx, [g_75E670]
        mov eax, dword ptr [ebp + 0x1c]
        cmp eax, 0
        je L5B9AB6
        shl eax, 5
        lea eax, [eax + ecx]
        mov edx, dword ptr [ebp + 0x20]
        cmp edx, 0
        je L5B9B70
        shl edx, 5
        lea edx, [edx + ecx]
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x18]
        pxor xmm0, xmm0
        movq xmm1, qword ptr [esi]
        movq xmm3, qword ptr [esi + 1]
        punpcklbw xmm1, xmm0
        pmullw xmm1, xmmword ptr [eax]
        punpcklbw xmm3, xmm0
        pmullw xmm3, xmmword ptr [eax + 0x10]
        paddw xmm1, xmm3
        paddw xmm1, xmm4
        psraw xmm1, 7
        movdqa xmm5, xmm1
        mov ebx, dword ptr [ebp + 0xc]
        lea esi, [esi + ebx]
        L5B9A49:
        movq xmm1, qword ptr [esi]
        movq xmm3, qword ptr [esi + 1]
        punpcklbw xmm1, xmm0
        pmullw xmm1, xmmword ptr [eax]
        punpcklbw xmm3, xmm0
        pmullw xmm3, xmmword ptr [eax + 0x10]
        paddw xmm1, xmm3
        paddw xmm1, xmm4
        psraw xmm1, 7
        movdqa xmm3, xmm5
        movdqa xmm5, xmm1
        pmullw xmm3, xmmword ptr [edx]
        pmullw xmm1, xmmword ptr [edx + 0x10]
        paddw xmm1, xmm3
        paddw xmm1, xmm4
        psraw xmm1, 7
        movq xmm3, qword ptr [edi]
        punpcklbw xmm3, xmm0
        psubw xmm1, xmm3
        paddw xmm6, xmm1
        pmaddwd xmm1, xmm1
        paddd xmm7, xmm1
        lea esi, [esi + ebx]
        add edi, dword ptr [ebp + 0x14]
        sub ecx, 1
        jne L5B9A49
        jmp L5B9BCF
        L5B9AB6:
        mov edx, dword ptr [ebp + 0x20]
        cmp edx, 0
        je L5B9B30
        shl edx, 5
        lea edx, [edx + ecx]
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x18]
        mov eax, dword ptr [ebp + 0xc]
        pxor xmm0, xmm0
        movq xmm1, qword ptr [esi]
        punpcklbw xmm1, xmm0
        mov ebx, dword ptr [ebp + 0x14]
        lea esi, [esi + eax]
        L5B9AE2:
        movq xmm3, qword ptr [esi]
        punpcklbw xmm3, xmm0
        movdqa xmm5, xmm3
        pmullw xmm1, xmmword ptr [edx]
        pmullw xmm3, xmmword ptr [edx + 0x10]
        paddw xmm1, xmm3
        paddw xmm1, xmm4
        psraw xmm1, 7
        movq xmm3, qword ptr [edi]
        punpcklbw xmm3, xmm0
        psubw xmm1, xmm3
        paddw xmm6, xmm1
        pmaddwd xmm1, xmm1
        paddd xmm7, xmm1
        movdqa xmm1, xmm5
        lea esi, [esi + eax]
        lea edi, [edi + ebx]
        sub ecx, 1
        jne L5B9AE2
        jmp L5B9BCF
        L5B9B30:
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x18]
        mov eax, dword ptr [ebp + 0xc]
        mov ebx, dword ptr [ebp + 0x14]
        pxor xmm0, xmm0
        L5B9B43:
        movq xmm1, qword ptr [esi]
        punpcklbw xmm1, xmm0
        movq xmm2, qword ptr [edi]
        punpcklbw xmm2, xmm0
        psubw xmm1, xmm2
        paddw xmm6, xmm1
        pmaddwd xmm1, xmm1
        paddd xmm7, xmm1
        lea esi, [esi + eax]
        lea edi, [edi + ebx]
        sub ecx, 1
        jne L5B9B43
        jmp L5B9BCF
        L5B9B70:
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x18]
        mov edx, dword ptr [ebp + 0xc]
        pxor xmm0, xmm0
        mov ebx, dword ptr [ebp + 0x14]
        L5B9B83:
        movq xmm1, qword ptr [esi]
        movq xmm3, qword ptr [esi + 1]
        punpcklbw xmm1, xmm0
        pmullw xmm1, xmmword ptr [eax]
        punpcklbw xmm3, xmm0
        pmullw xmm3, xmmword ptr [eax + 0x10]
        paddw xmm1, xmm3
        paddw xmm1, xmm4
        psraw xmm1, 7
        movq xmm3, qword ptr [edi]
        punpcklbw xmm3, xmm0
        psubw xmm1, xmm3
        paddw xmm6, xmm1
        pmaddwd xmm1, xmm1
        paddd xmm7, xmm1
        lea esi, [esi + edx]
        lea edi, [edi + ebx]
        sub ecx, 1
        jne L5B9B83
        jmp L5B9BCF
        L5B9BCF:
        movdq2q mm6, xmm6
        movdq2q mm7, xmm7
        psrldq xmm6, 8
        psrldq xmm7, 8
        movdq2q mm2, xmm6
        movdq2q mm3, xmm7
        paddw mm6, mm2
        paddd mm7, mm3
        pxor mm3, mm3
        pxor mm2, mm2
        punpcklwd mm2, mm6
        punpckhwd mm3, mm6
        paddd mm2, mm3
        _emit 0x0f
        _emit 0x6f
        _emit 0xf2
        psrlq mm6, 0x20
        paddd mm2, mm6
        psrad mm2, 0x10
        _emit 0x0f
        _emit 0x6f
        _emit 0xe7
        psrlq mm4, 0x20
        paddd mm4, mm7
        mov esi, dword ptr [ebp + 0x24]
        mov edi, dword ptr [ebp + 0x28]
        movd dword ptr [esi], mm2
        movd dword ptr [edi], mm4
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B9C27 vp8_half_horiz_vert_variance8x_h_sse2
__declspec(naked) void vp8_half_horiz_vert_variance8x_h_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        pxor xmm6, xmm6
        pxor xmm7, xmm7
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x18]
        mov eax, dword ptr [ebp + 0xc]
        pxor xmm0, xmm0
        movq xmm5, qword ptr [esi]
        movq xmm3, qword ptr [esi + 1]
        pavgb xmm5, xmm3
        add esi, dword ptr [ebp + 0xc]
        L5B9C54:
        movq xmm1, qword ptr [esi]
        movq xmm2, qword ptr [esi + 1]
        pavgb xmm1, xmm2
        pavgb xmm5, xmm1
        punpcklbw xmm5, xmm0
        movq xmm3, qword ptr [edi]
        punpcklbw xmm3, xmm0
        psubw xmm5, xmm3
        paddw xmm6, xmm5
        pmaddwd xmm5, xmm5
        paddd xmm7, xmm5
        movdqa xmm5, xmm1
        add esi, dword ptr [ebp + 0xc]
        add edi, dword ptr [ebp + 0x14]
        sub ecx, 1
        jne L5B9C54
        movdq2q mm6, xmm6
        movdq2q mm7, xmm7
        psrldq xmm6, 8
        psrldq xmm7, 8
        movdq2q mm2, xmm6
        movdq2q mm3, xmm7
        paddw mm6, mm2
        paddd mm7, mm3
        pxor mm3, mm3
        pxor mm2, mm2
        punpcklwd mm2, mm6
        punpckhwd mm3, mm6
        paddd mm2, mm3
        _emit 0x0f
        _emit 0x6f
        _emit 0xf2
        psrlq mm6, 0x20
        paddd mm2, mm6
        psrad mm2, 0x10
        _emit 0x0f
        _emit 0x6f
        _emit 0xe7
        psrlq mm4, 0x20
        paddd mm4, mm7
        mov esi, dword ptr [ebp + 0x1c]
        mov edi, dword ptr [ebp + 0x20]
        movd dword ptr [esi], mm2
        movd dword ptr [edi], mm4
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B9CE7 vp8_half_horiz_vert_variance16x_h_sse2
__declspec(naked) void vp8_half_horiz_vert_variance16x_h_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        pxor xmm6, xmm6
        pxor xmm7, xmm7
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x18]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        pxor xmm0, xmm0
        movdqu xmm5, xmmword ptr [esi]
        movdqu xmm3, xmmword ptr [esi + 1]
        pavgb xmm5, xmm3
        lea esi, [esi + eax]
        L5B9D17:
        movdqu xmm1, xmmword ptr [esi]
        movdqu xmm2, xmmword ptr [esi + 1]
        pavgb xmm1, xmm2
        pavgb xmm5, xmm1
        movdqa xmm4, xmm5
        punpcklbw xmm5, xmm0
        punpckhbw xmm4, xmm0
        movq xmm3, qword ptr [edi]
        punpcklbw xmm3, xmm0
        psubw xmm5, xmm3
        movq xmm3, qword ptr [edi + 8]
        punpcklbw xmm3, xmm0
        psubw xmm4, xmm3
        paddw xmm6, xmm5
        paddw xmm6, xmm4
        pmaddwd xmm5, xmm5
        pmaddwd xmm4, xmm4
        paddd xmm7, xmm5
        paddd xmm7, xmm4
        movdqa xmm5, xmm1
        lea esi, [esi + eax]
        lea edi, [edi + edx]
        sub ecx, 1
        jne L5B9D17
        pxor xmm1, xmm1
        pxor xmm5, xmm5
        punpcklwd xmm0, xmm6
        punpckhwd xmm1, xmm6
        psrad xmm0, 0x10
        psrad xmm1, 0x10
        paddd xmm0, xmm1
        movdqa xmm1, xmm0
        movdqa xmm6, xmm7
        punpckldq xmm6, xmm5
        punpckhdq xmm7, xmm5
        paddd xmm6, xmm7
        punpckldq xmm0, xmm5
        punpckhdq xmm1, xmm5
        paddd xmm0, xmm1
        movdqa xmm7, xmm6
        movdqa xmm1, xmm0
        psrldq xmm7, 8
        psrldq xmm1, 8
        paddd xmm6, xmm7
        paddd xmm0, xmm1
        mov esi, dword ptr [ebp + 0x1c]
        mov edi, dword ptr [ebp + 0x20]
        movd dword ptr [esi], xmm0
        movd dword ptr [edi], xmm6
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B9DDE vp8_half_vert_variance8x_h_sse2
__declspec(naked) void vp8_half_vert_variance8x_h_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        pxor xmm6, xmm6
        pxor xmm7, xmm7
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x18]
        mov eax, dword ptr [ebp + 0xc]
        pxor xmm0, xmm0
        L5B9DFB:
        movq xmm5, qword ptr [esi]
        movq xmm3, qword ptr [esi + eax]
        pavgb xmm5, xmm3
        punpcklbw xmm5, xmm0
        movq xmm3, qword ptr [edi]
        punpcklbw xmm3, xmm0
        psubw xmm5, xmm3
        paddw xmm6, xmm5
        pmaddwd xmm5, xmm5
        paddd xmm7, xmm5
        add esi, dword ptr [ebp + 0xc]
        add edi, dword ptr [ebp + 0x14]
        sub ecx, 1
        jne L5B9DFB
        movdq2q mm6, xmm6
        movdq2q mm7, xmm7
        psrldq xmm6, 8
        psrldq xmm7, 8
        movdq2q mm2, xmm6
        movdq2q mm3, xmm7
        paddw mm6, mm2
        paddd mm7, mm3
        pxor mm3, mm3
        pxor mm2, mm2
        punpcklwd mm2, mm6
        punpckhwd mm3, mm6
        paddd mm2, mm3
        _emit 0x0f
        _emit 0x6f
        _emit 0xf2
        psrlq mm6, 0x20
        paddd mm2, mm6
        psrad mm2, 0x10
        _emit 0x0f
        _emit 0x6f
        _emit 0xe7
        psrlq mm4, 0x20
        paddd mm4, mm7
        mov esi, dword ptr [ebp + 0x1c]
        mov edi, dword ptr [ebp + 0x20]
        movd dword ptr [esi], mm2
        movd dword ptr [edi], mm4
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B9E86 vp8_half_vert_variance16x_h_sse2
__declspec(naked) void vp8_half_vert_variance16x_h_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        pxor xmm6, xmm6
        pxor xmm7, xmm7
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x18]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        movdqu xmm5, xmmword ptr [esi]
        lea esi, [esi + eax]
        pxor xmm0, xmm0
        L5B9EAD:
        movdqu xmm3, xmmword ptr [esi]
        pavgb xmm5, xmm3
        movdqa xmm4, xmm5
        punpcklbw xmm5, xmm0
        punpckhbw xmm4, xmm0
        movq xmm2, qword ptr [edi]
        punpcklbw xmm2, xmm0
        psubw xmm5, xmm2
        movq xmm2, qword ptr [edi + 8]
        punpcklbw xmm2, xmm0
        psubw xmm4, xmm2
        paddw xmm6, xmm5
        paddw xmm6, xmm4
        pmaddwd xmm5, xmm5
        pmaddwd xmm4, xmm4
        paddd xmm7, xmm5
        paddd xmm7, xmm4
        movdqa xmm5, xmm3
        lea esi, [esi + eax]
        lea edi, [edi + edx]
        sub ecx, 1
        jne L5B9EAD
        pxor xmm1, xmm1
        pxor xmm5, xmm5
        punpcklwd xmm0, xmm6
        punpckhwd xmm1, xmm6
        psrad xmm0, 0x10
        psrad xmm1, 0x10
        paddd xmm0, xmm1
        movdqa xmm1, xmm0
        movdqa xmm6, xmm7
        punpckldq xmm6, xmm5
        punpckhdq xmm7, xmm5
        paddd xmm6, xmm7
        punpckldq xmm0, xmm5
        punpckhdq xmm1, xmm5
        paddd xmm0, xmm1
        movdqa xmm7, xmm6
        movdqa xmm1, xmm0
        psrldq xmm7, 8
        psrldq xmm1, 8
        paddd xmm6, xmm7
        paddd xmm0, xmm1
        mov esi, dword ptr [ebp + 0x1c]
        mov edi, dword ptr [ebp + 0x20]
        movd dword ptr [esi], xmm0
        movd dword ptr [edi], xmm6
        pop edi
        pop esi
        pop ebp
        ret
    }
}
