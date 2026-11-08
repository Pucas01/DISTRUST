#include "engine/thread/AgThreadPool.gen.h"
#include "engine/field.h"

AgThreadPool::Job::Job()
{
}

// FUNCTION: 0x506E90 ??_GJob@AgThreadPool@@UAEPAXI@Z

// FUNCTION: 0x507050 AgThreadPool::Job::vfn_3
void AgThreadPool::Job::vfn_3()
{
    fieldAt<int>(this, 0x14) = 1;
}
