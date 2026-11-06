// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_5004F0 {
    Obj_5004F0();
    virtual void v0();
    virtual int v1();
    char pad[0xA4];
};
extern Obj_5004F0* g_759C9C;

// FUNCTION: 0x5004F0 ?create_5004F0@@YAHXZ
int create_5004F0()
{
    if (!g_759C9C) {
        Obj_5004F0* p = new Obj_5004F0;
        int r = p->v1();
        g_759C9C = p;
        return r;
    }
    return 0;
}
