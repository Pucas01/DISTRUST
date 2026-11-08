// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val503060 {
    char b[4];
};
struct Node503060 {
    char pad[8];
    Val503060 val;
};
struct Al503060 {
    void construct(Val503060* p, const Val503060& v);
};
Node503060* __stdcall buyhead503060(Node503060* a, Node503060* b);

// FUNCTION: 0x503060 ?buynode@@YGPAUNode503060@@PAU1@0ABUVal503060@@@Z
Node503060* __stdcall buynode(Node503060* a, Node503060* b, const Val503060& v)
{
    Node503060* p = buyhead503060(a, b);
    try {
        Al503060 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
