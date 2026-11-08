void sub_5CAAD1();
extern char g_75E980[];
extern char g_75E990[];

// FUNCTION: 0x5C3270 sub_5C3270
__declspec(naked) void sub_5C3270()
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
        sub esp, 0x88
        mov eax, dword ptr [ebp + 0x18]
        mov dword ptr [esp + 0x80], eax
        mov dword ptr [esp + 0x84], eax
        add dword ptr [ebp + 0x10], 8
        L5C329A:
        mov esi, dword ptr [ebp + 8]
        pxor mm0, mm0
        mov eax, dword ptr [ebp + 0xc]
        _emit 0x89
        _emit 0xf7
        mov edx, dword ptr [ebp + 0x10]
        sub edx, 9
        imul edx, eax
        lea edi, [edi + edx]
        movq mm1, qword ptr [edi]
        mov ecx, 8
        L5C32B9:
        lea edi, [edi + eax]
        movq qword ptr [edi], mm1
        dec ecx
        jne L5C32B9
        neg eax
        _emit 0x89
        _emit 0xf7
        movq mm1, qword ptr [edi]
        mov ecx, 8
        L5C32CE:
        lea edi, [edi + eax]
        movq qword ptr [edi], mm1
        dec ecx
        jne L5C32CE
        lea esi, [esi + eax*8]
        neg eax
        pxor mm5, mm5
        pxor mm6, mm6
        pxor mm7, mm7
        _emit 0x89
        _emit 0xf7
        mov ecx, 0xf
        L5C32EC:
        movd mm1, dword ptr [edi]
        punpcklbw mm1, mm0
        paddw mm5, mm1
        pmullw mm1, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xd1
        punpcklwd mm1, mm0
        punpckhwd mm2, mm0
        paddd mm6, mm1
        paddd mm7, mm2
        lea edi, [edi + eax]
        dec ecx
        jne L5C32EC
        _emit 0x31
        _emit 0xd2
        L5C330F:
        movd mm1, dword ptr [esi]
        movd mm2, dword ptr [edi]
        punpcklbw mm1, mm0
        punpcklbw mm2, mm0
        paddw mm5, mm2
        psubw mm5, mm1
        pmullw mm2, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xe2
        punpcklwd mm2, mm0
        punpckhwd mm4, mm0
        paddd mm6, mm2
        paddd mm7, mm4
        pmullw mm1, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xd1
        punpcklwd mm1, mm0
        psubd mm6, mm1
        punpckhwd mm2, mm0
        psubd mm7, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xde
        pslld mm3, 4
        psubd mm3, mm6
        _emit 0x0f
        _emit 0x6f
        _emit 0xcd
        _emit 0x0f
        _emit 0x6f
        _emit 0xe5
        pmullw mm1, mm1
        pmulhw mm4, mm4
        _emit 0x0f
        _emit 0x6f
        _emit 0xd1
        punpcklwd mm1, mm4
        punpckhwd mm2, mm4
        _emit 0x0f
        _emit 0x6f
        _emit 0xe7
        pslld mm4, 4
        psubd mm4, mm7
        psubd mm3, mm1
        psubd mm4, mm2
        psubd mm3, qword ptr [esp + 0x80]
        psubd mm4, qword ptr [esp + 0x80]
        psrad mm3, 0x1f
        psrad mm4, 0x1f
        packssdw mm3, mm4
        packsswb mm3, mm0
        movd mm1, dword ptr [esi + eax*8]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd1
        punpcklbw mm1, mm0
        paddw mm1, mm5
        _emit 0x89
        _emit 0xd1
        and ecx, 0x7f
        movq mm4, qword ptr [ecx + ecx + 0x659b00]
        paddw mm1, mm4
        psraw mm1, 4
        packuswb mm1, mm0
        pand mm1, mm3
        pandn mm3, mm2
        por mm1, mm3
        and ecx, 0xf
        movd dword ptr [esp + ecx*4], mm1
        cmp edx, 8
        jl L5C33DA
        _emit 0x89
        _emit 0xd1
        sub ecx, 8
        and ecx, 0xf
        movd mm1, dword ptr [esp + ecx*4]
        movd dword ptr [esi], mm1
        L5C33DA:
        lea esi, [esi + eax]
        lea edi, [edi + eax]
        add edx, 1
        cmp edx, dword ptr [ebp + 0x10]
        jl L5C330F
        add dword ptr [ebp + 8], 4
        sub dword ptr [ebp + 0x14], 4
        cmp dword ptr [ebp + 0x14], 0
        jg L5C329A
        add esp, 0x88
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C3409 sub_5C3409
__declspec(naked) void sub_5C3409()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        L5C340E:
        call sub_5CAAD1
        mov ecx, dword ptr [ebp + 0xc]
        and eax, 0xff
        _emit 0x1
        _emit 0xc1
        mov edx, dword ptr [ebp + 0x10]
        _emit 0x89
        _emit 0xcf
        mov ecx, dword ptr [ebp + 0x1c]
        mov esi, dword ptr [ebp + 8]
        _emit 0x31
        _emit 0xc0
        L5C342A:
        movq mm1, qword ptr [esi + eax]
        psubusb mm1, qword ptr [edx]
        paddusb mm1, qword ptr [edx + 0x20]
        psubusb mm1, qword ptr [edx + 0x10]
        movq mm2, qword ptr [edi + eax]
        paddb mm1, mm2
        movq qword ptr [esi + eax], mm1
        add eax, 8
        _emit 0x39
        _emit 0xc8
        jl L5C342A
        mov eax, dword ptr [ebp + 0x24]
        add dword ptr [ebp + 8], eax
        sub dword ptr [ebp + 0x20], 1
        jg L5C340E
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C3460 sub_5C3460
__declspec(naked) void sub_5C3460()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        movdqu xmm0, xmmword ptr [esi]
        mov eax, dword ptr [ebp + 0xc]
        mov edi, dword ptr [ebp + 0x10]
        movdqu xmm1, xmmword ptr [esi + eax]
        movdqu xmm2, xmmword ptr [esi + eax*2]
        mov ecx, dword ptr [ebp + 0x14]
        lea esi, [esi + eax*2]
        movdqa xmmword ptr [edi], xmm0
        _emit 0x1
        _emit 0xc6
        movdqa xmmword ptr [edi + ecx], xmm1
        movdqa xmmword ptr [edi + ecx*2], xmm2
        lea edi, [edi + ecx*2]
        movdqu xmm3, xmmword ptr [esi]
        _emit 0x1
        _emit 0xcf
        movdqu xmm4, xmmword ptr [esi + eax]
        movdqu xmm5, xmmword ptr [esi + eax*2]
        lea esi, [esi + eax*2]
        movdqa xmmword ptr [edi], xmm3
        _emit 0x1
        _emit 0xc6
        movdqa xmmword ptr [edi + ecx], xmm4
        movdqa xmmword ptr [edi + ecx*2], xmm5
        lea edi, [edi + ecx*2]
        movdqu xmm0, xmmword ptr [esi]
        _emit 0x1
        _emit 0xcf
        movdqu xmm1, xmmword ptr [esi + eax]
        movdqu xmm2, xmmword ptr [esi + eax*2]
        lea esi, [esi + eax*2]
        movdqa xmmword ptr [edi], xmm0
        _emit 0x1
        _emit 0xc6
        movdqa xmmword ptr [edi + ecx], xmm1
        movdqa xmmword ptr [edi + ecx*2], xmm2
        movdqu xmm3, xmmword ptr [esi]
        movdqu xmm4, xmmword ptr [esi + eax]
        lea edi, [edi + ecx*2]
        _emit 0x1
        _emit 0xcf
        movdqu xmm5, xmmword ptr [esi + eax*2]
        lea esi, [esi + eax*2]
        movdqa xmmword ptr [edi], xmm3
        _emit 0x1
        _emit 0xc6
        movdqa xmmword ptr [edi + ecx], xmm4
        movdqa xmmword ptr [edi + ecx*2], xmm5
        movdqu xmm0, xmmword ptr [esi]
        lea edi, [edi + ecx*2]
        movdqu xmm1, xmmword ptr [esi + eax]
        _emit 0x1
        _emit 0xcf
        movdqu xmm2, xmmword ptr [esi + eax*2]
        lea esi, [esi + eax*2]
        movdqa xmmword ptr [edi], xmm0
        movdqa xmmword ptr [edi + ecx], xmm1
        movdqa xmmword ptr [edi + ecx*2], xmm2
        movdqu xmm3, xmmword ptr [esi + eax]
        lea edi, [edi + ecx*2]
        movdqa xmmword ptr [edi + ecx], xmm3
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C3539 vp8_intra_pred_uv_dc_mmx2
__declspec(naked) void vp8_intra_pred_uv_dc_mmx2()
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
        pxor mm0, mm0
        movq mm1, qword ptr [edi]
        lea edi, [eax + eax*2]
        psadbw mm1, mm0
        movzx ecx, byte ptr [esi]
        movzx edx, byte ptr [esi + eax]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + eax*2]
        _emit 0x1
        _emit 0xd1
        movzx edx, byte ptr [esi + edi]
        lea esi, [esi + eax*4]
        _emit 0x1
        _emit 0xd1
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
        pextrw edx, mm1, 0
        lea edx, [edx + ecx + 8]
        sar edx, 4
        movd mm1, edx
        mov ecx, dword ptr [ebp + 0xc]
        pshufw mm1, mm1, 0
        mov edi, dword ptr [ebp + 8]
        packuswb mm1, mm1
        lea eax, [ecx + ecx*2]
        lea edx, [edi + ecx*4]
        movq qword ptr [edi], mm1
        movq qword ptr [edi + ecx], mm1
        movq qword ptr [edi + ecx*2], mm1
        movq qword ptr [edi + eax], mm1
        movq qword ptr [edx], mm1
        movq qword ptr [edx + ecx], mm1
        movq qword ptr [edx + ecx*2], mm1
        movq qword ptr [edx + eax], mm1
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C35C5 vp8_intra_pred_uv_dctop_mmx2
__declspec(naked) void vp8_intra_pred_uv_dctop_mmx2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 0x10]
        pxor mm0, mm0
        movq mm1, qword ptr [esi]
        psadbw mm1, mm0
        paddw mm1, qword ptr [g_75E990]
        psraw mm1, 3
        pshufw mm1, mm1, 0
        packuswb mm1, mm1
        mov edi, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0xc]
        lea eax, [ecx + ecx*2]
        movq qword ptr [edi], mm1
        movq qword ptr [edi + ecx], mm1
        movq qword ptr [edi + ecx*2], mm1
        movq qword ptr [edi + eax], mm1
        lea edi, [edi + ecx*4]
        movq qword ptr [edi], mm1
        movq qword ptr [edi + ecx], mm1
        movq qword ptr [edi + ecx*2], mm1
        movq qword ptr [edi + eax], mm1
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C3616 vp8_intra_pred_uv_dcleft_mmx2
__declspec(naked) void vp8_intra_pred_uv_dcleft_mmx2()
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
        lea edx, [ecx + edx + 4]
        shr edx, 3
        movd mm1, edx
        pshufw mm1, mm1, 0
        packuswb mm1, mm1
        mov edi, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0xc]
        lea eax, [ecx + ecx*2]
        movq qword ptr [edi], mm1
        movq qword ptr [edi + ecx], mm1
        movq qword ptr [edi + ecx*2], mm1
        movq qword ptr [edi + eax], mm1
        lea edi, [edi + ecx*4]
        movq qword ptr [edi], mm1
        movq qword ptr [edi + ecx], mm1
        movq qword ptr [edi + ecx*2], mm1
        movq qword ptr [edi + eax], mm1
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C3690 vp8_intra_pred_uv_dc128_mmx
__declspec(naked) void vp8_intra_pred_uv_dc128_mmx()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        movq mm1, qword ptr [g_75E980]
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

// FUNCTION: 0x5C36C6 vp8_intra_pred_uv_tm_ssse3
__declspec(naked) void vp8_intra_pred_uv_tm_ssse3()
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
        movq xmm1, qword ptr [esi]
        punpcklbw xmm1, xmm0
        movd xmm3, dword ptr [esi - 1]
        mov esi, dword ptr [ebp + 0x14]
        punpcklbw xmm3, xmm0
        pshuflw xmm3, xmm3, 0
        punpcklqdq xmm3, xmm3
        psubw xmm1, xmm3
        mov edi, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0xc]
        L5C3702:
        mov bl, byte ptr [esi]
        movd xmm3, ebx
        mov bl, byte ptr [esi + eax]
        movd xmm5, ebx
        punpcklbw xmm3, xmm0
        punpcklbw xmm5, xmm0
        pshuflw xmm3, xmm3, 0
        pshuflw xmm5, xmm5, 0
        punpcklqdq xmm3, xmm3
        punpcklqdq xmm5, xmm5
        paddw xmm3, xmm1
        paddw xmm5, xmm1
        packuswb xmm3, xmm5
        movq qword ptr [edi], xmm3
        movhps qword ptr [edi + ecx], xmm3
        lea esi, [esi + eax*2]
        lea edi, [edi + ecx*2]
        dec edx
        jne L5C3702
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}
