
// FUNCTION: 0x5BAF64 sub_5BAF64
__declspec(naked) void sub_5BAF64()
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
        movd xmm0, dword ptr [esi]
        movq xmm1, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        punpcklqdq xmm1, xmm3
        mpsadbw xmm1, xmm0, 0
        movd xmm0, dword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        punpcklqdq xmm5, xmm3
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        mpsadbw xmm5, xmm0, 0
        paddw xmm1, xmm5
        movd xmm0, dword ptr [esi]
        movq xmm5, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        punpcklqdq xmm5, xmm3
        mpsadbw xmm5, xmm0, 0
        paddw xmm1, xmm5
        movd xmm0, dword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        movq xmm3, qword ptr [edi + edx + 8]
        punpcklqdq xmm5, xmm3
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        mpsadbw xmm5, xmm0, 0
        paddw xmm1, xmm5
        mov edi, dword ptr [ebp + 0x18]
        movdqa xmmword ptr [edi], xmm1
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BB000 sub_5BB000
__declspec(naked) void sub_5BB000()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        movq mm0, qword ptr [esi]
        mov eax, dword ptr [ebp + 0xc]
        mov edi, dword ptr [ebp + 0x10]
        movq mm1, qword ptr [esi + eax]
        movq mm2, qword ptr [esi + eax*2]
        mov ecx, dword ptr [ebp + 0x14]
        lea esi, [esi + eax*2]
        movq qword ptr [edi], mm0
        _emit 0x1
        _emit 0xc6
        movq qword ptr [edi + ecx], mm1
        movq qword ptr [edi + ecx*2], mm2
        lea edi, [edi + ecx*2]
        movq mm3, qword ptr [esi]
        _emit 0x1
        _emit 0xcf
        movq mm4, qword ptr [esi + eax]
        movq mm5, qword ptr [esi + eax*2]
        movq qword ptr [edi], mm3
        lea esi, [esi + eax*2]
        movq qword ptr [edi + ecx], mm4
        movq qword ptr [edi + ecx*2], mm5
        lea edi, [edi + ecx*2]
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [esi + eax*2]
        movq qword ptr [edi + ecx], mm0
        movq qword ptr [edi + ecx*2], mm1
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BB061 sub_5BB061
__declspec(naked) void sub_5BB061()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        movq mm0, qword ptr [esi]
        mov eax, dword ptr [ebp + 0xc]
        mov edi, dword ptr [ebp + 0x10]
        movq mm1, qword ptr [esi + eax]
        movq mm2, qword ptr [esi + eax*2]
        mov ecx, dword ptr [ebp + 0x14]
        lea esi, [esi + eax*2]
        movq qword ptr [edi], mm0
        movq qword ptr [edi + ecx], mm1
        movq qword ptr [edi + ecx*2], mm2
        lea edi, [edi + ecx*2]
        movq mm3, qword ptr [esi + eax]
        movq qword ptr [edi + ecx], mm3
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BB09A sub_5BB09A
__declspec(naked) void sub_5BB09A()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x14]
        movq mm0, qword ptr [esi]
        movq mm3, qword ptr [esi + 8]
        movq mm1, qword ptr [esi + eax]
        movq mm4, qword ptr [esi + eax + 8]
        movq mm2, qword ptr [esi + eax*2]
        movq mm5, qword ptr [esi + eax*2 + 8]
        lea esi, [esi + eax*2]
        _emit 0x1
        _emit 0xc6
        movq qword ptr [edi], mm0
        movq qword ptr [edi + 8], mm3
        movq qword ptr [edi + ecx], mm1
        movq qword ptr [edi + ecx + 8], mm4
        movq qword ptr [edi + ecx*2], mm2
        movq qword ptr [edi + ecx*2 + 8], mm5
        lea edi, [edi + ecx*2]
        _emit 0x1
        _emit 0xcf
        movq mm0, qword ptr [esi]
        movq mm3, qword ptr [esi + 8]
        movq mm1, qword ptr [esi + eax]
        movq mm4, qword ptr [esi + eax + 8]
        movq mm2, qword ptr [esi + eax*2]
        movq mm5, qword ptr [esi + eax*2 + 8]
        lea esi, [esi + eax*2]
        _emit 0x1
        _emit 0xc6
        movq qword ptr [edi], mm0
        movq qword ptr [edi + 8], mm3
        movq qword ptr [edi + ecx], mm1
        movq qword ptr [edi + ecx + 8], mm4
        movq qword ptr [edi + ecx*2], mm2
        movq qword ptr [edi + ecx*2 + 8], mm5
        lea edi, [edi + ecx*2]
        _emit 0x1
        _emit 0xcf
        movq mm0, qword ptr [esi]
        movq mm3, qword ptr [esi + 8]
        movq mm1, qword ptr [esi + eax]
        movq mm4, qword ptr [esi + eax + 8]
        movq mm2, qword ptr [esi + eax*2]
        movq mm5, qword ptr [esi + eax*2 + 8]
        lea esi, [esi + eax*2]
        _emit 0x1
        _emit 0xc6
        movq qword ptr [edi], mm0
        movq qword ptr [edi + 8], mm3
        movq qword ptr [edi + ecx], mm1
        movq qword ptr [edi + ecx + 8], mm4
        movq qword ptr [edi + ecx*2], mm2
        movq qword ptr [edi + ecx*2 + 8], mm5
        lea edi, [edi + ecx*2]
        _emit 0x1
        _emit 0xcf
        movq mm0, qword ptr [esi]
        movq mm3, qword ptr [esi + 8]
        movq mm1, qword ptr [esi + eax]
        movq mm4, qword ptr [esi + eax + 8]
        movq mm2, qword ptr [esi + eax*2]
        movq mm5, qword ptr [esi + eax*2 + 8]
        lea esi, [esi + eax*2]
        _emit 0x1
        _emit 0xc6
        movq qword ptr [edi], mm0
        movq qword ptr [edi + 8], mm3
        movq qword ptr [edi + ecx], mm1
        movq qword ptr [edi + ecx + 8], mm4
        movq qword ptr [edi + ecx*2], mm2
        movq qword ptr [edi + ecx*2 + 8], mm5
        lea edi, [edi + ecx*2]
        _emit 0x1
        _emit 0xcf
        movq mm0, qword ptr [esi]
        movq mm3, qword ptr [esi + 8]
        movq mm1, qword ptr [esi + eax]
        movq mm4, qword ptr [esi + eax + 8]
        movq mm2, qword ptr [esi + eax*2]
        movq mm5, qword ptr [esi + eax*2 + 8]
        lea esi, [esi + eax*2]
        _emit 0x1
        _emit 0xc6
        movq qword ptr [edi], mm0
        movq qword ptr [edi + 8], mm3
        movq qword ptr [edi + ecx], mm1
        movq qword ptr [edi + ecx + 8], mm4
        movq qword ptr [edi + ecx*2], mm2
        movq qword ptr [edi + ecx*2 + 8], mm5
        lea edi, [edi + ecx*2]
        _emit 0x1
        _emit 0xcf
        movq mm0, qword ptr [esi]
        movq mm3, qword ptr [esi + 8]
        movq qword ptr [edi], mm0
        movq qword ptr [edi + 8], mm3
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BB1F0 sub_5BB1F0
__declspec(naked) void sub_5BB1F0()
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
        lea ecx, [esi + eax*8]
        lea ecx, [ecx + eax*8]
        pxor mm7, mm7
        pxor mm6, mm6
        L5BB20D:
        movq mm0, qword ptr [esi]
        movq mm2, qword ptr [esi + 8]
        movq mm1, qword ptr [edi]
        movq mm3, qword ptr [edi + 8]
        _emit 0x0f
        _emit 0x6f
        _emit 0xe0
        _emit 0x0f
        _emit 0x6f
        _emit 0xea
        psubusb mm0, mm1
        psubusb mm1, mm4
        psubusb mm2, mm3
        psubusb mm3, mm5
        por mm0, mm1
        por mm2, mm3
        _emit 0x0f
        _emit 0x6f
        _emit 0xc8
        _emit 0x0f
        _emit 0x6f
        _emit 0xda
        punpcklbw mm0, mm6
        punpcklbw mm2, mm6
        punpckhbw mm1, mm6
        punpckhbw mm3, mm6
        paddw mm0, mm2
        paddw mm1, mm3
        lea esi, [esi + eax]
        _emit 0x1
        _emit 0xd7
        paddw mm7, mm0
        paddw mm7, mm1
        _emit 0x39
        _emit 0xce
        jne L5BB20D
        _emit 0x0f
        _emit 0x6f
        _emit 0xc7
        punpcklwd mm0, mm6
        punpckhwd mm7, mm6
        paddw mm0, mm7
        _emit 0x0f
        _emit 0x6f
        _emit 0xf8
        psrlq mm0, 0x20
        paddw mm7, mm0
        movd eax, mm7
        pop edi
        pop esi
        _emit 0x89
        _emit 0xec
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BB279 sub_5BB279
__declspec(naked) void sub_5BB279()
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
        lea ecx, [esi + eax*8]
        lea ecx, [ecx + eax*8]
        pxor mm7, mm7
        pxor mm6, mm6
        L5BB296:
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [edi]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        psubusb mm0, mm1
        psubusb mm1, mm2
        por mm0, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        punpcklbw mm0, mm6
        punpckhbw mm2, mm6
        lea esi, [esi + eax]
        _emit 0x1
        _emit 0xd7
        paddw mm7, mm0
        paddw mm7, mm2
        _emit 0x39
        _emit 0xce
        jne L5BB296
        _emit 0x0f
        _emit 0x6f
        _emit 0xc7
        punpcklwd mm0, mm6
        punpckhwd mm7, mm6
        paddw mm0, mm7
        _emit 0x0f
        _emit 0x6f
        _emit 0xf8
        psrlq mm0, 0x20
        paddw mm7, mm0
        movd eax, mm7
        pop edi
        pop esi
        _emit 0x89
        _emit 0xec
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BB2DF sub_5BB2DF
__declspec(naked) void sub_5BB2DF()
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
        lea ecx, [esi + eax*8]
        pxor mm7, mm7
        pxor mm6, mm6
        L5BB2F9:
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [edi]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        psubusb mm0, mm1
        psubusb mm1, mm2
        por mm0, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        punpcklbw mm0, mm6
        punpckhbw mm2, mm6
        paddw mm0, mm2
        lea esi, [esi + eax]
        _emit 0x1
        _emit 0xd7
        paddw mm7, mm0
        _emit 0x39
        _emit 0xce
        jne L5BB2F9
        _emit 0x0f
        _emit 0x6f
        _emit 0xc7
        punpcklwd mm0, mm6
        punpckhwd mm7, mm6
        paddw mm0, mm7
        _emit 0x0f
        _emit 0x6f
        _emit 0xf8
        psrlq mm0, 0x20
        paddw mm7, mm0
        movd eax, mm7
        pop edi
        pop esi
        _emit 0x89
        _emit 0xec
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BB342 sub_5BB342
__declspec(naked) void sub_5BB342()
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
        movd mm0, dword ptr [esi]
        movd mm1, dword ptr [edi]
        movd mm2, dword ptr [esi + eax]
        movd mm3, dword ptr [edi + edx]
        punpcklbw mm0, mm2
        punpcklbw mm1, mm3
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        psubusb mm0, mm1
        psubusb mm1, mm2
        por mm0, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        pxor mm3, mm3
        punpcklbw mm0, mm3
        punpckhbw mm2, mm3
        paddw mm0, mm2
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movd mm4, dword ptr [esi]
        movd mm5, dword ptr [edi]
        movd mm6, dword ptr [esi + eax]
        movd mm7, dword ptr [edi + edx]
        punpcklbw mm4, mm6
        punpcklbw mm5, mm7
        _emit 0x0f
        _emit 0x6f
        _emit 0xf4
        psubusb mm4, mm5
        psubusb mm5, mm6
        por mm4, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xec
        punpcklbw mm4, mm3
        punpckhbw mm5, mm3
        paddw mm4, mm5
        paddw mm0, mm4
        _emit 0x0f
        _emit 0x6f
        _emit 0xc8
        punpcklwd mm0, mm3
        punpckhwd mm1, mm3
        paddw mm0, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xc8
        psrlq mm0, 0x20
        paddw mm0, mm1
        movd eax, mm0
        pop edi
        pop esi
        _emit 0x89
        _emit 0xec
        pop ebp
        ret
    }
}
