#pragma once

struct AgControlBlock
{
    void addRef();
};

class AgReferencedObject
{
public:
    AgReferencedObject() : control(0) {}
    int acquire(void* owner);

    AgControlBlock* control;
};

template <class T>
class AgReference
{
public:
    AgReference() : control(0), object(0) {}
    AgReference(const AgReference& other);
    AgReference(T* raw)
    {
        control = 0;
        object = 0;
        if (raw)
        {
            int created = raw->AgReferencedObject::acquire(raw);
            AgControlBlock* block = raw->AgReferencedObject::control;
            if (!created)
                block->addRef();
            control = block;
            object = raw;
        }
    }
    ~AgReference();

    AgControlBlock* control;
    T* object;
};
