// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem50E610 {
    char b[16];
};
struct Alloc50E610 {
    void construct(Elem50E610* dst, Elem50E610* src);
};

// FUNCTION: 0x50E610 ?umoveLoop50E610@@YAPAUElem50E610@@PAU1@00PAUAlloc50E610@@0UDTag@@@Z
Elem50E610* __cdecl umoveLoop50E610(Elem50E610* first, Elem50E610* last, Elem50E610* dest, Alloc50E610* al, Elem50E610* nul, DTag t)
{
    try {
        for (; first != last; ++dest, ++first)
            al->construct(dest, first);
    } catch (...) {
        throw;
    }
    return dest;
}
