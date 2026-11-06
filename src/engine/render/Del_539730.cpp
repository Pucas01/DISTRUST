// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Base_5630E0 {
    virtual ~Base_5630E0();
};
struct D_539730 : Base_5630E0 {
    virtual ~D_539730() {}
};

// FUNCTION: 0x539730 ??_GD_539730@@UAEPAXI@Z
D_539730* createD_539730()
{
    return new D_539730;
}
