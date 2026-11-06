// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Handle52DE90 {
    int v;
};
struct Node52DE90 {
    Handle52DE90 f[3];
    char pad[28];
};
struct Al52DE90 {
    void construct(Handle52DE90* p, const Handle52DE90& v);
};
struct Tree52DE90 {
    Node52DE90* buy();
};

// FUNCTION: 0x52DE90 ?buy@Tree52DE90@@QAEPAUNode52DE90@@XZ
Node52DE90* Tree52DE90::buy()
{
    Al52DE90 al;
    Node52DE90* p = (Node52DE90*)operator new(40);
    if (!p)
        std::_Xbad_alloc();
    try {
        al.construct(&p->f[0], *(Handle52DE90*)this);
        al.construct(&p->f[1], *(Handle52DE90*)this);
        al.construct(&p->f[2], *(Handle52DE90*)this);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
