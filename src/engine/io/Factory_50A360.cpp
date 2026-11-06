// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_50A360 {
    Obj_50A360();
    char pad[0x268];
};

// FUNCTION: 0x50A360 createObj50A360
void* createObj50A360()
{
    return new Obj_50A360();
}
