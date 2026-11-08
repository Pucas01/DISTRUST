// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/core/AgString.h"

struct V4E3D70 {
    int p;
    int q;
    ~V4E3D70();
};

struct TwoNames4E3D70 {
    int id;
    AgString first;
    AgString second;
    ~TwoNames4E3D70();
};

struct NamedValue52D520 {
    char pad[0x18];
    AgString name;
    V4E3D70 value;
    ~NamedValue52D520();
};

struct Named54E260 {
    char pad[0xc];
    AgString name;
    ~Named54E260();
};

struct Named51FA90 {
    char pad[8];
    AgString name;
    ~Named51FA90();
};

struct Valued50D240 {
    char pad[4];
    V4E3D70 value;
    ~Valued50D240();
};

struct Valued527410 {
    char pad[8];
    V4E3D70 value;
    ~Valued527410();
};


// FUNCTION: 0x52D520 ??1NamedValue52D520@@QAE@XZ
NamedValue52D520::~NamedValue52D520()
{
}

// FUNCTION: 0x54E260 ??1Named54E260@@QAE@XZ
Named54E260::~Named54E260()
{
}

// FUNCTION: 0x51FA90 ??1Named51FA90@@QAE@XZ
Named51FA90::~Named51FA90()
{
}

// FUNCTION: 0x50D240 ??1Valued50D240@@QAE@XZ
Valued50D240::~Valued50D240()
{
}

// FUNCTION: 0x527410 ??1Valued527410@@QAE@XZ
Valued527410::~Valued527410()
{
}
