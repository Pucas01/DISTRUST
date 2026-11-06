// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_500460 {
    Obj_500460();
    virtual void v0();
    virtual int v1();
    char pad[0x198];
};
extern Obj_500460* g_759C98;

// FUNCTION: 0x500460 ?create_500460@@YAHXZ
int create_500460()
{
    if (!g_759C98) {
        Obj_500460* p = new Obj_500460;
        int r = p->v1();
        g_759C98 = p;
        return r;
    }
    return 0;
}
