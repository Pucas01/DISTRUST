// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Base_5194A0 {
    virtual ~Base_5194A0();
};
struct D_51D240 : Base_5194A0 {
    virtual ~D_51D240() {}
};

// FUNCTION: 0x51D240 ??_GD_51D240@@UAEPAXI@Z
D_51D240* createD_51D240()
{
    return new D_51D240;
}
