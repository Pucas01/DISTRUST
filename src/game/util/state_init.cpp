struct ModeRecord {
    int a;
    int b;
    unsigned short c;
    unsigned short d;
    unsigned short e;
    unsigned short f;
    unsigned short g;
    int h;
};

extern ModeRecord g_modeRecords[];
extern int g_6FDB88;
extern int g_6FDB98;
extern unsigned short g_6FDB9C;
extern unsigned short g_6FDB9E;
extern unsigned short g_6FDBA0;
extern unsigned short g_6FDBA2;
extern unsigned short g_6E47BE;
extern int g_6FDBA4;
extern int g_6E4758;

// FUNCTION: 0x43E480 sub_43E480
void __cdecl sub_43E480(int index)
{
    ModeRecord* record = &g_modeRecords[index];
    record->a = g_6FDB88;
    record->b = g_6FDB98;
    record->c = g_6FDB9C;
    record->d = g_6FDB9E;
    record->e = g_6FDBA0;
    record->f = g_6FDBA2;
    record->g = g_6E47BE;
    record->h = g_6FDBA4;
    record->a = (g_6E4758 & 0x2000) ? 0 : record->a;
}

struct OverlayStyle {
    unsigned short a;
    unsigned color;
    float scale;
    short b;
    unsigned char kind;
    char pad0[0x18 - 0x0F];
    float x;
    float y;
    float z;
    float w;
    unsigned fillA;
    unsigned fillB;
    char pad1[0xFC - 0x30];
};

extern OverlayStyle g_overlayStyle;

void* __cdecl memset(void*, int, unsigned);

// FUNCTION: 0x4D6250 sub_4D6250
void __cdecl sub_4D6250()
{
    memset(&g_overlayStyle, 0, 0xFC);
    g_overlayStyle.a = 1;
    g_overlayStyle.color = 0xFF222222;
    g_overlayStyle.scale = 60.0f;
    g_overlayStyle.b = 1;
    g_overlayStyle.kind = 6;
    g_overlayStyle.x = -5.0f;
    g_overlayStyle.y = 10.0f;
    g_overlayStyle.z = 5.0f;
    g_overlayStyle.w = 0.0f;
    g_overlayStyle.fillA = 0xFFFFFF;
    g_overlayStyle.fillB = 0xFFFFFF;
}

struct GameGlobals {
    char pad[0x85E0];
    unsigned char marker;
};

extern GameGlobals* g_gameState;
extern unsigned char g_73E3EC;
extern unsigned char g_73E3ED;
extern unsigned char g_73E350;
extern unsigned char g_73E351;
extern unsigned char g_73E391;
extern unsigned char g_73E400;
extern const void* g_73E3F8;
extern const void* g_73E3FC;
extern int g_73E3F2;
extern int g_73E352;
extern short g_73E394;
extern int g_73E3D4;
extern int g_73E3D8;
extern unsigned short g_6FDB90;

extern const char g_698140[];
extern const char g_698150[];

static unsigned char clampByte(int value)
{
    return value < 0 ? 0xFF : (unsigned char)value;
}

// FUNCTION: 0x48D560 sub_48D560
void __cdecl sub_48D560(const void* first, const void* second, short id, int a, int b)
{
    g_73E3EC = clampByte(a);
    unsigned char clampedB = clampByte(b);
    g_73E3F8 = first ? first : g_698140;
    g_73E3FC = second ? second : g_698150;
    g_73E3F2 = 0;
    g_73E394 = id;
    g_73E352 = 0;
    g_73E3ED = clampedB;
    g_73E351 = g_73E350 == 0 ? 0x17 : 0x16;
    g_73E3D4 = g_73E3D8;
    g_6FDB90 = (unsigned short)g_73E3D8;
    g_6FDB98 = g_6FDB88;
    *(int*)&g_6FDB9C = 0;
    *(int*)&g_6FDBA0 = 0;
    g_73E400 = 0;
    g_73E391 = 2;
    g_gameState->marker = 0xFF;
}

#pragma pack(push, 1)
struct CursorState {
    char pad0[8];
    unsigned char active;
    char pad1[0x16 - 9];
    short s16;
    short s18;
    short s1A;
    short s1C;
    unsigned colors[9];
    unsigned short last;
    unsigned char flag;
    char pad2[0x84 - 0x45];
};

struct CursorTrail {
    unsigned char head;
    char pad0[0x0C - 1];
    short s0C, s0E, s10, s12, s14, s16;
    unsigned char tail;
    char pad1[0x24 - 0x19];
    short s24, s26, s28, s2A, s2C, s2E;
};
#pragma pack(pop)

extern CursorState g_cursorState;
extern CursorTrail g_cursorTrail;

// FUNCTION: 0x4A3E50 sub_4A3E50
void __cdecl sub_4A3E50()
{
    memset(&g_cursorState, 0, sizeof(CursorState));
    short invalid = -1;
    unsigned color = (unsigned short)invalid | ((unsigned short)invalid << 16);
    g_cursorState.active = 1;
    g_cursorState.s16 = invalid;
    g_cursorState.s1C = invalid;
    g_cursorState.s18 = invalid;
    g_cursorState.s1A = invalid;
    for (int i = 0; i < 9; i++)
        g_cursorState.colors[i] = color;
    g_cursorState.last = (unsigned short)color;
    g_cursorState.flag = 0;
    memset(&g_cursorTrail, 0, 0x30);
    g_cursorTrail.s0C = invalid;
    g_cursorTrail.s0E = invalid;
    g_cursorTrail.s10 = invalid;
    g_cursorTrail.s12 = invalid;
    g_cursorTrail.s14 = invalid;
    g_cursorTrail.s16 = invalid;
    g_cursorTrail.s24 = invalid;
    g_cursorTrail.s26 = invalid;
    g_cursorTrail.s28 = invalid;
    g_cursorTrail.s2A = invalid;
    g_cursorTrail.s2C = invalid;
    g_cursorTrail.s2E = invalid;
    g_cursorTrail.head = 0;
    g_cursorTrail.tail = 0;
}

struct SlotEntry {
    int ids[25];
    int count;
    bool flagWord;
    char padb;
    short pad;
};

extern SlotEntry g_slotEntries[7];
extern int g_699234;
extern int g_699230;

// FUNCTION: 0x4AFF90 sub_4AFF90
void __cdecl sub_4AFF90()
{
    SlotEntry* entry = g_slotEntries;
    for (int remaining = 7; remaining; remaining--) {
        for (int j = 1; j < 25; j++)
            entry->ids[j] = -1;
        entry->count = 0;
        entry->ids[0] = -1;
        *(short*)&entry->flagWord = 0;
        entry++;
    }
    g_699234 = -1;
    g_699230 = -1;
}
