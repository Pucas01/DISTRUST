// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem520750 {
    char b[4];
};
void __cdecl umoveInner_5207B0(Elem520750* first, Elem520750* last, Elem520750* dest, char* al, Elem520750* nul, DTag t);

struct Vec520750 {
    void umove(Elem520750* first, Elem520750* last, Elem520750* dest);
};

// FUNCTION: 0x520750 ?umove@Vec520750@@QAEXPAUElem520750@@00@Z
void Vec520750::umove(Elem520750* first, Elem520750* last, Elem520750* dest)
{
    char al;
    DTag t;
    umoveInner_5207B0(first, last, dest, &al, (Elem520750*)0, t);
}

struct Elem520780 {
    char b[4];
};
void __cdecl umoveInner_520840(Elem520780* first, Elem520780* last, Elem520780* dest, char* al, Elem520780* nul, DTag t);

struct Vec520780 {
    void umove(Elem520780* first, Elem520780* last, Elem520780* dest);
};

// FUNCTION: 0x520780 ?umove@Vec520780@@QAEXPAUElem520780@@00@Z
void Vec520780::umove(Elem520780* first, Elem520780* last, Elem520780* dest)
{
    char al;
    DTag t;
    umoveInner_520840(first, last, dest, &al, (Elem520780*)0, t);
}

