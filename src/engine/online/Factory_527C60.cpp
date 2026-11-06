// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_527C60 {
    Obj_527C60();
    char pad[0x188];
};

// FUNCTION: 0x527C60 createObj527C60
void* createObj527C60()
{
    return new Obj_527C60();
}
