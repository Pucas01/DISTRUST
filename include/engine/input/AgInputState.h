#pragma once

#include <vector>

struct SDL_Keysym
{
    int scancode;
    int sym;
    unsigned short mod;
    unsigned unused;
};

struct AgCursor
{
    float x;
    float y;
};

struct AgKeyboardState
{
    char pad00[0x48];
    std::vector<bool> keys;
};

struct AgMouseState
{
    char pad00[0x78];
    std::vector<bool> buttons;
    AgCursor cursor;
    float x;
    float y;
};

struct SDL_MouseMotionEvent
{
    unsigned type;
    unsigned timestamp;
    unsigned windowID;
    unsigned which;
    unsigned state;
    int x;
    int y;
    int xrel;
    int yrel;
};
