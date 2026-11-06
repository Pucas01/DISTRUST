// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_532EF0 {
    Obj_532EF0();
    char pad[0x4C];
};

// FUNCTION: 0x532EF0 createObj532EF0
void* createObj532EF0()
{
    return new Obj_532EF0();
}
