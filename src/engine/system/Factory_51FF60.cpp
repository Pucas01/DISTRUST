// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_51FF60 {
    Obj_51FF60();
    char pad[0x310];
};

// FUNCTION: 0x51FF60 createObj51FF60
void* createObj51FF60()
{
    return new Obj_51FF60();
}
