// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val52BCA0 {
    char b[4];
};
struct Node52BCA0 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val52BCA0 val;
};
struct Al52BCA0 {
    void construct(Val52BCA0* p, const Val52BCA0& v);
};
struct Tree52BCA0 {
    Node52BCA0* buyhead();
    Node52BCA0* buynode(const Val52BCA0& v);
};

// FUNCTION: 0x52BCA0 ?buynode@Tree52BCA0@@QAEPAUNode52BCA0@@ABUVal52BCA0@@@Z
Node52BCA0* Tree52BCA0::buynode(const Val52BCA0& v)
{
    Node52BCA0* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al52BCA0 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
