struct Rec_g_696728 {
    char b[8];
};
extern Rec_g_696728 g_696728[];
struct Rec_g_696BD0 {
    char b[76];
};
extern Rec_g_696BD0 g_696BD0[];
struct Rec_g_696978 {
    char b[16];
};
extern Rec_g_696978 g_696978[];
struct Rec_g_696998 {
    char b[16];
};
extern Rec_g_696998 g_696998[];

struct Rec24 {
    int first;
    short id;
    char pad[0x1E];
};
extern Rec24 g_695FF8[];

// STUB: 0x470C60 sub_470C60 (18 bytes)
void sub_470C60()
{
}

// FUNCTION: 0x470C80 getRec696BD0
Rec_g_696BD0* __cdecl getRec696BD0(int i)
{
    return &g_696BD0[i];
}

// STUB: 0x470C90 sub_470C90 (18 bytes)
void sub_470C90()
{
}

// STUB: 0x470CB0 sub_470CB0 (18 bytes)
void sub_470CB0()
{
}

// STUB: 0x470CD0 sub_470CD0 (18 bytes)
void sub_470CD0()
{
}

// STUB: 0x470CF0 sub_470CF0 (18 bytes)
void sub_470CF0()
{
}

// FUNCTION: 0x470D10 findRec24
int __cdecl findRec24(int id, int nth)
{
    int n = 0;
    Rec24* p = g_695FF8;
    for (int i = 0; i < 0x33; i++, p++) {
        if (p->id == id) {
            if (n == nth)
                return p->first;
            n++;
        }
    }
    return 0;
}

// STUB: 0x470D50 sub_470D50 (67 bytes)
void sub_470D50()
{
}

// FUNCTION: 0x470DA0 getRec696728
Rec_g_696728* __cdecl getRec696728(int i)
{
    return &g_696728[i];
}

// STUB: 0x470DB0 sub_470DB0 (46 bytes)
void sub_470DB0()
{
}

// FUNCTION: 0x470E20 getRec696978
Rec_g_696978* __cdecl getRec696978(int i)
{
    return &g_696978[i];
}

// FUNCTION: 0x470E30 getRec696998
Rec_g_696998* __cdecl getRec696998(int i)
{
    return &g_696998[i];
}

// STUB: 0x470E40 sub_470E40 (184 bytes)
void sub_470E40()
{
}
