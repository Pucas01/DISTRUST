// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Base_52D320 {
    virtual ~Base_52D320();
};
struct D_52DCC0 : Base_52D320 {
    virtual ~D_52DCC0() {}
};

// FUNCTION: 0x52DCC0 ??_GD_52DCC0@@UAEPAXI@Z
D_52DCC0* createD_52DCC0()
{
    return new D_52DCC0;
}
