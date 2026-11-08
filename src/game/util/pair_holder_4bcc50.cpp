// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHsc
#include <string.h>

struct V4BCC50 {
    int p;
    int q;
    V4BCC50()
        : p(0)
        , q(0)
    {
    }
    ~V4BCC50();
};

struct X4BCC50 {
    char pad[0x1c];
    V4BCC50 a;
    V4BCC50 b;
    X4BCC50();
    ~X4BCC50();
};

// FUNCTION: 0x4BCC50 ??0X4BCC50@@QAE@XZ
X4BCC50::X4BCC50()
{
    memset(this, 0, 0x34);
}

// FUNCTION: 0x4BCC80 ??1X4BCC50@@QAE@XZ
X4BCC50::~X4BCC50()
{
}
