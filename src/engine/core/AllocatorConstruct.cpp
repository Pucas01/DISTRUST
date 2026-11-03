// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include <memory>

struct AgHandle
{
    AgHandle(const AgHandle& other) : value(other.value) {}

    int value;
};

// FUNCTION: 0x4FE660 ?construct@?$allocator@UAgHandle@@@std@@QAEXPAUAgHandle@@ABU3@@Z
template void std::allocator<AgHandle>::construct(AgHandle*, const AgHandle&);
