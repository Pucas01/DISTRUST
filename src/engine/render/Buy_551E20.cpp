// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Handle551E20 {
    int v;
};
struct Node551E20 {
    Handle551E20 f[3];
    char pad[24];
};
struct Al551E20 {
    void construct(Handle551E20* p, const Handle551E20& v);
};
struct Tree551E20 {
    Node551E20* buy();
};

// FUNCTION: 0x551E20 ?buy@Tree551E20@@QAEPAUNode551E20@@XZ
Node551E20* Tree551E20::buy()
{
    Al551E20 al;
    Node551E20* p = (Node551E20*)operator new(36);
    if (!p)
        std::_Xbad_alloc();
    try {
        al.construct(&p->f[0], *(Handle551E20*)this);
        al.construct(&p->f[1], *(Handle551E20*)this);
        al.construct(&p->f[2], *(Handle551E20*)this);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
