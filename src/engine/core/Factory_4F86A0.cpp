// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_4F86A0 {
    Obj_4F86A0();
    char pad[0x6A0];
};

// FUNCTION: 0x4F86A0 createObj4F86A0
void* createObj4F86A0()
{
    return new Obj_4F86A0();
}
