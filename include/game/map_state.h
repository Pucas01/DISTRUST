#pragma once

#pragma pack(push, 1)
struct MapState
{
    short cursor; // 0x73D9B4
    short cursorTarget;              // 0x73D9B6
    int unk_B8;                      // 0x73D9B8
    int color;                       // 0x73D9BC
    int unk_C0;                      // 0x73D9C0
    int unk_C4;                      // 0x73D9C4
    unsigned char unk_C8;            // 0x73D9C8
    unsigned char unk_C9;            // 0x73D9C9
    unsigned char unk_CA;            // 0x73D9CA
    unsigned char unk_CB;            // 0x73D9CB
    short unk_CC;                    // 0x73D9CC
    short unk_CE;                    // 0x73D9CE
    int unk_D0;                      // 0x73D9D0
    unsigned char unk_D4;            // 0x73D9D4
    unsigned char unk_D5;            // 0x73D9D5
    unsigned char mode;              // 0x73D9D6
    unsigned char unk_D7[0x0A];      // 0x73D9D7
    unsigned char unk_E1;            // 0x73D9E1
    unsigned char unk_E2[0x0A];      // 0x73D9E2
    unsigned short unk_EC;           // 0x73D9EC
    unsigned short unk_EE;           // 0x73D9EE
    unsigned char unk_F0;            // 0x73D9F0
};
#pragma pack(pop)

extern MapState g_mapState;
extern signed char g_73DCB4;
extern signed char g_73DCB5;
extern signed char g_73DCBA;
extern signed char g_73DCBB;
extern int g_73DC04;

extern int* getColorTableA();
extern int* getColorTableB();
extern short* sub_476350(int);
extern void resetVertexColors();
extern void clearMapState();
extern void loadMapTextures(int);
extern int __cdecl playSound(int, int);
extern void sub_480E30(int);
