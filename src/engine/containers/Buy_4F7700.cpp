// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Handle4F7700 {
    int v;
};
struct Node4F7700 {
    Handle4F7700 f[3];
    char pad[32];
};
struct Al4F7700 {
    void construct(Handle4F7700* p, const Handle4F7700& v);
};
struct Tree4F7700 {
    Node4F7700* buy();
};

// FUNCTION: 0x4F7700 ?buy@Tree4F7700@@QAEPAUNode4F7700@@XZ
Node4F7700* Tree4F7700::buy()
{
    Al4F7700 al;
    Node4F7700* p = (Node4F7700*)operator new(44);
    if (!p)
        std::_Xbad_alloc();
    try {
        al.construct(&p->f[0], *(Handle4F7700*)this);
        al.construct(&p->f[1], *(Handle4F7700*)this);
        al.construct(&p->f[2], *(Handle4F7700*)this);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
