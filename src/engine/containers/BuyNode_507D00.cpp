// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val507D00 {
    char b[4];
};
struct Node507D00 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val507D00 val;
};
struct Al507D00 {
    void construct(Val507D00* p, const Val507D00& v);
};
struct Tree507D00 {
    Node507D00* buyhead();
    Node507D00* buynode(const Val507D00& v);
};

// FUNCTION: 0x507D00 ?buynode@Tree507D00@@QAEPAUNode507D00@@ABUVal507D00@@@Z
Node507D00* Tree507D00::buynode(const Val507D00& v)
{
    Node507D00* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al507D00 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
