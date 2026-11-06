// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem531240 {
    char b[4];
};
struct Alloc531240 {
    void construct(Elem531240* dst, Elem531240* src);
};

// FUNCTION: 0x531240 ?umoveLoop531240@@YAPAUElem531240@@PAU1@00PAUAlloc531240@@0UDTag@@@Z
Elem531240* __cdecl umoveLoop531240(Elem531240* first, Elem531240* last, Elem531240* dest, Alloc531240* al, Elem531240* nul, DTag t)
{
    try {
        for (; first != last; ++dest, ++first)
            al->construct(dest, first);
    } catch (...) {
        throw;
    }
    return dest;
}
