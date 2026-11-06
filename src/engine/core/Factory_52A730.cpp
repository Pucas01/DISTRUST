// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_52A730 {
    Obj_52A730();
    char pad[0x3C];
};

// FUNCTION: 0x52A730 createObj52A730
void* createObj52A730()
{
    return new Obj_52A730();
}
