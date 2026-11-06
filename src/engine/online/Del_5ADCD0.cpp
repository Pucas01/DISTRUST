// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Base_5C4E60 {
    virtual ~Base_5C4E60();
};
struct D_5ADCD0 : Base_5C4E60 {
    virtual ~D_5ADCD0() {}
};

// FUNCTION: 0x5ADCD0 ??_GD_5ADCD0@@UAEPAXI@Z
D_5ADCD0* createD_5ADCD0()
{
    return new D_5ADCD0;
}
