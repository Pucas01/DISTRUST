// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val5501F0 {
    char b[4];
};
struct Node5501F0 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val5501F0 val;
};
struct Al5501F0 {
    void construct(Val5501F0* p, const Val5501F0& v);
};
struct Tree5501F0 {
    Node5501F0* buyhead();
    Node5501F0* buynode(const Val5501F0& v);
};

// FUNCTION: 0x5501F0 ?buynode@Tree5501F0@@QAEPAUNode5501F0@@ABUVal5501F0@@@Z
Node5501F0* Tree5501F0::buynode(const Val5501F0& v)
{
    Node5501F0* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al5501F0 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
