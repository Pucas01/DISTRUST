// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem520840 {
    char b[8];
    ~Elem520840();
};
struct Alloc520840 {
    void construct(Elem520840* dst, Elem520840* src);
};

// FUNCTION: 0x520840 ?umoveLoop520840@@YAPAUElem520840@@PAU1@00PAUAlloc520840@@0UDTag@@@Z
Elem520840* __cdecl umoveLoop520840(Elem520840* first, Elem520840* last, Elem520840* dest, Alloc520840* al, Elem520840* nul, DTag t)
{
    Elem520840* start = dest;
    try {
        for (; first != last; ++dest, ++first)
            al->construct(dest, first);
    } catch (...) {
        for (; start != dest; ++start)
            start->~Elem520840();
        throw;
    }
    return dest;
}
