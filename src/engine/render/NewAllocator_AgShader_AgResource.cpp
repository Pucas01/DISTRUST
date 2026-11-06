// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_532FE0 {
    Obj_532FE0();
    char pad[0x4C];
};

// FUNCTION: 0x532FE0 createObj532FE0
void* createObj532FE0()
{
    return new Obj_532FE0();
}
