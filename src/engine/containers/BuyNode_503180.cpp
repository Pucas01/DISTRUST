// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val503180 {
    char b[4];
};
struct Node503180 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val503180 val;
};
struct Al503180 {
    void construct(Val503180* p, const Val503180& v);
};
struct Tree503180 {
    Node503180* buyhead();
    Node503180* buynode(const Val503180& v);
};

// FUNCTION: 0x503180 ?buynode@Tree503180@@QAEPAUNode503180@@ABUVal503180@@@Z
Node503180* Tree503180::buynode(const Val503180& v)
{
    Node503180* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al503180 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
