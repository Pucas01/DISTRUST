// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Base_540CF0 {
    virtual ~Base_540CF0();
};
struct D_54B940 : Base_540CF0 {
    virtual ~D_54B940() {}
};

// FUNCTION: 0x54B940 ??_GD_54B940@@UAEPAXI@Z
D_54B940* createD_54B940()
{
    return new D_54B940;
}
