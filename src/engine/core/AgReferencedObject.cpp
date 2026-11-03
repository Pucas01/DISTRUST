#include "engine/core/AgReference.h"

void* __cdecl allocControlBlock(unsigned int size);

// FUNCTION: 0x4B1F00 AgReferencedObject::acquire
int AgReferencedObject::acquire(void* owner)
{
    if (!control) {
        AgControlBlock* block = (AgControlBlock*)allocControlBlock(sizeof(AgControlBlock));
        AgControlBlock* result;
        if (block) {
            block->object = 0;
            block->uses = 1;
            block->weak = 1;
            block->object = owner;
            result = block;
        } else {
            result = 0;
        }
        control = result;
        return 1;
    }
    return 0;
}
