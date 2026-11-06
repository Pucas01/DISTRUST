// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_5330C0 {
    Obj_5330C0();
    char pad[0x4C];
};

// FUNCTION: 0x5330C0 createObj5330C0
void* createObj5330C0()
{
    return new Obj_5330C0();
}
