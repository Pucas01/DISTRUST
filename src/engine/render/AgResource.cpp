#include "engine/render/AgResource.gen.h"
#include "engine/field.h"

// FUNCTION: 0x519590 AgResource::vfn_2
void AgResource::vfn_2()
{
    fieldAt<int>(this, 0x38) = 0;
}

// STUB: 0x5194A0 AgResource::~AgResource (178 bytes)
__declspec(noinline) AgResource::~AgResource()
{
}

// FUNCTION: 0x519560 ??_GAgResource@@UAEPAXI@Z
