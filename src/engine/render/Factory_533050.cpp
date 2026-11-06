// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_533050 {
    Obj_533050();
    char pad[0x6C];
};

// FUNCTION: 0x533050 createObj533050
void* createObj533050()
{
    return new Obj_533050();
}
