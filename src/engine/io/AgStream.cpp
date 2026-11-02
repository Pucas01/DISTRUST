// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /EHa
#include "engine/io/AgStream.h"

// FUNCTION: 0x501D30 AgStream::getName
StringRef AgStream::getName()
{
    return StringRef("Unknown");
}

// FUNCTION: 0x501C40 AgStream::clone
AgReference<AgStream> AgStream::clone()
{
    return AgReference<AgStream>();
}

// FUNCTION: 0x501C10 ??_GAgStream@@UAEPAXI@Z

// AgStream is really weird, so this derived stub is what makes the
// compiler emit its vtable and deleting destructor.
namespace
{
    class VtableAnchor : public AgStream
    {
    public:
        virtual unsigned read(void*, unsigned) { return 0; }
        virtual unsigned write(const void*, unsigned) { return 0; }
        virtual __int64 getSize() { return 0; }
        virtual void setPosition(unsigned __int64) {}
        virtual __int64 getPosition() { return 0; }
    };
}

AgStream* createVtableAnchor()
{
    return new VtableAnchor;
}
