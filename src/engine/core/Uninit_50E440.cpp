// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem50E440 {
    char b[20];
};
struct Alloc50E440 {
    void construct(Elem50E440* dst, Elem50E440* src);
};

// FUNCTION: 0x50E440 ?umoveLoop50E440@@YAPAUElem50E440@@PAU1@00PAUAlloc50E440@@0UDTag@@@Z
Elem50E440* __cdecl umoveLoop50E440(Elem50E440* first, Elem50E440* last, Elem50E440* dest, Alloc50E440* al, Elem50E440* nul, DTag t)
{
    try {
        for (; first != last; ++dest, ++first)
            al->construct(dest, first);
    } catch (...) {
        throw;
    }
    return dest;
}
