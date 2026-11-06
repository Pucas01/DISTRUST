// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Base_5194A0 {
    virtual ~Base_5194A0();
};
struct D_515BD0 : Base_5194A0 {
    virtual ~D_515BD0() {}
};

// FUNCTION: 0x515BD0 ??_GD_515BD0@@UAEPAXI@Z
D_515BD0* createD_515BD0()
{
    return new D_515BD0;
}
