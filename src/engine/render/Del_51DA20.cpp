// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Base_5194A0 {
    virtual ~Base_5194A0();
};
struct D_51DA20 : Base_5194A0 {
    virtual ~D_51DA20() {}
};

// FUNCTION: 0x51DA20 ??_GD_51DA20@@UAEPAXI@Z
D_51DA20* createD_51DA20()
{
    return new D_51DA20;
}
