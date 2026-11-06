// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Obj_52B620 {
    Obj_52B620();
    char pad[0x4];
};

// FUNCTION: 0x52B620 createObj52B620
void* createObj52B620()
{
    return new Obj_52B620();
}
