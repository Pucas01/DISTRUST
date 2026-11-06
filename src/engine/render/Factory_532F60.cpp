// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_532F60 {
    Obj_532F60();
    char pad[0x80];
};

// FUNCTION: 0x532F60 createObj532F60
void* createObj532F60()
{
    return new Obj_532F60();
}
