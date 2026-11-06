// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val5030F0 {
    char b[4];
};
struct Node5030F0 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val5030F0 val;
};
struct Al5030F0 {
    void construct(Val5030F0* p, const Val5030F0& v);
};
struct Tree5030F0 {
    Node5030F0* buyhead();
    Node5030F0* buynode(const Val5030F0& v);
};

// FUNCTION: 0x5030F0 ?buynode@Tree5030F0@@QAEPAUNode5030F0@@ABUVal5030F0@@@Z
Node5030F0* Tree5030F0::buynode(const Val5030F0& v)
{
    Node5030F0* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al5030F0 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
