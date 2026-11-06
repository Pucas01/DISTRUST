// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Handle54E880 {
    int v;
};
struct Node54E880 {
    Handle54E880 f[3];
    char pad[20];
};
struct Al54E880 {
    void construct(Handle54E880* p, const Handle54E880& v);
};
struct Tree54E880 {
    Node54E880* buy();
};

// FUNCTION: 0x54E880 ?buy@Tree54E880@@QAEPAUNode54E880@@XZ
Node54E880* Tree54E880::buy()
{
    Al54E880 al;
    Node54E880* p = (Node54E880*)operator new(32);
    if (!p)
        std::_Xbad_alloc();
    try {
        al.construct(&p->f[0], *(Handle54E880*)this);
        al.construct(&p->f[1], *(Handle54E880*)this);
        al.construct(&p->f[2], *(Handle54E880*)this);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
