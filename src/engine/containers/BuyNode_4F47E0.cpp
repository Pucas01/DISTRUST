// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val4F47E0 {
    char b[4];
};
struct Node4F47E0 {
    char pad[8];
    Val4F47E0 val;
};
struct Al4F47E0 {
    void construct(Val4F47E0* p, const Val4F47E0& v);
};
Node4F47E0* __stdcall buyhead4F47E0(Node4F47E0* a, Node4F47E0* b);

// FUNCTION: 0x4F47E0 ?buynode@@YGPAUNode4F47E0@@PAU1@0ABUVal4F47E0@@@Z
Node4F47E0* __stdcall buynode(Node4F47E0* a, Node4F47E0* b, const Val4F47E0& v)
{
    Node4F47E0* p = buyhead4F47E0(a, b);
    try {
        Al4F47E0 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
