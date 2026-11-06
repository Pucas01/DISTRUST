// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val52BD30 {
    char b[4];
};
struct Node52BD30 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val52BD30 val;
};
struct Al52BD30 {
    void construct(Val52BD30* p, const Val52BD30& v);
};
struct Tree52BD30 {
    Node52BD30* buyhead();
    Node52BD30* buynode(const Val52BD30& v);
};

// FUNCTION: 0x52BD30 ?buynode@Tree52BD30@@QAEPAUNode52BD30@@ABUVal52BD30@@@Z
Node52BD30* Tree52BD30::buynode(const Val52BD30& v)
{
    Node52BD30* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al52BD30 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
