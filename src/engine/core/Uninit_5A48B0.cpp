// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem5A48B0 {
    char b[8];
};
struct Alloc5A48B0 {
    void construct(Elem5A48B0* dst, Elem5A48B0* src);
};

// FUNCTION: 0x5A48B0 ?umoveLoop5A48B0@@YAPAUElem5A48B0@@PAU1@00PAUAlloc5A48B0@@0UDTag@@@Z
Elem5A48B0* __cdecl umoveLoop5A48B0(Elem5A48B0* first, Elem5A48B0* last, Elem5A48B0* dest, Alloc5A48B0* al, Elem5A48B0* nul, DTag t)
{
    try {
        for (; first != last; ++dest, ++first)
            al->construct(dest, first);
    } catch (...) {
        throw;
    }
    return dest;
}
