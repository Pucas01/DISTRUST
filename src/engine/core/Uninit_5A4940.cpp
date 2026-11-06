// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem5A4940 {
    char b[12];
};
struct Alloc5A4940 {
    void construct(Elem5A4940* dst, Elem5A4940* src);
};

// FUNCTION: 0x5A4940 ?umoveLoop5A4940@@YAPAUElem5A4940@@PAU1@00PAUAlloc5A4940@@0UDTag@@@Z
Elem5A4940* __cdecl umoveLoop5A4940(Elem5A4940* first, Elem5A4940* last, Elem5A4940* dest, Alloc5A4940* al, Elem5A4940* nul, DTag t)
{
    try {
        for (; first != last; ++dest, ++first)
            al->construct(dest, first);
    } catch (...) {
        throw;
    }
    return dest;
}
