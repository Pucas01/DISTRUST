// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_50D700 {
    Obj_50D700();
    char pad[0x124];
};

// FUNCTION: 0x50D700 createObj50D700
void* createObj50D700()
{
    return new Obj_50D700();
}
