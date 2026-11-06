// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Base_5194A0 {
    virtual ~Base_5194A0();
};
struct D_51D630 : Base_5194A0 {
    virtual ~D_51D630() {}
};

// FUNCTION: 0x51D630 ??_GD_51D630@@UAEPAXI@Z
D_51D630* createD_51D630()
{
    return new D_51D630;
}
