#include "engine/core/AgTracked.h"
#include "engine/core/AgReference.h"
#include "game/texture_slots.h"

// FUNCTION: 0x540F20 ??1AgTracked@@QAE@XZ
__declspec(noinline) AgTracked::~AgTracked()
{
    if (host)
        host->untrack(this);
}

template <class T>
void AgReference<T>::releaseInPlace()
{
    AgControlBlock* block = control;
    T* raw = object;
    object = 0;
    if (block) {
        control = 0;
        int lastWeak = 0;
        int remaining;
        if (atomicDecrement(&block->uses) == 0) {
            remaining = atomicDecrement(&block->weak);
            if (remaining == 0)
                lastWeak = remaining + 1;
            else
                block->weak;
            block->object = 0;
            raw->~T();
            if (lastWeak)
                freeControlBlock(block);
        } else {
            block->uses;
        }
    }
}

// FUNCTION: 0x51E490 ?releaseInPlace@?$AgReference@VAgTracked@@@@QAEXXZ
template void AgReference<AgTracked>::releaseInPlace();
