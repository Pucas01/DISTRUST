// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHsc
#include "engine/core/AgString.h"

struct V4E3D70 {
    int p;
    int q;
    ~V4E3D70();
};

struct DualValue4E5290 {
    char pad[0x110];
    V4E3D70 first;
    V4E3D70 second;
    ~DualValue4E5290();
};
struct TwoNames4E3D70 {
    int id;
    AgString first;
    AgString second;
    ~TwoNames4E3D70();
};

// FUNCTION: 0x4E3D70 ??1TwoNames4E3D70@@QAE@XZ
TwoNames4E3D70::~TwoNames4E3D70()
{
}

// FUNCTION: 0x4E5290 ??1DualValue4E5290@@QAE@XZ
DualValue4E5290::~DualValue4E5290()
{
}
