extern char g_75E780[];
extern char g_75E790[];

// FUNCTION: 0x5B9F6B vp8_half_horiz_variance8x_h_sse2
__declspec(naked) void vp8_half_horiz_variance8x_h_sse2()
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
        pxor xmm0, xmm0
        L5B9F85:
        movq xmm5, qword ptr [esi]
        movq xmm3, qword ptr [esi + 1]
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
        jne L5B9F85
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

// FUNCTION: 0x5BA010 vp8_half_horiz_variance16x_h_sse2
__declspec(naked) void vp8_half_horiz_variance16x_h_sse2()
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
        L5BA030:
        movdqu xmm5, xmmword ptr [esi]
        movdqu xmm3, xmmword ptr [esi + 1]
        pavgb xmm5, xmm3
        movdqa xmm1, xmm5
        punpcklbw xmm5, xmm0
        punpckhbw xmm1, xmm0
        movq xmm3, qword ptr [edi]
        punpcklbw xmm3, xmm0
        movq xmm2, qword ptr [edi + 8]
        punpcklbw xmm2, xmm0
        psubw xmm5, xmm3
        psubw xmm1, xmm2
        paddw xmm6, xmm5
        paddw xmm6, xmm1
        pmaddwd xmm5, xmm5
        pmaddwd xmm1, xmm1
        paddd xmm7, xmm5
        paddd xmm7, xmm1
        lea esi, [esi + eax]
        lea edi, [edi + edx]
        sub ecx, 1
        jne L5BA030
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

// FUNCTION: 0x5BA0F0 sub_5BA0F0
__declspec(naked) void sub_5BA0F0()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        movd xmm0, dword ptr [ebp + 0x18]
        pshuflw xmm0, xmm0, 0
        punpcklqdq xmm0, xmm0
        movdqa xmm1, xmmword ptr [g_75E780]
        psubw xmm1, xmm0
        mov eax, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x10]
        mov edi, dword ptr [ebp + 0x14]
        mov ecx, 0x10
        pxor xmm6, xmm6
        L5BA124:
        movdqa xmm2, xmmword ptr [eax]
        movdqa xmm4, xmmword ptr [edx]
        _emit 0x1
        _emit 0xf0
        movdqa xmm3, xmm2
        punpcklbw xmm2, xmm6
        punpckhbw xmm3, xmm6
        pmullw xmm2, xmm0
        pmullw xmm3, xmm0
        movdqa xmm5, xmm4
        punpcklbw xmm4, xmm6
        punpckhbw xmm5, xmm6
        pmullw xmm4, xmm1
        pmullw xmm5, xmm1
        paddw xmm2, xmm4
        paddw xmm3, xmm5
        paddw xmm2, xmmword ptr [g_75E790]
        paddw xmm3, xmmword ptr [g_75E790]
        psrlw xmm2, 4
        psrlw xmm3, 4
        packuswb xmm2, xmm3
        movdqa xmmword ptr [edx], xmm2
        _emit 0x1
        _emit 0xfa
        dec ecx
        jne L5BA124
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BA189 sub_5BA189
__declspec(naked) void sub_5BA189()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        movd xmm0, dword ptr [ebp + 0x18]
        pshuflw xmm0, xmm0, 0
        punpcklqdq xmm0, xmm0
        movdqa xmm1, xmmword ptr [g_75E780]
        psubw xmm1, xmm0
        mov eax, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x10]
        mov edi, dword ptr [ebp + 0x14]
        mov ecx, 8
        pxor xmm4, xmm4
        L5BA1BD:
        movq xmm2, qword ptr [eax]
        movq xmm3, qword ptr [edx]
        _emit 0x1
        _emit 0xf0
        punpcklbw xmm2, xmm4
        pmullw xmm2, xmm0
        punpcklbw xmm3, xmm4
        pmullw xmm3, xmm1
        paddw xmm2, xmm3
        paddw xmm2, xmmword ptr [g_75E790]
        psrlw xmm2, 4
        packuswb xmm2, xmm4
        movq qword ptr [edx], xmm2
        _emit 0x1
        _emit 0xfa
        dec ecx
        jne L5BA1BD
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BA2E0 sub_5BA2E0
__declspec(naked) void sub_5BA2E0()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        movdqa xmm0, xmmword ptr [esi]
        movq xmm1, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        movq xmm2, qword ptr [edi + 0x10]
        punpcklqdq xmm1, xmm3
        punpcklqdq xmm3, xmm2
        movdqa xmm2, xmm1
        mpsadbw xmm1, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm1, xmm2
        paddw xmm1, xmm3
        paddw xmm1, xmm4
        movdqa xmm0, xmmword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        movq xmm2, qword ptr [edi + edx + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        movq xmm2, qword ptr [edi + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        movq xmm2, qword ptr [edi + edx + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        movq xmm2, qword ptr [edi + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        movq xmm2, qword ptr [edi + edx + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        movq xmm2, qword ptr [edi + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        movq xmm2, qword ptr [edi + edx + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        movq xmm2, qword ptr [edi + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        movq xmm2, qword ptr [edi + edx + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        movq xmm2, qword ptr [edi + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        movq xmm2, qword ptr [edi + edx + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        movq xmm2, qword ptr [edi + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        movq xmm2, qword ptr [edi + edx + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        movq xmm2, qword ptr [edi + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        movq xmm2, qword ptr [edi + edx + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        mov edi, dword ptr [ebp + 0x18]
        movdqa xmmword ptr [edi], xmm1
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BA838 sub_5BA838
__declspec(naked) void sub_5BA838()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        movdqa xmm0, xmmword ptr [esi]
        movq xmm1, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        movq xmm2, qword ptr [edi + 0x10]
        punpcklqdq xmm1, xmm3
        punpcklqdq xmm3, xmm2
        movdqa xmm2, xmm1
        mpsadbw xmm1, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm1, xmm2
        paddw xmm1, xmm3
        paddw xmm1, xmm4
        movdqa xmm0, xmmword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        movq xmm2, qword ptr [edi + edx + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        movq xmm2, qword ptr [edi + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        movq xmm2, qword ptr [edi + edx + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        movq xmm2, qword ptr [edi + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        movq xmm2, qword ptr [edi + edx + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        movq xmm2, qword ptr [edi + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        movdqa xmm0, xmmword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        movq xmm2, qword ptr [edi + edx + 0x10]
        punpcklqdq xmm5, xmm3
        punpcklqdq xmm3, xmm2
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        psrldq xmm0, 8
        movdqa xmm4, xmm3
        mpsadbw xmm3, xmm0, 0
        mpsadbw xmm4, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm5, xmm3
        paddw xmm5, xmm4
        paddw xmm1, xmm5
        mov edi, dword ptr [ebp + 0x18]
        movdqa xmmword ptr [edi], xmm1
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BAAF0 sub_5BAAF0
__declspec(naked) void sub_5BAAF0()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        movq xmm0, qword ptr [esi]
        movq xmm1, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        punpcklqdq xmm1, xmm3
        movdqa xmm2, xmm1
        mpsadbw xmm1, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm1, xmm2
        movq xmm0, qword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        punpcklqdq xmm5, xmm3
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        punpcklqdq xmm5, xmm3
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        punpcklqdq xmm5, xmm3
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        punpcklqdq xmm5, xmm3
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        punpcklqdq xmm5, xmm3
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        punpcklqdq xmm5, xmm3
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        punpcklqdq xmm5, xmm3
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        mov edi, dword ptr [ebp + 0x18]
        movdqa xmmword ptr [edi], xmm1
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BAC74 sub_5BAC74
__declspec(naked) void sub_5BAC74()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        movq xmm0, qword ptr [esi]
        movq xmm1, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        punpcklqdq xmm1, xmm3
        movdqa xmm2, xmm1
        mpsadbw xmm1, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm1, xmm2
        movq xmm0, qword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        punpcklqdq xmm5, xmm3
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        punpcklqdq xmm5, xmm3
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        punpcklqdq xmm5, xmm3
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        punpcklqdq xmm5, xmm3
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        punpcklqdq xmm5, xmm3
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        punpcklqdq xmm5, xmm3
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        punpcklqdq xmm5, xmm3
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        punpcklqdq xmm5, xmm3
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        punpcklqdq xmm5, xmm3
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        punpcklqdq xmm5, xmm3
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        punpcklqdq xmm5, xmm3
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        punpcklqdq xmm5, xmm3
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        punpcklqdq xmm5, xmm3
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        punpcklqdq xmm5, xmm3
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        movq xmm0, qword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        punpcklqdq xmm5, xmm3
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm2, xmm5
        mpsadbw xmm5, xmm0, 0
        mpsadbw xmm2, xmm0, 5
        paddw xmm5, xmm2
        paddw xmm1, xmm5
        mov edi, dword ptr [ebp + 0x18]
        movdqa xmmword ptr [edi], xmm1
        pop edi
        pop esi
        pop ebp
        ret
    }
}
