extern char g_75EA40[];
extern char g_75EA50[];
extern char g_75EA60[];
extern char g_75EA70[];
extern char g_75EA80[];
extern char g_75EA88[];
extern char g_75EA90[];
extern char g_75EA98[];
extern char g_75EAA0[];
extern char g_75EAA8[];
extern char g_75EAB0[];
extern char g_75EAB8[];

// FUNCTION: 0x5C4134 sub_5C4134
__declspec(naked) void sub_5C4134()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        sub esp, 0x10
        pxor mm5, mm5
        pxor mm6, mm6
        pxor mm7, mm7
        mov eax, dword ptr [ebp + 8]
        mov ebx, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        movq mm0, qword ptr [eax]
        movq mm1, qword ptr [ebx]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        _emit 0x0f
        _emit 0x6f
        _emit 0xd9
        punpcklbw mm0, mm6
        punpcklbw mm1, mm6
        punpckhbw mm2, mm6
        punpckhbw mm3, mm6
        psubsw mm0, mm1
        psubsw mm2, mm3
        paddw mm5, mm0
        paddw mm5, mm2
        pmaddwd mm0, mm0
        pmaddwd mm2, mm2
        _emit 0x1
        _emit 0xd3
        _emit 0x1
        _emit 0xc8
        movq mm1, qword ptr [ebx]
        paddd mm7, mm0
        paddd mm7, mm2
        movq mm0, qword ptr [eax]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        _emit 0x0f
        _emit 0x6f
        _emit 0xd9
        punpcklbw mm0, mm6
        punpcklbw mm1, mm6
        punpckhbw mm2, mm6
        punpckhbw mm3, mm6
        psubsw mm0, mm1
        psubsw mm2, mm3
        paddw mm5, mm0
        paddw mm5, mm2
        pmaddwd mm0, mm0
        pmaddwd mm2, mm2
        _emit 0x1
        _emit 0xd3
        _emit 0x1
        _emit 0xc8
        movq mm1, qword ptr [ebx]
        paddd mm7, mm0
        paddd mm7, mm2
        movq mm0, qword ptr [eax]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        _emit 0x0f
        _emit 0x6f
        _emit 0xd9
        punpcklbw mm0, mm6
        punpcklbw mm1, mm6
        punpckhbw mm2, mm6
        punpckhbw mm3, mm6
        psubsw mm0, mm1
        psubsw mm2, mm3
        paddw mm5, mm0
        paddw mm5, mm2
        pmaddwd mm0, mm0
        pmaddwd mm2, mm2
        _emit 0x1
        _emit 0xd3
        _emit 0x1
        _emit 0xc8
        movq mm1, qword ptr [ebx]
        paddd mm7, mm0
        paddd mm7, mm2
        movq mm0, qword ptr [eax]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        _emit 0x0f
        _emit 0x6f
        _emit 0xd9
        punpcklbw mm0, mm6
        punpcklbw mm1, mm6
        punpckhbw mm2, mm6
        punpckhbw mm3, mm6
        psubsw mm0, mm1
        psubsw mm2, mm3
        paddw mm5, mm0
        paddw mm5, mm2
        pmaddwd mm0, mm0
        pmaddwd mm2, mm2
        _emit 0x1
        _emit 0xd3
        _emit 0x1
        _emit 0xc8
        movq mm1, qword ptr [ebx]
        paddd mm7, mm0
        paddd mm7, mm2
        movq mm0, qword ptr [eax]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        _emit 0x0f
        _emit 0x6f
        _emit 0xd9
        punpcklbw mm0, mm6
        punpcklbw mm1, mm6
        punpckhbw mm2, mm6
        punpckhbw mm3, mm6
        psubsw mm0, mm1
        psubsw mm2, mm3
        paddw mm5, mm0
        paddw mm5, mm2
        pmaddwd mm0, mm0
        pmaddwd mm2, mm2
        _emit 0x1
        _emit 0xd3
        _emit 0x1
        _emit 0xc8
        movq mm1, qword ptr [ebx]
        paddd mm7, mm0
        paddd mm7, mm2
        movq mm0, qword ptr [eax]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        _emit 0x0f
        _emit 0x6f
        _emit 0xd9
        punpcklbw mm0, mm6
        punpcklbw mm1, mm6
        punpckhbw mm2, mm6
        punpckhbw mm3, mm6
        psubsw mm0, mm1
        psubsw mm2, mm3
        paddw mm5, mm0
        paddw mm5, mm2
        pmaddwd mm0, mm0
        pmaddwd mm2, mm2
        _emit 0x1
        _emit 0xd3
        _emit 0x1
        _emit 0xc8
        movq mm1, qword ptr [ebx]
        paddd mm7, mm0
        paddd mm7, mm2
        movq mm0, qword ptr [eax]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        _emit 0x0f
        _emit 0x6f
        _emit 0xd9
        punpcklbw mm0, mm6
        punpcklbw mm1, mm6
        punpckhbw mm2, mm6
        punpckhbw mm3, mm6
        psubsw mm0, mm1
        psubsw mm2, mm3
        paddw mm5, mm0
        paddw mm5, mm2
        pmaddwd mm0, mm0
        pmaddwd mm2, mm2
        _emit 0x1
        _emit 0xd3
        _emit 0x1
        _emit 0xc8
        movq mm1, qword ptr [ebx]
        paddd mm7, mm0
        paddd mm7, mm2
        movq mm0, qword ptr [eax]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        _emit 0x0f
        _emit 0x6f
        _emit 0xd9
        punpcklbw mm0, mm6
        punpcklbw mm1, mm6
        punpckhbw mm2, mm6
        punpckhbw mm3, mm6
        psubsw mm0, mm1
        psubsw mm2, mm3
        paddw mm5, mm0
        paddw mm5, mm2
        pmaddwd mm0, mm0
        pmaddwd mm2, mm2
        _emit 0x1
        _emit 0xd3
        _emit 0x1
        _emit 0xc8
        paddd mm7, mm0
        paddd mm7, mm2
        movq qword ptr [esp + 8], mm5
        movq qword ptr [esp], mm7
        movsx edx, word ptr [esp + 8]
        movsx ecx, word ptr [esp + 0xa]
        movsx ebx, word ptr [esp + 0xc]
        movsx eax, word ptr [esp + 0xe]
        _emit 0x1
        _emit 0xca
        _emit 0x1
        _emit 0xc3
        _emit 0x1
        _emit 0xda
        mov eax, dword ptr [esp]
        mov ecx, dword ptr [esp + 4]
        _emit 0x1
        _emit 0xc8
        mov esi, dword ptr [ebp + 0x18]
        mov edi, dword ptr [ebp + 0x1c]
        mov dword ptr [esi], eax
        mov dword ptr [edi], edx
        _emit 0x31
        _emit 0xc0
        add esp, 0x10
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C4332 vp8_get8x8var_mmx
__declspec(naked) void vp8_get8x8var_mmx()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        sub esp, 0x10
        pxor mm5, mm5
        pxor mm6, mm6
        pxor mm7, mm7
        mov eax, dword ptr [ebp + 8]
        mov ebx, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        movd mm0, dword ptr [eax]
        movd mm1, dword ptr [ebx]
        punpcklbw mm0, mm6
        punpcklbw mm1, mm6
        psubsw mm0, mm1
        paddw mm5, mm0
        pmaddwd mm0, mm0
        _emit 0x1
        _emit 0xd3
        _emit 0x1
        _emit 0xc8
        movd mm1, dword ptr [ebx]
        paddd mm7, mm0
        movd mm0, dword ptr [eax]
        punpcklbw mm0, mm6
        punpcklbw mm1, mm6
        psubsw mm0, mm1
        paddw mm5, mm0
        pmaddwd mm0, mm0
        _emit 0x1
        _emit 0xd3
        _emit 0x1
        _emit 0xc8
        movd mm1, dword ptr [ebx]
        paddd mm7, mm0
        movd mm0, dword ptr [eax]
        punpcklbw mm0, mm6
        punpcklbw mm1, mm6
        psubsw mm0, mm1
        paddw mm5, mm0
        pmaddwd mm0, mm0
        _emit 0x1
        _emit 0xd3
        _emit 0x1
        _emit 0xc8
        movd mm1, dword ptr [ebx]
        paddd mm7, mm0
        movd mm0, dword ptr [eax]
        punpcklbw mm0, mm6
        punpcklbw mm1, mm6
        psubsw mm0, mm1
        paddw mm5, mm0
        pmaddwd mm0, mm0
        paddd mm7, mm0
        movq qword ptr [esp + 8], mm5
        movq qword ptr [esp], mm7
        movsx edx, word ptr [esp + 8]
        movsx ecx, word ptr [esp + 0xa]
        movsx ebx, word ptr [esp + 0xc]
        movsx eax, word ptr [esp + 0xe]
        _emit 0x1
        _emit 0xca
        _emit 0x1
        _emit 0xc3
        _emit 0x1
        _emit 0xda
        mov eax, dword ptr [esp]
        mov ecx, dword ptr [esp + 4]
        _emit 0x1
        _emit 0xc8
        mov esi, dword ptr [ebp + 0x18]
        mov edi, dword ptr [ebp + 0x1c]
        mov dword ptr [esi], eax
        mov dword ptr [edi], edx
        _emit 0x31
        _emit 0xc0
        add esp, 0x10
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C43FC sub_5C43FC
__declspec(naked) void sub_5C43FC()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        pxor mm6, mm6
        pxor mm7, mm7
        mov eax, dword ptr [ebp + 8]
        mov ebx, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        movd mm0, dword ptr [eax]
        movd mm1, dword ptr [ebx]
        punpcklbw mm0, mm6
        punpcklbw mm1, mm6
        psubsw mm0, mm1
        pmaddwd mm0, mm0
        _emit 0x1
        _emit 0xd3
        _emit 0x1
        _emit 0xc8
        movd mm1, dword ptr [ebx]
        paddd mm7, mm0
        movd mm0, dword ptr [eax]
        punpcklbw mm0, mm6
        punpcklbw mm1, mm6
        psubsw mm0, mm1
        pmaddwd mm0, mm0
        _emit 0x1
        _emit 0xd3
        _emit 0x1
        _emit 0xc8
        movd mm1, dword ptr [ebx]
        paddd mm7, mm0
        movd mm0, dword ptr [eax]
        punpcklbw mm1, mm6
        punpcklbw mm0, mm6
        psubsw mm0, mm1
        pmaddwd mm0, mm0
        _emit 0x1
        _emit 0xd3
        _emit 0x1
        _emit 0xc8
        movd mm1, dword ptr [ebx]
        paddd mm7, mm0
        movd mm0, dword ptr [eax]
        punpcklbw mm0, mm6
        punpcklbw mm1, mm6
        psubsw mm0, mm1
        pmaddwd mm0, mm0
        paddd mm7, mm0
        _emit 0x0f
        _emit 0x6f
        _emit 0xc7
        psrlq mm7, 0x20
        paddd mm0, mm7
        movd eax, mm0
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C4486 vp8_filter_block2d_bil4x4_var_mmx
__declspec(naked) void vp8_filter_block2d_bil4x4_var_mmx()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        sub esp, 0x10
        pxor mm6, mm6
        pxor mm7, mm7
        mov eax, dword ptr [ebp + 0x18]
        mov edx, dword ptr [ebp + 0x1c]
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, 4
        pxor mm0, mm0
        movd mm1, dword ptr [esi]
        movd mm3, dword ptr [esi + 1]
        punpcklbw mm1, mm0
        pmullw mm1, qword ptr [eax]
        punpcklbw mm3, mm0
        pmullw mm3, qword ptr [eax + 8]
        paddw mm1, mm3
        paddw mm1, qword ptr [g_75EA40]
        psraw mm1, 7
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        add esi, dword ptr [ebp + 0xc]
        L5C44D0:
        movd mm1, dword ptr [esi]
        movd mm3, dword ptr [esi + 1]
        punpcklbw mm1, mm0
        pmullw mm1, qword ptr [eax]
        punpcklbw mm3, mm0
        pmullw mm3, qword ptr [eax + 8]
        paddw mm1, mm3
        paddw mm1, qword ptr [g_75EA40]
        psraw mm1, 7
        _emit 0x0f
        _emit 0x6f
        _emit 0xdd
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        pmullw mm3, qword ptr [edx]
        pmullw mm1, qword ptr [edx + 8]
        paddw mm1, mm3
        paddw mm1, qword ptr [g_75EA40]
        psraw mm1, 7
        movd mm3, dword ptr [edi]
        punpcklbw mm3, mm0
        psubw mm1, mm3
        paddw mm6, mm1
        pmaddwd mm1, mm1
        paddd mm7, mm1
        add esi, dword ptr [ebp + 0xc]
        add edi, dword ptr [ebp + 0x14]
        sub ecx, 1
        jne L5C44D0
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
        mov edi, dword ptr [ebp + 0x20]
        mov esi, dword ptr [ebp + 0x24]
        movd dword ptr [edi], mm2
        movd dword ptr [esi], mm4
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C4564 vp8_filter_block2d_bil_var_mmx
__declspec(naked) void vp8_filter_block2d_bil_var_mmx()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        sub esp, 0x10
        pxor mm6, mm6
        pxor mm7, mm7
        mov eax, dword ptr [ebp + 0x1c]
        mov edx, dword ptr [ebp + 0x20]
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x18]
        pxor mm0, mm0
        movq mm1, qword ptr [esi]
        movq mm3, qword ptr [esi + 1]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd1
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        punpcklbw mm1, mm0
        punpckhbw mm2, mm0
        pmullw mm1, qword ptr [eax]
        pmullw mm2, qword ptr [eax]
        punpcklbw mm3, mm0
        punpckhbw mm4, mm0
        pmullw mm3, qword ptr [eax + 8]
        pmullw mm4, qword ptr [eax + 8]
        paddw mm1, mm3
        paddw mm2, mm4
        paddw mm1, qword ptr [g_75EA40]
        psraw mm1, 7
        paddw mm2, qword ptr [g_75EA40]
        psraw mm2, 7
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        packuswb mm5, mm2
        add esi, dword ptr [ebp + 0xc]
        L5C45D0:
        movq mm1, qword ptr [esi]
        movq mm3, qword ptr [esi + 1]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd1
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        punpcklbw mm1, mm0
        punpckhbw mm2, mm0
        pmullw mm1, qword ptr [eax]
        pmullw mm2, qword ptr [eax]
        punpcklbw mm3, mm0
        punpckhbw mm4, mm0
        pmullw mm3, qword ptr [eax + 8]
        pmullw mm4, qword ptr [eax + 8]
        paddw mm1, mm3
        paddw mm2, mm4
        paddw mm1, qword ptr [g_75EA40]
        psraw mm1, 7
        paddw mm2, qword ptr [g_75EA40]
        psraw mm2, 7
        _emit 0x0f
        _emit 0x6f
        _emit 0xdd
        _emit 0x0f
        _emit 0x6f
        _emit 0xe5
        punpcklbw mm3, mm0
        punpckhbw mm4, mm0
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        packuswb mm5, mm2
        pmullw mm3, qword ptr [edx]
        pmullw mm4, qword ptr [edx]
        pmullw mm1, qword ptr [edx + 8]
        pmullw mm2, qword ptr [edx + 8]
        paddw mm1, mm3
        paddw mm2, mm4
        paddw mm1, qword ptr [g_75EA40]
        paddw mm2, qword ptr [g_75EA40]
        psraw mm1, 7
        psraw mm2, 7
        movq mm3, qword ptr [edi]
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        punpcklbw mm3, mm0
        punpckhbw mm4, mm0
        psubw mm1, mm3
        psubw mm2, mm4
        paddw mm6, mm1
        pmaddwd mm1, mm1
        paddw mm6, mm2
        pmaddwd mm2, mm2
        paddd mm7, mm1
        paddd mm7, mm2
        add esi, dword ptr [ebp + 0xc]
        add edi, dword ptr [ebp + 0x14]
        sub ecx, 1
        jne L5C45D0
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
        mov edi, dword ptr [ebp + 0x24]
        mov esi, dword ptr [ebp + 0x28]
        movd dword ptr [edi], mm2
        movd dword ptr [esi], mm4
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C46C0 sub_5C46C0
__declspec(naked) void sub_5C46C0()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        mov edx, dword ptr [ebp + 8]
        mov eax, 0x30003
        movq mm0, qword ptr [edx]
        movq mm1, qword ptr [edx + 8]
        movd mm7, eax
        movq mm2, qword ptr [edx + 0x10]
        movq mm3, qword ptr [edx + 0x18]
        punpcklwd mm7, mm7
        mov edx, dword ptr [ebp + 0xc]
        _emit 0x0f
        _emit 0x6f
        _emit 0xe0
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        paddw mm4, mm3
        paddw mm5, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xf4
        paddw mm4, mm5
        psubw mm6, mm5
        psubw mm0, mm3
        psubw mm1, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xe8
        paddw mm0, mm1
        psubw mm5, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xdc
        punpcklwd mm4, mm0
        punpckhwd mm3, mm0
        _emit 0x0f
        _emit 0x6f
        _emit 0xce
        punpcklwd mm6, mm5
        punpckhwd mm1, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xc4
        _emit 0x0f
        _emit 0x6f
        _emit 0xd3
        punpckldq mm0, mm6
        punpckhdq mm4, mm6
        punpckldq mm2, mm1
        punpckhdq mm3, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xc8
        _emit 0x0f
        _emit 0x6f
        _emit 0xec
        paddw mm1, mm3
        paddw mm5, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xf1
        paddw mm1, mm5
        psubw mm6, mm5
        paddw mm1, mm7
        paddw mm6, mm7
        psraw mm1, 3
        psraw mm6, 3
        psubw mm0, mm3
        psubw mm4, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xe8
        paddw mm0, mm4
        psubw mm5, mm4
        paddw mm0, mm7
        paddw mm5, mm7
        psraw mm0, 3
        psraw mm5, 3
        movd eax, mm1
        movd ecx, mm0
        psrlq mm0, 0x20
        psrlq mm1, 0x20
        mov word ptr [edx], ax
        mov word ptr [edx + 0x20], cx
        shr eax, 0x10
        shr ecx, 0x10
        mov word ptr [edx + 0x80], ax
        mov word ptr [edx + 0xa0], cx
        movd eax, mm1
        movd ecx, mm0
        mov word ptr [edx + 0x100], ax
        mov word ptr [edx + 0x120], cx
        shr eax, 0x10
        shr ecx, 0x10
        mov word ptr [edx + 0x180], ax
        mov word ptr [edx + 0x1a0], cx
        movd eax, mm6
        movd ecx, mm5
        psrlq mm5, 0x20
        psrlq mm6, 0x20
        mov word ptr [edx + 0x40], ax
        mov word ptr [edx + 0x60], cx
        shr eax, 0x10
        shr ecx, 0x10
        mov word ptr [edx + 0xc0], ax
        mov word ptr [edx + 0xe0], cx
        movd eax, mm6
        movd ecx, mm5
        mov word ptr [edx + 0x140], ax
        mov word ptr [edx + 0x160], cx
        shr eax, 0x10
        shr ecx, 0x10
        mov word ptr [edx + 0x1c0], ax
        mov word ptr [edx + 0x1e0], cx
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C4810 sub_5C4810
__declspec(naked) void sub_5C4810()
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
        sub esp, 0x50
        mov dword ptr [esp + 0x40], ebp
        mov edx, dword ptr [ebp + 0x14]
        mov dword ptr [esp], edx
        movd xmm6, dword ptr [ebp + 0x18]
        movdqa xmmword ptr [esp + 0x10], xmm6
        mov edx, 0x10
        sub edx, dword ptr [ebp + 0x18]
        movd xmm4, edx
        movdqa xmm5, xmmword ptr [g_75EA60]
        psrlw xmm5, xmm4
        movdqa xmmword ptr [esp + 0x30], xmm5
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0x10]
        mov edi, dword ptr [ebp + 0x20]
        mov eax, dword ptr [ebp + 0x24]
        movd xmm0, dword ptr [ebp + 0x1c]
        pshuflw xmm0, xmm0, 0
        punpcklwd xmm0, xmm0
        movdqa xmmword ptr [esp + 0x20], xmm0
        mov ebp, dword ptr [ebp + 0xc]
        pxor xmm7, xmm7
        lea ecx, [edx + 0x100]
        cmp dword ptr [esp], 8
        jne L5C48A3
        lea ecx, [edx + 0x40]
        L5C488B:
        movq xmm0, qword ptr [esi]
        lea esi, [esi + ebp]
        punpcklbw xmm0, xmm7
        movq xmm1, qword ptr [esi]
        lea esi, [esi + ebp]
        punpcklbw xmm1, xmm7
        jmp L5C48B6
        L5C48A3:
        movdqa xmm0, xmmword ptr [esi]
        lea esi, [esi + ebp]
        movdqa xmm1, xmm0
        punpcklbw xmm0, xmm7
        punpckhbw xmm1, xmm7
        L5C48B6:
        movdqa xmm2, xmmword ptr [edx]
        movdqa xmm3, xmm2
        punpcklbw xmm2, xmm7
        punpckhbw xmm3, xmm7
        psubw xmm0, xmm2
        psubw xmm1, xmm3
        pmullw xmm0, xmm0
        pmullw xmm1, xmm1
        pmullw xmm0, xmmword ptr [g_75EA50]
        pmullw xmm1, xmmword ptr [g_75EA50]
        paddw xmm0, xmmword ptr [esp + 0x30]
        paddw xmm1, xmmword ptr [esp + 0x30]
        psrlw xmm0, xmmword ptr [esp + 0x10]
        psrlw xmm1, xmmword ptr [esp + 0x10]
        movdqa xmm3, xmmword ptr [g_75EA70]
        movdqa xmm2, xmmword ptr [g_75EA70]
        psubusw xmm3, xmm1
        psubusw xmm2, xmm0
        pmullw xmm2, xmmword ptr [esp + 0x20]
        pmullw xmm3, xmmword ptr [esp + 0x20]
        movdqa xmm4, xmmword ptr [eax]
        movdqa xmm5, xmmword ptr [eax + 0x10]
        paddw xmm4, xmm2
        paddw xmm5, xmm3
        movdqa xmmword ptr [eax], xmm4
        movdqa xmmword ptr [eax + 0x10], xmm5
        lea eax, [eax + 0x20]
        pxor xmm7, xmm7
        movdqa xmm0, xmmword ptr [edx]
        lea edx, [edx + 0x10]
        movdqa xmm1, xmm0
        punpcklbw xmm0, xmm7
        punpckhbw xmm1, xmm7
        pmullw xmm0, xmm2
        pmullw xmm1, xmm3
        movdqa xmm2, xmm0
        punpcklwd xmm0, xmm7
        punpckhwd xmm2, xmm7
        movdqa xmm3, xmm1
        punpcklwd xmm1, xmm7
        punpckhwd xmm3, xmm7
        movdqa xmm4, xmmword ptr [edi]
        movdqa xmm5, xmmword ptr [edi + 0x10]
        movdqa xmm6, xmmword ptr [edi + 0x20]
        movdqa xmm7, xmmword ptr [edi + 0x30]
        paddd xmm4, xmm0
        paddd xmm5, xmm2
        paddd xmm6, xmm1
        paddd xmm7, xmm3
        movdqa xmmword ptr [edi], xmm4
        movdqa xmmword ptr [edi + 0x10], xmm5
        movdqa xmmword ptr [edi + 0x20], xmm6
        movdqa xmmword ptr [edi + 0x30], xmm7
        lea edi, [edi + 0x40]
        _emit 0x39
        _emit 0xca
        je L5C49C6
        pxor xmm7, xmm7
        cmp dword ptr [esp], 0x10
        je L5C48A3
        jmp L5C488B
        L5C49C6:
        mov ebp, dword ptr [esp + 0x40]
        add esp, 0x50
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C49E0 sub_5C49E0
__declspec(naked) void sub_5C49E0()
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
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [esi + eax]
        movq mm2, qword ptr [ecx]
        movq mm4, qword ptr [ecx + eax]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd8
        _emit 0x0f
        _emit 0x6f
        _emit 0xea
        punpcklwd mm0, mm1
        punpckhwd mm3, mm1
        punpcklwd mm2, mm4
        punpckhwd mm5, mm4
        _emit 0x0f
        _emit 0x6f
        _emit 0xc8
        punpckldq mm0, mm2
        punpckhdq mm1, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xd3
        punpckldq mm2, mm5
        punpckhdq mm3, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xe8
        _emit 0x0f
        _emit 0x6f
        _emit 0xe1
        paddw mm0, mm3
        paddw mm1, mm2
        psubw mm4, mm2
        psubw mm5, mm3
        psllw mm5, 3
        psllw mm4, 3
        psllw mm0, 3
        psllw mm1, 3
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        paddw mm0, mm1
        psubw mm2, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xcd
        punpcklwd mm1, mm4
        punpckhwd mm5, mm4
        _emit 0x0f
        _emit 0x6f
        _emit 0xd9
        _emit 0x0f
        _emit 0x6f
        _emit 0xe5
        pmaddwd mm1, qword ptr [g_75EA80]
        pmaddwd mm4, qword ptr [g_75EA80]
        pmaddwd mm3, qword ptr [g_75EA88]
        pmaddwd mm5, qword ptr [g_75EA88]
        paddd mm1, qword ptr [g_75EAA0]
        paddd mm4, qword ptr [g_75EAA0]
        paddd mm3, qword ptr [g_75EAA8]
        paddd mm5, qword ptr [g_75EAA8]
        psrad mm1, 0xc
        psrad mm4, 0xc
        psrad mm3, 0xc
        psrad mm5, 0xc
        packssdw mm1, mm4
        packssdw mm3, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xe0
        _emit 0x0f
        _emit 0x6f
        _emit 0xea
        punpcklwd mm0, mm1
        punpckhwd mm4, mm1
        punpcklwd mm2, mm3
        punpckhwd mm5, mm3
        _emit 0x0f
        _emit 0x6f
        _emit 0xc8
        punpckldq mm0, mm2
        punpckhdq mm1, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xd4
        punpckldq mm2, mm5
        punpckhdq mm4, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xe8
        _emit 0x0f
        _emit 0x6f
        _emit 0xd9
        paddw mm0, mm4
        paddw mm1, mm2
        psubw mm3, mm2
        psubw mm5, mm4
        pxor mm6, mm6
        pcmpeqw mm6, mm5
        pandn mm6, qword ptr [g_75EA90]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        paddw mm0, mm1
        psubw mm2, mm1
        paddw mm0, qword ptr [g_75EA98]
        paddw mm2, qword ptr [g_75EA98]
        psraw mm0, 4
        psraw mm2, 4
        movq qword ptr [edi], mm0
        movq qword ptr [edi + 0x10], mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xcd
        punpcklwd mm1, mm3
        punpckhwd mm5, mm3
        _emit 0x0f
        _emit 0x6f
        _emit 0xd9
        _emit 0x0f
        _emit 0x6f
        _emit 0xe5
        pmaddwd mm1, qword ptr [g_75EA80]
        pmaddwd mm4, qword ptr [g_75EA80]
        pmaddwd mm3, qword ptr [g_75EA88]
        pmaddwd mm5, qword ptr [g_75EA88]
        paddd mm1, qword ptr [g_75EAB0]
        paddd mm4, qword ptr [g_75EAB0]
        paddd mm3, qword ptr [g_75EAB8]
        paddd mm5, qword ptr [g_75EAB8]
        psrad mm1, 0x10
        psrad mm4, 0x10
        psrad mm3, 0x10
        psrad mm5, 0x10
        packssdw mm1, mm4
        packssdw mm3, mm5
        paddw mm1, mm6
        movq qword ptr [edi + 8], mm1
        movq qword ptr [edi + 0x18], mm3
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C4B80 sub_5C4B80
__declspec(naked) void sub_5C4B80()
{
    __asm {
        emms
        ret
    }
}

// STUB: 0x5C4B84 D3DXCompileShader (6 bytes)
void D3DXCompileShader()
{
}
