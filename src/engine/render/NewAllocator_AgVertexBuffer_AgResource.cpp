// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_533130 {
    Obj_533130();
    char pad[0x4C];
};

// FUNCTION: 0x533130 createObj533130
void* createObj533130()
{
    return new Obj_533130();
}
