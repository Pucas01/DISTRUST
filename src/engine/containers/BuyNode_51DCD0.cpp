// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val51DCD0 {
    char b[4];
};
struct Node51DCD0 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val51DCD0 val;
};
struct Al51DCD0 {
    void construct(Val51DCD0* p, const Val51DCD0& v);
};
struct Tree51DCD0 {
    Node51DCD0* buyhead();
    Node51DCD0* buynode(const Val51DCD0& v);
};

// FUNCTION: 0x51DCD0 ?buynode@Tree51DCD0@@QAEPAUNode51DCD0@@ABUVal51DCD0@@@Z
Node51DCD0* Tree51DCD0::buynode(const Val51DCD0& v)
{
    Node51DCD0* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al51DCD0 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
