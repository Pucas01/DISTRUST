#pragma once

#include "engine/core/AgReference.h"
#include "game/texture_slots.h"

template <class T>
AgReference<T>::~AgReference()
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
            delete raw;
            if (lastWeak)
                freeControlBlock(block);
        } else {
            block->uses;
        }
    }
}
