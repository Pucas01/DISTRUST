// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val5123F0 {
    char b[4];
};
struct Node5123F0 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val5123F0 val;
};
struct Al5123F0 {
    void construct(Val5123F0* p, const Val5123F0& v);
};
struct Tree5123F0 {
    Node5123F0* buyhead();
    Node5123F0* buynode(const Val5123F0& v);
};

// FUNCTION: 0x5123F0 ?buynode@Tree5123F0@@QAEPAUNode5123F0@@ABUVal5123F0@@@Z
Node5123F0* Tree5123F0::buynode(const Val5123F0& v)
{
    Node5123F0* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al5123F0 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
