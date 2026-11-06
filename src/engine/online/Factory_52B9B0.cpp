// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_52B9B0 {
    Obj_52B9B0();
    char pad[0x7C];
};

// FUNCTION: 0x52B9B0 createObj52B9B0
void* createObj52B9B0()
{
    return new Obj_52B9B0();
}
