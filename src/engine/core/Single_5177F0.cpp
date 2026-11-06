// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_5177F0 {
    Obj_5177F0();
    virtual void v0();
    virtual int v1();
    char pad[0x0];
};
extern Obj_5177F0* g_759D98;

// FUNCTION: 0x5177F0 ?create_5177F0@@YAHXZ
int create_5177F0()
{
    if (!g_759D98) {
        Obj_5177F0* p = new Obj_5177F0;
        int r = p->v1();
        g_759D98 = p;
        return r;
    }
    return 0;
}
