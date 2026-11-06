// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem51F600 {
    char b[8];
    ~Elem51F600();
};
struct Alloc51F600 {
    void construct(Elem51F600* dst, Elem51F600* src);
};

// FUNCTION: 0x51F600 ?umoveLoop51F600@@YAPAUElem51F600@@PAU1@00PAUAlloc51F600@@0UDTag@@@Z
Elem51F600* __cdecl umoveLoop51F600(Elem51F600* first, Elem51F600* last, Elem51F600* dest, Alloc51F600* al, Elem51F600* nul, DTag t)
{
    Elem51F600* start = dest;
    try {
        for (; first != last; ++dest, ++first)
            al->construct(dest, first);
    } catch (...) {
        for (; start != dest; ++start)
            start->~Elem51F600();
        throw;
    }
    return dest;
}
