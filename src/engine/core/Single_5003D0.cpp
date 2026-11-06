// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_5003D0 {
    Obj_5003D0();
    virtual void v0();
    virtual int v1();
    char pad[0xEC];
};
extern Obj_5003D0* g_759C04;

// FUNCTION: 0x5003D0 ?create_5003D0@@YAHXZ
int create_5003D0()
{
    if (!g_759C04) {
        Obj_5003D0* p = new Obj_5003D0;
        int r = p->v1();
        g_759C04 = p;
        return r;
    }
    return 0;
}
