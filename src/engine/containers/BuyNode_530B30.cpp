// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val530B30 {
    char b[4];
};
struct Node530B30 {
    char pad[8];
    Val530B30 val;
};
struct Al530B30 {
    void construct(Val530B30* p, const Val530B30& v);
};
Node530B30* __stdcall buyhead530B30(Node530B30* a, Node530B30* b);

// FUNCTION: 0x530B30 ?buynode@@YGPAUNode530B30@@PAU1@0ABUVal530B30@@@Z
Node530B30* __stdcall buynode(Node530B30* a, Node530B30* b, const Val530B30& v)
{
    Node530B30* p = buyhead530B30(a, b);
    try {
        Al530B30 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
