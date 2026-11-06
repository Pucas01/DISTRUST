// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Handle4F74F0 {
    int v;
};
struct Node4F74F0 {
    Handle4F74F0 f[3];
    char c0;
    char c1;
    char pad[30];
};
struct Al4F74F0 {
    void construct(Handle4F74F0* p, const Handle4F74F0& v);
};
struct Tree4F74F0 {
    Node4F74F0* buy();
};

// FUNCTION: 0x4F74F0 ?buy@Tree4F74F0@@QAEPAUNode4F74F0@@XZ
Node4F74F0* Tree4F74F0::buy()
{
    Al4F74F0 al;
    Node4F74F0* q = (Node4F74F0*)operator new(44);
    if (!q)
        std::_Xbad_alloc();
    Node4F74F0* pp = q;
    try {
        al.construct(&q->f[0], *(Handle4F74F0*)&pp);
        al.construct(&q->f[1], *(Handle4F74F0*)&pp);
        al.construct(&q->f[2], *(Handle4F74F0*)&pp);
    } catch (...) {
        operator delete(q);
        throw;
    }
    q->c0 = 1;
    q->c1 = 1;
    return q;
}
