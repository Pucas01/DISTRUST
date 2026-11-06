// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Handle504730 {
    int v;
};
struct Node504730 {
    Handle504730 f[3];
    char pad[36];
};
struct Al504730 {
    void construct(Handle504730* p, const Handle504730& v);
};
struct Tree504730 {
    Node504730* buy();
};

// FUNCTION: 0x504730 ?buy@Tree504730@@QAEPAUNode504730@@XZ
Node504730* Tree504730::buy()
{
    Al504730 al;
    Node504730* p = (Node504730*)operator new(48);
    if (!p)
        std::_Xbad_alloc();
    try {
        al.construct(&p->f[0], *(Handle504730*)this);
        al.construct(&p->f[1], *(Handle504730*)this);
        al.construct(&p->f[2], *(Handle504730*)this);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
