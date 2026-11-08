#include "engine/system/AgProgram.gen.h"
#include "engine/field.h"

// FUNCTION: 0x4F47A0 AgProgram::vfn_4
bool AgProgram::vfn_4()
{
    return fieldAt<int>(this, 0x14) != 0;
}

// STUB: 0x4F47B0 AgProgram::vfn_1 (5 bytes)
void AgProgram::vfn_1()
{
}

// STUB: 0x4F4670 AgProgram::~AgProgram (221 bytes)
__declspec(noinline) AgProgram::~AgProgram()
{
}

// FUNCTION: 0x4F4750 ??_GAgProgram@@UAEPAXI@Z
