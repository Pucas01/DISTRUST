extern char g_75E980[];
extern char g_75E9A0[];
extern char g_75E9B0[];
extern char g_75E9C0[];

// FUNCTION: 0x5C374B vp8_intra_pred_uv_tm_sse2
__declspec(naked) void vp8_intra_pred_uv_tm_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        mov edx, 4
        mov esi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0x18]
        pxor xmm0, xmm0
        movdqa xmm2, xmmword ptr [g_75E9B0]
        movq xmm1, qword ptr [esi]
        punpcklbw xmm1, xmm0
        movd xmm3, dword ptr [esi - 1]
        mov esi, dword ptr [ebp + 0x14]
        pshufb xmm3, xmm2
        psubw xmm1, xmm3
        mov edi, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0xc]
        L5C3787:
        mov bl, byte ptr [esi]
        movd xmm3, ebx
        mov bl, byte ptr [esi + eax]
        movd xmm5, ebx
        pshufb xmm3, xmm2
        pshufb xmm5, xmm2
        paddw xmm3, xmm1
        paddw xmm5, xmm1
        packuswb xmm3, xmm5
        movq qword ptr [edi], xmm3
        movhps qword ptr [edi + ecx], xmm3
        lea esi, [esi + eax*2]
        lea edi, [edi + ecx*2]
        dec edx
        jne L5C3787
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C37C0 vp8_intra_pred_uv_ve_mmx
__declspec(naked) void vp8_intra_pred_uv_ve_mmx()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        mov eax, dword ptr [ebp + 0x10]
        movq mm1, qword ptr [eax]
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0xc]
        lea ecx, [edx + edx*2]
        movq qword ptr [eax], mm1
        movq qword ptr [eax + edx], mm1
        movq qword ptr [eax + edx*2], mm1
        movq qword ptr [eax + ecx], mm1
        lea eax, [eax + edx*4]
        movq qword ptr [eax], mm1
        movq qword ptr [eax + edx], mm1
        movq qword ptr [eax + edx*2], mm1
        movq qword ptr [eax + ecx], mm1
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C37F5 vp8_intra_pred_uv_ho_ssse3
__declspec(naked) void vp8_intra_pred_uv_ho_ssse3()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        mov edx, 4
        mov esi, dword ptr [ebp + 0x14]
        mov eax, dword ptr [ebp + 0x18]
        mov edi, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0xc]
        L5C380C:
        mov bl, byte ptr [esi]
        movd mm0, ebx
        mov bl, byte ptr [esi + eax]
        movd mm1, ebx
        punpcklbw mm0, mm0
        punpcklbw mm1, mm1
        pshufw mm0, mm0, 0
        pshufw mm1, mm1, 0
        movq qword ptr [edi], mm0
        movq qword ptr [edi + ecx], mm1
        lea esi, [esi + eax*2]
        lea edi, [edi + ecx*2]
        dec edx
        jne L5C380C
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C383A vp8_intra_pred_uv_ho_mmx2
__declspec(naked) void vp8_intra_pred_uv_ho_mmx2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        mov esi, dword ptr [ebp + 0x14]
        mov eax, dword ptr [ebp + 0x18]
        mov edi, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0xc]
        lea edx, [ecx + ecx*2]
        movdqa xmm2, xmmword ptr [g_75E9C0]
        mov bl, byte ptr [esi]
        movd xmm0, ebx
        mov bl, byte ptr [esi + eax]
        movd xmm3, ebx
        mov bl, byte ptr [esi + eax*2]
        movd xmm1, ebx
        lea ebx, [eax + eax*2]
        mov bl, byte ptr [esi + ebx]
        movd xmm4, ebx
        punpcklbw xmm0, xmm3
        punpcklbw xmm1, xmm4
        pshufb xmm0, xmm2
        pshufb xmm1, xmm2
        movq qword ptr [edi], xmm0
        movhps qword ptr [edi + ecx], xmm0
        movq qword ptr [edi + ecx*2], xmm1
        movhps qword ptr [edi + edx], xmm1
        lea esi, [esi + eax*4]
        lea edi, [edi + ecx*4]
        mov bl, byte ptr [esi]
        movd xmm0, ebx
        mov bl, byte ptr [esi + eax]
        movd xmm3, ebx
        mov bl, byte ptr [esi + eax*2]
        movd xmm1, ebx
        lea ebx, [eax + eax*2]
        mov bl, byte ptr [esi + ebx]
        movd xmm4, ebx
        punpcklbw xmm0, xmm3
        punpcklbw xmm1, xmm4
        pshufb xmm0, xmm2
        pshufb xmm1, xmm2
        movq qword ptr [edi], xmm0
        movhps qword ptr [edi + ecx], xmm0
        movq qword ptr [edi + ecx*2], xmm1
        movhps qword ptr [edi + edx], xmm1
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C38E4 vp8_intra_pred_y_dc_sse2
__declspec(naked) void vp8_intra_pred_y_dc_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov edi, dword ptr [ebp + 0x10]
        mov esi, dword ptr [ebp + 0x14]
        mov eax, dword ptr [ebp + 0x18]
        pxor xmm0, xmm0
        movdqa xmm1, xmmword ptr [edi]
        psadbw xmm1, xmm0
        movq xmm2, xmm1
        punpckhqdq xmm1, xmm1
        paddw xmm1, xmm2
        lea edi, [eax + eax*2]
        movzx ecx, byte ptr [esi]
        movzx edx, byte ptr [esi + eax]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + eax*2]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + edi]
        _emit 0x1
        _emit 0xd1
        lea esi, [esi + eax*4]
        movzx edx, byte ptr [esi]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + eax]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + eax*2]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + edi]
        _emit 0x1
        _emit 0xd1
        lea esi, [esi + eax*4]
        movzx edx, byte ptr [esi]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + eax]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + eax*2]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + edi]
        _emit 0x1
        _emit 0xd1
        lea esi, [esi + eax*4]
        movzx edx, byte ptr [esi]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + eax]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + eax*2]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + edi]
        _emit 0x1
        _emit 0xd1
        pextrw edx, xmm1, 0
        lea edx, [edx + ecx + 0x10]
        sar edx, 5
        movd xmm1, edx
        pshuflw xmm1, xmm1, 0
        punpcklqdq xmm1, xmm1
        packuswb xmm1, xmm1
        mov esi, 2
        mov edi, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0xc]
        lea eax, [ecx + ecx*2]
        L5C399B:
        movdqa xmmword ptr [edi], xmm1
        movdqa xmmword ptr [edi + ecx], xmm1
        movdqa xmmword ptr [edi + ecx*2], xmm1
        movdqa xmmword ptr [edi + eax], xmm1
        lea edi, [edi + ecx*4]
        movdqa xmmword ptr [edi], xmm1
        movdqa xmmword ptr [edi + ecx], xmm1
        movdqa xmmword ptr [edi + ecx*2], xmm1
        movdqa xmmword ptr [edi + eax], xmm1
        lea edi, [edi + ecx*4]
        dec esi
        jne L5C399B
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C39CE vp8_intra_pred_y_dctop_sse2
__declspec(naked) void vp8_intra_pred_y_dctop_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        mov ecx, dword ptr [ebp + 0x10]
        pxor xmm0, xmm0
        movdqa xmm1, xmmword ptr [ecx]
        psadbw xmm1, xmm0
        movdqa xmm2, xmm1
        punpckhqdq xmm1, xmm1
        paddw xmm1, xmm2
        paddw xmm1, xmmword ptr [g_75E9A0]
        psraw xmm1, 4
        pshuflw xmm1, xmm1, 0
        punpcklqdq xmm1, xmm1
        packuswb xmm1, xmm1
        mov esi, 2
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0xc]
        lea eax, [ecx + ecx*2]
        L5C3A15:
        movdqa xmmword ptr [edx], xmm1
        movdqa xmmword ptr [edx + ecx], xmm1
        movdqa xmmword ptr [edx + ecx*2], xmm1
        movdqa xmmword ptr [edx + eax], xmm1
        lea edx, [edx + ecx*4]
        movdqa xmmword ptr [edx], xmm1
        movdqa xmmword ptr [edx + ecx], xmm1
        movdqa xmmword ptr [edx + ecx*2], xmm1
        movdqa xmmword ptr [edx + eax], xmm1
        lea edx, [edx + ecx*4]
        dec esi
        jne L5C3A15
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C3A47 vp8_intra_pred_y_dcleft_sse2
__declspec(naked) void vp8_intra_pred_y_dcleft_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 0x14]
        mov eax, dword ptr [ebp + 0x18]
        lea edi, [eax + eax*2]
        movzx ecx, byte ptr [esi]
        movzx edx, byte ptr [esi + eax]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + eax*2]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + edi]
        _emit 0x1
        _emit 0xd1
        lea esi, [esi + eax*4]
        movzx edx, byte ptr [esi]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + eax]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + eax*2]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + edi]
        _emit 0x1
        _emit 0xd1
        lea esi, [esi + eax*4]
        movzx edx, byte ptr [esi]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + eax]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + eax*2]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + edi]
        _emit 0x1
        _emit 0xd1
        lea esi, [esi + eax*4]
        movzx edx, byte ptr [esi]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + eax]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + eax*2]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + edi]
        lea edx, [ecx + edx + 8]
        shr edx, 4
        movd xmm1, edx
        pshuflw xmm1, xmm1, 0
        punpcklqdq xmm1, xmm1
        packuswb xmm1, xmm1
        mov esi, 2
        mov edi, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0xc]
        lea eax, [ecx + ecx*2]
        L5C3ADC:
        movdqa xmmword ptr [edi], xmm1
        movdqa xmmword ptr [edi + ecx], xmm1
        movdqa xmmword ptr [edi + ecx*2], xmm1
        movdqa xmmword ptr [edi + eax], xmm1
        lea edi, [edi + ecx*4]
        movdqa xmmword ptr [edi], xmm1
        movdqa xmmword ptr [edi + ecx], xmm1
        movdqa xmmword ptr [edi + ecx*2], xmm1
        movdqa xmmword ptr [edi + eax], xmm1
        lea edi, [edi + ecx*4]
        dec esi
        jne L5C3ADC
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C3B0F vp8_intra_pred_y_dc128_sse2
__declspec(naked) void vp8_intra_pred_y_dc128_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        mov esi, 2
        movdqa xmm1, xmmword ptr [g_75E980]
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0xc]
        lea ecx, [edx + edx*2]
        L5C3B29:
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
        jne L5C3B29
        pop esi
        pop ebp
        ret
    }
}
