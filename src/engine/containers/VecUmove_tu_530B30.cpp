// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem531190 {
    char b[4];
};
void __cdecl umoveInner_531240(Elem531190* first, Elem531190* last, Elem531190* dest, char* al, Elem531190* nul, DTag t);

struct Vec531190 {
    void umove(Elem531190* first, Elem531190* last, Elem531190* dest);
};

// FUNCTION: 0x531190 ?umove@Vec531190@@QAEXPAUElem531190@@00@Z
void Vec531190::umove(Elem531190* first, Elem531190* last, Elem531190* dest)
{
    char al;
    DTag t;
    umoveInner_531240(first, last, dest, &al, (Elem531190*)0, t);
}

