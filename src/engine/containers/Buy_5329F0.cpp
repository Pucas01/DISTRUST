// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Handle5329F0 {
    int v;
};
struct Node5329F0 {
    Handle5329F0 f[3];
    char pad[12];
};
struct Al5329F0 {
    void construct(Handle5329F0* p, const Handle5329F0& v);
};
struct Tree5329F0 {
    Node5329F0* buy();
};

// FUNCTION: 0x5329F0 ?buy@Tree5329F0@@QAEPAUNode5329F0@@XZ
Node5329F0* Tree5329F0::buy()
{
    Al5329F0 al;
    Node5329F0* p = (Node5329F0*)operator new(24);
    if (!p)
        std::_Xbad_alloc();
    try {
        al.construct(&p->f[0], *(Handle5329F0*)this);
        al.construct(&p->f[1], *(Handle5329F0*)this);
        al.construct(&p->f[2], *(Handle5329F0*)this);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
