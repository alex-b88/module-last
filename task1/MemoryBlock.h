#ifndef MODULELAST_MEMORYBLOCK_H
#define MODULELAST_MEMORYBLOCK_H

#include "Cell.h"
#include "list"

class MemoryBlock {
protected:
    list<Cell> memory;
public:
    MemoryBlock();
    void setMemory();
    void showMemory()const;

};


#endif //MODULELAST_MEMORYBLOCK_H
