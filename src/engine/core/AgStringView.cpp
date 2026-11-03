#include "engine/core/StringRef.h"

struct AgStringView
{
    int length;
    const char* data;

    AgStringView(StringRef& ref);
};

// FUNCTION: 0x4FD2F0 ??0AgStringView@@QAE@AAVStringRef@@@Z
AgStringView::AgStringView(StringRef& ref)
{
    length = ref.size();
    data = ref.c_str();
}
