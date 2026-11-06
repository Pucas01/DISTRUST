// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_5176D0 {
    Obj_5176D0();
    virtual void v0();
    virtual int v1();
    char pad[0x4];
};
extern Obj_5176D0* g_73F4D8;

// FUNCTION: 0x5176D0 ?create_5176D0@@YAHXZ
int create_5176D0()
{
    if (!g_73F4D8) {
        Obj_5176D0* p = new Obj_5176D0;
        int r = p->v1();
        g_73F4D8 = p;
        return r;
    }
    return 0;
}
