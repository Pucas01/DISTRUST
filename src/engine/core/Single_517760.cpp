// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_517760 {
    Obj_517760();
    virtual void v0();
    virtual int v1();
    char pad[0x4];
};
extern Obj_517760* g_759D94;

// FUNCTION: 0x517760 ?create_517760@@YAHXZ
int create_517760()
{
    if (!g_759D94) {
        Obj_517760* p = new Obj_517760;
        int r = p->v1();
        g_759D94 = p;
        return r;
    }
    return 0;
}
