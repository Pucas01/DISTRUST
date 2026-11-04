#include "game/game_mode.h"

extern const char* g_695794;

void __cdecl resetEntry(int a, const char* name);
int __cdecl sub_4D79F0(int a, int b);
int __cdecl sub_4C6090(int id);

// STUB: 0x451C30 sub_451C30 (192 bytes)
void sub_451C30()
{
}

// STUB: 0x451CF0 sub_451CF0 (793 bytes)
void sub_451CF0()
{
}

// FUNCTION: 0x452010 releaseStateHandle
void releaseStateHandle()
{
    short h = *(short*)(g_gameState + 0xFEC);
    if (h != -1) {
        sub_4C6090(h);
        *(short*)(g_gameState + 0xFEC) = -1;
        *(int*)(g_gameState + 0xFE4) = 0;
    }
}

// FUNCTION: 0x452050 isCounterHigh
char isCounterHigh()
{
    return sub_4D79F0(0, 0) >= 1000;
}

// STUB: 0x452070 sub_452070 (2175 bytes)
void sub_452070()
{
}

// STUB: 0x4528F0 sub_4528F0 (316 bytes)
void sub_4528F0()
{
}

// STUB: 0x452A30 sub_452A30 (350 bytes)
void sub_452A30()
{
}

// STUB: 0x452B90 sub_452B90 (788 bytes)
void sub_452B90()
{
}

// STUB: 0x452EB0 sub_452EB0 (467 bytes)
void sub_452EB0()
{
}

// STUB: 0x453090 sub_453090 (79 bytes)
void sub_453090()
{
}

// FUNCTION: 0x4530E0 getStateInt
int __cdecl getStateInt(int index)
{
    return *(int*)(g_gameState + index * 4 + 0x8A74);
}

// STUB: 0x453100 sub_453100 (144 bytes)
void sub_453100()
{
}

// STUB: 0x453190 sub_453190 (344 bytes)
void sub_453190()
{
}

// STUB: 0x4532F0 sub_4532F0 (254 bytes)
void sub_4532F0()
{
}

// STUB: 0x4533F0 sub_4533F0 (254 bytes)
void sub_4533F0()
{
}

// STUB: 0x4534F0 sub_4534F0 (6231 bytes)
void sub_4534F0()
{
}

// STUB: 0x454D50 sub_454D50 (871 bytes)
void sub_454D50()
{
}

// STUB: 0x4550C0 sub_4550C0 (1074 bytes)
void sub_4550C0()
{
}

// STUB: 0x455500 sub_455500 (953 bytes)
void sub_455500()
{
}

// FUNCTION: 0x4558C0 resetStateEntry
void resetStateEntry()
{
    resetEntry(*(int*)(g_gameState + 0x89F8), g_695794);
}

// STUB: 0x4558E0 sub_4558E0 (164 bytes)
void sub_4558E0()
{
}

// STUB: 0x4559C0 sub_4559C0 (1919 bytes)
void sub_4559C0()
{
}

// STUB: 0x456140 sub_456140 (3389 bytes)
void sub_456140()
{
}

// STUB: 0x456EC0 sub_456EC0 (258 bytes)
void sub_456EC0()
{
}

// STUB: 0x456FD0 sub_456FD0 (173 bytes)
void sub_456FD0()
{
}

// STUB: 0x457080 sub_457080 (228 bytes)
void sub_457080()
{
}

// STUB: 0x457170 sub_457170 (187 bytes)
void sub_457170()
{
}

// STUB: 0x457230 sub_457230 (231 bytes)
void sub_457230()
{
}

// STUB: 0x457320 sub_457320 (1241 bytes)
void sub_457320()
{
}

// STUB: 0x457800 sub_457800 (126 bytes)
void sub_457800()
{
}
