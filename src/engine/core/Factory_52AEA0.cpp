// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_52AEA0 {
    Obj_52AEA0();
    char pad[0x20];
};

// FUNCTION: 0x52AEA0 createObj52AEA0
void* createObj52AEA0()
{
    return new Obj_52AEA0();
}
