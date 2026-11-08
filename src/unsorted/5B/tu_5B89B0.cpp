extern char g_75E400[];
extern char g_75E410[];
extern char g_75E420[];
extern char g_75E430[];
extern char g_75E440[];
extern char g_75E450[];
extern char g_75E460[];
extern char g_75E5E0[];

// FUNCTION: 0x5B89B0 vp8_filter_block1d8_h6_ssse3
__declspec(naked) void vp8_filter_block1d8_h6_ssse3()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov edx, dword ptr [ebp + 0x1c]
        _emit 0x31
        _emit 0xf6
        shl edx, 4
        movdqa xmm7, xmmword ptr [g_75E450]
        lea eax, [g_75E460]
        _emit 0x1
        _emit 0xd0
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, dword ptr [eax]
        je L5B8A53
        movdqa xmm4, xmmword ptr [eax]
        movdqa xmm5, xmmword ptr [eax + 0x100]
        movdqa xmm6, xmmword ptr [eax + 0x80]
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x18]
        mov edx, dword ptr [ebp + 0x14]
        _emit 0x29
        _emit 0xd7
        L5B89F6:
        movq xmm0, qword ptr [esi - 2]
        movq xmm2, qword ptr [esi + 3]
        punpcklbw xmm0, xmm2
        movdqa xmm1, xmm0
        pmaddubsw xmm0, xmm4
        movdqa xmm2, xmm1
        pshufb xmm1, xmmword ptr [g_75E430]
        pshufb xmm2, xmmword ptr [g_75E440]
        pmaddubsw xmm1, xmm5
        lea edi, [edi + edx]
        pmaddubsw xmm2, xmm6
        lea esi, [esi + eax]
        dec ecx
        paddsw xmm0, xmm1
        paddsw xmm2, xmm7
        paddsw xmm0, xmm2
        psraw xmm0, 7
        packuswb xmm0, xmm0
        movq qword ptr [edi], xmm0
        jne L5B89F6
        pop edi
        pop esi
        pop ebp
        ret
        L5B8A53:
        movdqa xmm5, xmmword ptr [eax + 0x100]
        movdqa xmm6, xmmword ptr [eax + 0x80]
        movdqa xmm3, xmmword ptr [g_75E430]
        movdqa xmm4, xmmword ptr [g_75E440]
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x18]
        mov edx, dword ptr [ebp + 0x14]
        _emit 0x29
        _emit 0xd7
        L5B8A81:
        movq xmm0, qword ptr [esi - 2]
        movq xmm1, qword ptr [esi + 3]
        punpcklbw xmm0, xmm1
        movdqa xmm2, xmm0
        pshufb xmm0, xmm3
        pshufb xmm2, xmm4
        pmaddubsw xmm0, xmm5
        lea edi, [edi + edx]
        pmaddubsw xmm2, xmm6
        lea esi, [esi + eax]
        dec ecx
        paddsw xmm0, xmm7
        paddsw xmm0, xmm2
        psraw xmm0, 7
        packuswb xmm0, xmm0
        movq qword ptr [edi], xmm0
        jne L5B8A81
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B8AC9 vp8_filter_block1d16_h6_ssse3
__declspec(naked) void vp8_filter_block1d16_h6_ssse3()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov edx, dword ptr [ebp + 0x1c]
        _emit 0x31
        _emit 0xf6
        shl edx, 4
        lea eax, [g_75E460]
        _emit 0x1
        _emit 0xd0
        mov edi, dword ptr [ebp + 0x10]
        mov esi, dword ptr [ebp + 8]
        movdqa xmm4, xmmword ptr [eax]
        movdqa xmm5, xmmword ptr [eax + 0x100]
        movdqa xmm6, xmmword ptr [eax + 0x80]
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x18]
        mov edx, dword ptr [ebp + 0x14]
        L5B8B01:
        movq xmm0, qword ptr [esi - 2]
        movq xmm3, qword ptr [esi + 3]
        punpcklbw xmm0, xmm3
        movdqa xmm1, xmm0
        pmaddubsw xmm0, xmm4
        movdqa xmm2, xmm1
        pshufb xmm1, xmmword ptr [g_75E430]
        pshufb xmm2, xmmword ptr [g_75E440]
        movq xmm3, qword ptr [esi + 6]
        pmaddubsw xmm1, xmm5
        movq xmm7, qword ptr [esi + 0xb]
        pmaddubsw xmm2, xmm6
        punpcklbw xmm3, xmm7
        paddsw xmm0, xmm1
        movdqa xmm1, xmm3
        pmaddubsw xmm3, xmm4
        paddsw xmm0, xmm2
        movdqa xmm2, xmm1
        paddsw xmm0, xmmword ptr [g_75E450]
        pshufb xmm1, xmmword ptr [g_75E430]
        pshufb xmm2, xmmword ptr [g_75E440]
        psraw xmm0, 7
        pmaddubsw xmm1, xmm5
        pmaddubsw xmm2, xmm6
        packuswb xmm0, xmm0
        lea esi, [esi + eax]
        paddsw xmm3, xmm1
        paddsw xmm3, xmm2
        paddsw xmm3, xmmword ptr [g_75E450]
        psraw xmm3, 7
        packuswb xmm3, xmm3
        punpcklqdq xmm0, xmm3
        movdqa xmmword ptr [edi], xmm0
        lea edi, [edi + edx]
        dec ecx
        jne L5B8B01
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B8BBA vp8_filter_block1d4_h6_ssse3
__declspec(naked) void vp8_filter_block1d4_h6_ssse3()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov edx, dword ptr [ebp + 0x1c]
        _emit 0x31
        _emit 0xf6
        shl edx, 4
        lea eax, [g_75E460]
        _emit 0x1
        _emit 0xd0
        movdqa xmm7, xmmword ptr [g_75E450]
        cmp esi, dword ptr [eax]
        je L5B8C62
        movdqa xmm4, xmmword ptr [eax]
        movdqa xmm5, xmmword ptr [eax + 0x100]
        movdqa xmm6, xmmword ptr [eax + 0x80]
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x18]
        mov edx, dword ptr [ebp + 0x14]
        L5B8C02:
        movdqu xmm0, xmmword ptr [esi - 2]
        movdqa xmm1, xmm0
        pshufb xmm0, xmmword ptr [g_75E400]
        movdqa xmm2, xmm1
        pshufb xmm1, xmmword ptr [g_75E410]
        pmaddubsw xmm0, xmm4
        pshufb xmm2, xmmword ptr [g_75E420]
        pmaddubsw xmm1, xmm5
        pmaddubsw xmm2, xmm6
        lea esi, [esi + eax]
        paddsw xmm0, xmm1
        paddsw xmm0, xmm7
        pxor xmm1, xmm1
        paddsw xmm0, xmm2
        psraw xmm0, 7
        packuswb xmm0, xmm0
        movd dword ptr [edi], xmm0
        _emit 0x1
        _emit 0xd7
        dec ecx
        jne L5B8C02
        pop edi
        pop esi
        pop ebp
        ret
        L5B8C62:
        movdqa xmm5, xmmword ptr [eax + 0x100]
        movdqa xmm6, xmmword ptr [eax + 0x80]
        movdqa xmm0, xmmword ptr [g_75E410]
        movdqa xmm3, xmmword ptr [g_75E420]
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x18]
        mov edx, dword ptr [ebp + 0x14]
        L5B8C91:
        movdqu xmm1, xmmword ptr [esi - 2]
        movdqa xmm2, xmm1
        pshufb xmm1, xmm0
        pshufb xmm2, xmm3
        pmaddubsw xmm1, xmm5
        pmaddubsw xmm2, xmm6
        lea esi, [esi + eax]
        paddsw xmm1, xmm7
        paddsw xmm1, xmm2
        psraw xmm1, 7
        packuswb xmm1, xmm1
        movd dword ptr [edi], xmm1
        _emit 0x1
        _emit 0xd7
        dec ecx
        jne L5B8C91
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B8CCF vp8_filter_block1d16_v6_ssse3
__declspec(naked) void vp8_filter_block1d16_v6_ssse3()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov edx, dword ptr [ebp + 0x1c]
        _emit 0x31
        _emit 0xf6
        shl edx, 4
        lea eax, [g_75E460]
        _emit 0x1
        _emit 0xd0
        cmp esi, dword ptr [eax]
        je L5B8DD3
        movdqa xmm5, xmmword ptr [eax]
        movdqa xmm6, xmmword ptr [eax + 0x100]
        movdqa xmm7, xmmword ptr [eax + 0x80]
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0xc]
        mov edi, dword ptr [ebp + 0x10]
        _emit 0x89
        _emit 0xf0
        mov ecx, dword ptr [ebp + 0x18]
        _emit 0x1
        _emit 0xd0
        L5B8D10:
        movq xmm1, qword ptr [esi]
        movq xmm2, qword ptr [esi + edx]
        movq xmm3, qword ptr [esi + edx*2]
        movq xmm4, qword ptr [eax + edx*2]
        movq xmm0, qword ptr [esi + edx*4]
        punpcklbw xmm2, xmm4
        punpcklbw xmm3, xmm0
        movq xmm0, qword ptr [eax + edx*4]
        pmaddubsw xmm3, xmm6
        punpcklbw xmm1, xmm0
        pmaddubsw xmm2, xmm7
        pmaddubsw xmm1, xmm5
        paddsw xmm2, xmm3
        paddsw xmm2, xmm1
        paddsw xmm2, xmmword ptr [g_75E450]
        psraw xmm2, 7
        packuswb xmm2, xmm2
        movq qword ptr [edi], xmm2
        movq xmm1, qword ptr [esi + 8]
        movq xmm2, qword ptr [esi + edx + 8]
        movq xmm3, qword ptr [esi + edx*2 + 8]
        movq xmm4, qword ptr [eax + edx*2 + 8]
        movq xmm0, qword ptr [esi + edx*4 + 8]
        punpcklbw xmm2, xmm4
        punpcklbw xmm3, xmm0
        movq xmm0, qword ptr [eax + edx*4 + 8]
        pmaddubsw xmm3, xmm6
        punpcklbw xmm1, xmm0
        pmaddubsw xmm2, xmm7
        pmaddubsw xmm1, xmm5
        _emit 0x1
        _emit 0xd6
        _emit 0x1
        _emit 0xd0
        paddsw xmm2, xmm3
        paddsw xmm2, xmm1
        paddsw xmm2, xmmword ptr [g_75E450]
        psraw xmm2, 7
        packuswb xmm2, xmm2
        movq qword ptr [edi + 8], xmm2
        add edi, dword ptr [ebp + 0x14]
        dec ecx
        jne L5B8D10
        pop edi
        pop esi
        pop ebp
        ret
        L5B8DD3:
        movdqa xmm6, xmmword ptr [eax + 0x100]
        movdqa xmm7, xmmword ptr [eax + 0x80]
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0xc]
        mov edi, dword ptr [ebp + 0x10]
        _emit 0x89
        _emit 0xf0
        mov ecx, dword ptr [ebp + 0x18]
        _emit 0x1
        _emit 0xd0
        L5B8DF3:
        movq xmm2, qword ptr [esi + edx]
        movq xmm3, qword ptr [esi + edx*2]
        movq xmm4, qword ptr [eax + edx*2]
        movq xmm0, qword ptr [esi + edx*4]
        punpcklbw xmm2, xmm4
        punpcklbw xmm3, xmm0
        pmaddubsw xmm3, xmm6
        pmaddubsw xmm2, xmm7
        movq xmm5, qword ptr [esi + edx + 8]
        movq xmm1, qword ptr [esi + edx*2 + 8]
        movq xmm4, qword ptr [eax + edx*2 + 8]
        movq xmm0, qword ptr [esi + edx*4 + 8]
        paddsw xmm2, xmmword ptr [g_75E450]
        paddsw xmm2, xmm3
        psraw xmm2, 7
        packuswb xmm2, xmm2
        punpcklbw xmm5, xmm4
        punpcklbw xmm1, xmm0
        pmaddubsw xmm1, xmm6
        pmaddubsw xmm5, xmm7
        movdqa xmm4, xmmword ptr [g_75E450]
        _emit 0x1
        _emit 0xd6
        _emit 0x1
        _emit 0xd0
        paddsw xmm5, xmm1
        paddsw xmm5, xmm4
        psraw xmm5, 7
        packuswb xmm5, xmm5
        punpcklqdq xmm2, xmm5
        movdqa xmmword ptr [edi], xmm2
        add edi, dword ptr [ebp + 0x14]
        dec ecx
        jne L5B8DF3
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B8E8B vp8_filter_block1d8_v6_ssse3
__declspec(naked) void vp8_filter_block1d8_v6_ssse3()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov edx, dword ptr [ebp + 0x1c]
        _emit 0x31
        _emit 0xf6
        shl edx, 4
        lea eax, [g_75E460]
        _emit 0x1
        _emit 0xd0
        mov edx, dword ptr [ebp + 0xc]
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x18]
        cmp esi, dword ptr [eax]
        je L5B8F33
        movdqa xmm5, xmmword ptr [eax]
        movdqa xmm6, xmmword ptr [eax + 0x100]
        movdqa xmm7, xmmword ptr [eax + 0x80]
        mov esi, dword ptr [ebp + 8]
        _emit 0x89
        _emit 0xf0
        _emit 0x1
        _emit 0xd0
        L5B8ECC:
        movq xmm1, qword ptr [esi]
        movq xmm2, qword ptr [esi + edx]
        movq xmm3, qword ptr [esi + edx*2]
        movq xmm4, qword ptr [eax + edx*2]
        movq xmm0, qword ptr [esi + edx*4]
        punpcklbw xmm2, xmm4
        punpcklbw xmm3, xmm0
        movq xmm0, qword ptr [eax + edx*4]
        movdqa xmm4, xmmword ptr [g_75E450]
        pmaddubsw xmm3, xmm6
        punpcklbw xmm1, xmm0
        pmaddubsw xmm2, xmm7
        pmaddubsw xmm1, xmm5
        _emit 0x1
        _emit 0xd6
        _emit 0x1
        _emit 0xd0
        paddsw xmm2, xmm3
        paddsw xmm2, xmm1
        paddsw xmm2, xmm4
        psraw xmm2, 7
        packuswb xmm2, xmm2
        movq qword ptr [edi], xmm2
        add edi, dword ptr [ebp + 0x14]
        dec ecx
        jne L5B8ECC
        pop edi
        pop esi
        pop ebp
        ret
        L5B8F33:
        movdqa xmm6, xmmword ptr [eax + 0x100]
        movdqa xmm7, xmmword ptr [eax + 0x80]
        movdqa xmm5, xmmword ptr [g_75E450]
        mov esi, dword ptr [ebp + 8]
        _emit 0x89
        _emit 0xf0
        _emit 0x1
        _emit 0xd0
        L5B8F52:
        movq xmm2, qword ptr [esi + edx]
        movq xmm3, qword ptr [esi + edx*2]
        movq xmm4, qword ptr [eax + edx*2]
        movq xmm0, qword ptr [esi + edx*4]
        punpcklbw xmm2, xmm4
        punpcklbw xmm3, xmm0
        pmaddubsw xmm3, xmm6
        pmaddubsw xmm2, xmm7
        _emit 0x1
        _emit 0xd6
        _emit 0x1
        _emit 0xd0
        paddsw xmm2, xmm3
        paddsw xmm2, xmm5
        psraw xmm2, 7
        packuswb xmm2, xmm2
        movq qword ptr [edi], xmm2
        add edi, dword ptr [ebp + 0x14]
        dec ecx
        jne L5B8F52
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B8F9B vp8_filter_block1d4_v6_ssse3
__declspec(naked) void vp8_filter_block1d4_v6_ssse3()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov edx, dword ptr [ebp + 0x1c]
        _emit 0x31
        _emit 0xf6
        shl edx, 4
        lea eax, [g_75E460]
        _emit 0x1
        _emit 0xd0
        mov edx, dword ptr [ebp + 0xc]
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x18]
        cmp esi, dword ptr [eax]
        je L5B9029
        movq mm5, qword ptr [eax]
        movq mm6, qword ptr [eax + 0x100]
        movq mm7, qword ptr [eax + 0x80]
        mov esi, dword ptr [ebp + 8]
        _emit 0x89
        _emit 0xf0
        _emit 0x1
        _emit 0xd0
        L5B8FD5:
        movd mm1, dword ptr [esi]
        movd mm2, dword ptr [esi + edx]
        movd mm3, dword ptr [esi + edx*2]
        movd mm4, dword ptr [eax + edx*2]
        movd mm0, dword ptr [esi + edx*4]
        punpcklbw mm2, mm4
        punpcklbw mm3, mm0
        movd mm0, dword ptr [eax + edx*4]
        movq mm4, qword ptr [g_75E450]
        pmaddubsw mm3, mm6
        punpcklbw mm1, mm0
        pmaddubsw mm2, mm7
        pmaddubsw mm1, mm5
        _emit 0x1
        _emit 0xd6
        _emit 0x1
        _emit 0xd0
        paddsw mm2, mm3
        paddsw mm2, mm1
        paddsw mm2, mm4
        psraw mm2, 7
        packuswb mm2, mm2
        movd dword ptr [edi], mm2
        add edi, dword ptr [ebp + 0x14]
        dec ecx
        jne L5B8FD5
        pop edi
        pop esi
        pop ebp
        ret
        L5B9029:
        movq mm6, qword ptr [eax + 0x100]
        movq mm7, qword ptr [eax + 0x80]
        movq mm5, qword ptr [g_75E450]
        mov esi, dword ptr [ebp + 8]
        _emit 0x89
        _emit 0xf0
        _emit 0x1
        _emit 0xd0
        L5B9045:
        movd mm2, dword ptr [esi + edx]
        movd mm3, dword ptr [esi + edx*2]
        movd mm4, dword ptr [eax + edx*2]
        movd mm0, dword ptr [esi + edx*4]
        punpcklbw mm2, mm4
        punpcklbw mm3, mm0
        pmaddubsw mm3, mm6
        pmaddubsw mm2, mm7
        _emit 0x1
        _emit 0xd6
        _emit 0x1
        _emit 0xd0
        paddsw mm2, mm3
        paddsw mm2, mm5
        psraw mm2, 7
        packuswb mm2, mm2
        movd dword ptr [edi], mm2
        add edi, dword ptr [ebp + 0x14]
        dec ecx
        jne L5B9045
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B9081 sub_5B9081
__declspec(naked) void sub_5B9081()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        lea ecx, [g_75E5E0]
        mov eax, dword ptr [ebp + 0x10]
        cmp eax, 0
        je L5B91A6
        shl eax, 4
        lea eax, [eax + ecx]
        mov edi, dword ptr [ebp + 0x18]
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0x1c]
        movdqa xmm1, xmmword ptr [eax]
        mov eax, dword ptr [ebp + 0x14]
        cmp eax, 0
        je L5B9269
        shl eax, 4
        lea eax, [eax + ecx]
        lea ecx, [edi + edx*8]
        lea ecx, [ecx + edx*8]
        mov edx, dword ptr [ebp + 0xc]
        movdqa xmm2, xmmword ptr [eax]
        movq xmm3, qword ptr [esi]
        movq xmm5, qword ptr [esi + 1]
        punpcklbw xmm3, xmm5
        movq xmm4, qword ptr [esi + 8]
        movq xmm5, qword ptr [esi + 9]
        lea esi, [esi + edx]
        pmaddubsw xmm3, xmm1
        punpcklbw xmm4, xmm5
        pmaddubsw xmm4, xmm1
        paddw xmm3, xmmword ptr [g_75E450]
        psraw xmm3, 7
        paddw xmm4, xmmword ptr [g_75E450]
        psraw xmm4, 7
        movdqa xmm7, xmm3
        packuswb xmm7, xmm4
        L5B9114:
        movq xmm6, qword ptr [esi]
        movq xmm5, qword ptr [esi + 1]
        punpcklbw xmm6, xmm5
        movq xmm4, qword ptr [esi + 8]
        movq xmm5, qword ptr [esi + 9]
        lea esi, [esi + edx]
        pmaddubsw xmm6, xmm1
        punpcklbw xmm4, xmm5
        pmaddubsw xmm4, xmm1
        paddw xmm6, xmmword ptr [g_75E450]
        psraw xmm6, 7
        paddw xmm4, xmmword ptr [g_75E450]
        psraw xmm4, 7
        packuswb xmm6, xmm4
        movdqa xmm5, xmm7
        punpcklbw xmm5, xmm6
        pmaddubsw xmm5, xmm2
        punpckhbw xmm7, xmm6
        pmaddubsw xmm7, xmm2
        paddw xmm5, xmmword ptr [g_75E450]
        psraw xmm5, 7
        paddw xmm7, xmmword ptr [g_75E450]
        psraw xmm7, 7
        packuswb xmm5, xmm7
        movdqa xmm7, xmm6
        movdqa xmmword ptr [edi], xmm5
        add edi, dword ptr [ebp + 0x1c]
        _emit 0x39
        _emit 0xcf
        jne L5B9114
        jmp L5B9314
        L5B91A6:
        mov eax, dword ptr [ebp + 0x14]
        shl eax, 4
        lea eax, [eax + ecx]
        mov edi, dword ptr [ebp + 0x18]
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0x1c]
        movdqa xmm1, xmmword ptr [eax]
        lea ecx, [edi + edx*8]
        lea ecx, [ecx + edx*8]
        mov eax, dword ptr [ebp + 0xc]
        movq xmm4, qword ptr [esi]
        movq xmm2, qword ptr [esi + 8]
        lea esi, [esi + eax]
        L5B91D1:
        movq xmm3, qword ptr [esi]
        movq xmm5, qword ptr [esi + 8]
        punpcklbw xmm4, xmm3
        punpcklbw xmm2, xmm5
        pmaddubsw xmm4, xmm1
        movq xmm7, qword ptr [esi + eax]
        pmaddubsw xmm2, xmm1
        movq xmm6, qword ptr [esi + eax + 8]
        punpcklbw xmm3, xmm7
        punpcklbw xmm5, xmm6
        pmaddubsw xmm3, xmm1
        paddw xmm4, xmmword ptr [g_75E450]
        pmaddubsw xmm5, xmm1
        paddw xmm2, xmmword ptr [g_75E450]
        psraw xmm4, 7
        psraw xmm2, 7
        packuswb xmm4, xmm2
        paddw xmm3, xmmword ptr [g_75E450]
        movdqa xmmword ptr [edi], xmm4
        paddw xmm5, xmmword ptr [g_75E450]
        psraw xmm3, 7
        psraw xmm5, 7
        packuswb xmm3, xmm5
        movdqa xmm4, xmm7
        movdqa xmmword ptr [edi + edx], xmm3
        lea esi, [esi + eax*2]
        movdqa xmm2, xmm6
        lea edi, [edi + edx*2]
        _emit 0x39
        _emit 0xcf
        jne L5B91D1
        jmp L5B9314
        L5B9269:
        lea ecx, [edi + edx*8]
        lea ecx, [ecx + edx*8]
        mov eax, dword ptr [ebp + 0xc]
        L5B9272:
        movq xmm2, qword ptr [esi]
        movq xmm4, qword ptr [esi + 1]
        punpcklbw xmm2, xmm4
        movq xmm3, qword ptr [esi + 8]
        pmaddubsw xmm2, xmm1
        movq xmm4, qword ptr [esi + 9]
        lea esi, [esi + eax]
        punpcklbw xmm3, xmm4
        pmaddubsw xmm3, xmm1
        movq xmm5, qword ptr [esi]
        paddw xmm2, xmmword ptr [g_75E450]
        movq xmm7, qword ptr [esi + 1]
        movq xmm6, qword ptr [esi + 8]
        psraw xmm2, 7
        punpcklbw xmm5, xmm7
        movq xmm7, qword ptr [esi + 9]
        paddw xmm3, xmmword ptr [g_75E450]
        pmaddubsw xmm5, xmm1
        psraw xmm3, 7
        punpcklbw xmm6, xmm7
        packuswb xmm2, xmm3
        pmaddubsw xmm6, xmm1
        movdqa xmmword ptr [edi], xmm2
        paddw xmm5, xmmword ptr [g_75E450]
        lea edi, [edi + edx]
        psraw xmm5, 7
        paddw xmm6, xmmword ptr [g_75E450]
        psraw xmm6, 7
        packuswb xmm5, xmm6
        lea esi, [esi + eax]
        movdqa xmmword ptr [edi], xmm5
        lea edi, [edi + edx]
        _emit 0x39
        _emit 0xcf
        jne L5B9272
        L5B9314:
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B9318 sub_5B9318
__declspec(naked) void sub_5B9318()
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
        sub esp, 0x90
        lea ecx, [g_75E5E0]
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0xc]
        movdqu xmm0, xmmword ptr [esi]
        lea eax, [edx + edx*2]
        movdqu xmm1, xmmword ptr [esi + edx]
        movdqu xmm2, xmmword ptr [esi + edx*2]
        _emit 0x1
        _emit 0xc6
        movdqu xmm3, xmmword ptr [esi]
        movdqu xmm4, xmmword ptr [esi + edx]
        movdqu xmm5, xmmword ptr [esi + edx*2]
        _emit 0x1
        _emit 0xc6
        movdqu xmm6, xmmword ptr [esi]
        movdqu xmm7, xmmword ptr [esi + edx]
        movdqa xmmword ptr [esp], xmm0
        movdqu xmm0, xmmword ptr [esi + edx*2]
        movdqa xmmword ptr [esp + 0x10], xmm1
        movdqa xmmword ptr [esp + 0x20], xmm2
        movdqa xmmword ptr [esp + 0x30], xmm3
        movdqa xmmword ptr [esp + 0x40], xmm4
        movdqa xmmword ptr [esp + 0x50], xmm5
        movdqa xmmword ptr [esp + 0x60], xmm6
        movdqa xmmword ptr [esp + 0x70], xmm7
        movdqa xmmword ptr [esp + 0x80], xmm0
        mov eax, dword ptr [ebp + 0x10]
        cmp eax, 0
        je L5B9460
        shl eax, 4
        _emit 0x1
        _emit 0xc8
        mov edi, dword ptr [ebp + 0x18]
        mov edx, dword ptr [ebp + 0x1c]
        movdqa xmm0, xmmword ptr [eax]
        mov eax, dword ptr [ebp + 0x14]
        cmp eax, 0
        je L5B95B4
        shl eax, 4
        lea eax, [eax + ecx]
        lea ecx, [edi + edx*8]
        movdqa xmm1, xmmword ptr [eax]
        movdqa xmm3, xmmword ptr [esp]
        movdqa xmm5, xmm3
        psrldq xmm5, 1
        lea esp, [esp + 0x10]
        punpcklbw xmm3, xmm5
        pmaddubsw xmm3, xmm0
        paddw xmm3, xmmword ptr [g_75E450]
        psraw xmm3, 7
        movdqa xmm7, xmm3
        packuswb xmm7, xmm7
        L5B9406:
        movdqa xmm6, xmmword ptr [esp]
        lea esp, [esp + 0x10]
        movdqa xmm5, xmm6
        psrldq xmm5, 1
        punpcklbw xmm6, xmm5
        pmaddubsw xmm6, xmm0
        paddw xmm6, xmmword ptr [g_75E450]
        psraw xmm6, 7
        packuswb xmm6, xmm6
        punpcklbw xmm7, xmm6
        pmaddubsw xmm7, xmm1
        paddw xmm7, xmmword ptr [g_75E450]
        psraw xmm7, 7
        packuswb xmm7, xmm7
        movq qword ptr [edi], xmm7
        lea edi, [edi + edx]
        movdqa xmm7, xmm6
        _emit 0x39
        _emit 0xcf
        jne L5B9406
        jmp L5B9682
        L5B9460:
        mov eax, dword ptr [ebp + 0x14]
        shl eax, 4
        lea eax, [eax + ecx]
        mov edi, dword ptr [ebp + 0x18]
        mov edx, dword ptr [ebp + 0x1c]
        movdqa xmm0, xmmword ptr [eax]
        movq xmm1, qword ptr [esp]
        movq xmm2, qword ptr [esp + 0x10]
        movq xmm3, qword ptr [esp + 0x20]
        punpcklbw xmm1, xmm2
        movq xmm4, qword ptr [esp + 0x30]
        punpcklbw xmm2, xmm3
        movq xmm5, qword ptr [esp + 0x40]
        punpcklbw xmm3, xmm4
        movq xmm6, qword ptr [esp + 0x50]
        punpcklbw xmm4, xmm5
        movq xmm7, qword ptr [esp + 0x60]
        punpcklbw xmm5, xmm6
        pmaddubsw xmm1, xmm0
        pmaddubsw xmm2, xmm0
        pmaddubsw xmm3, xmm0
        pmaddubsw xmm4, xmm0
        pmaddubsw xmm5, xmm0
        punpcklbw xmm6, xmm7
        pmaddubsw xmm6, xmm0
        paddw xmm1, xmmword ptr [g_75E450]
        paddw xmm2, xmmword ptr [g_75E450]
        psraw xmm1, 7
        paddw xmm3, xmmword ptr [g_75E450]
        psraw xmm2, 7
        paddw xmm4, xmmword ptr [g_75E450]
        psraw xmm3, 7
        paddw xmm5, xmmword ptr [g_75E450]
        psraw xmm4, 7
        paddw xmm6, xmmword ptr [g_75E450]
        psraw xmm5, 7
        psraw xmm6, 7
        packuswb xmm1, xmm1
        packuswb xmm2, xmm2
        movq qword ptr [edi], xmm1
        packuswb xmm3, xmm3
        movq qword ptr [edi + edx], xmm2
        packuswb xmm4, xmm4
        movq xmm1, qword ptr [esp + 0x70]
        lea edi, [edi + edx*2]
        movq xmm2, qword ptr [esp + 0x80]
        packuswb xmm5, xmm5
        movq qword ptr [edi], xmm3
        packuswb xmm6, xmm6
        movq qword ptr [edi + edx], xmm4
        lea edi, [edi + edx*2]
        punpcklbw xmm7, xmm1
        movq qword ptr [edi], xmm5
        pmaddubsw xmm7, xmm0
        movq qword ptr [edi + edx], xmm6
        punpcklbw xmm1, xmm2
        pmaddubsw xmm1, xmm0
        paddw xmm7, xmmword ptr [g_75E450]
        psraw xmm7, 7
        paddw xmm1, xmmword ptr [g_75E450]
        psraw xmm1, 7
        packuswb xmm7, xmm7
        packuswb xmm1, xmm1
        lea edi, [edi + edx*2]
        movq qword ptr [edi], xmm7
        movq qword ptr [edi + edx], xmm1
        lea esp, [esp + 0x90]
        jmp L5B9682
        L5B95B4:
        lea ecx, [edi + edx*8]
        L5B95B7:
        movdqa xmm1, xmmword ptr [esp]
        movdqa xmm3, xmmword ptr [esp + 0x10]
        movdqa xmm2, xmm1
        movdqa xmm5, xmmword ptr [esp + 0x20]
        psrldq xmm2, 1
        movdqa xmm7, xmmword ptr [esp + 0x30]
        movdqa xmm4, xmm3
        psrldq xmm4, 1
        movdqa xmm6, xmm5
        psrldq xmm6, 1
        punpcklbw xmm1, xmm2
        pmaddubsw xmm1, xmm0
        punpcklbw xmm3, xmm4
        pmaddubsw xmm3, xmm0
        punpcklbw xmm5, xmm6
        pmaddubsw xmm5, xmm0
        movdqa xmm2, xmm7
        psrldq xmm2, 1
        punpcklbw xmm7, xmm2
        pmaddubsw xmm7, xmm0
        paddw xmm1, xmmword ptr [g_75E450]
        psraw xmm1, 7
        paddw xmm3, xmmword ptr [g_75E450]
        psraw xmm3, 7
        paddw xmm5, xmmword ptr [g_75E450]
        psraw xmm5, 7
        paddw xmm7, xmmword ptr [g_75E450]
        psraw xmm7, 7
        packuswb xmm1, xmm1
        packuswb xmm3, xmm3
        packuswb xmm5, xmm5
        movq qword ptr [edi], xmm1
        packuswb xmm7, xmm7
        movq qword ptr [edi + edx], xmm3
        lea edi, [edi + edx*2]
        movq qword ptr [edi], xmm5
        lea esp, [esp + 0x40]
        movq qword ptr [edi + edx], xmm7
        lea edi, [edi + edx*2]
        _emit 0x39
        _emit 0xcf
        jne L5B95B7
        lea esp, [esp + 0x10]
        L5B9682:
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}
