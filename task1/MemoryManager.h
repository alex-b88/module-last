#ifndef MODULELAST_MEMORYMANAGER_H
#define MODULELAST_MEMORYMANAGER_H

#include "MemoryBlock.h"
#include "iostream"
#include "list"

class MemoryManager {
private:
    std::list < MemoryBlock > freeBlocks;

public:
    MemoryManager();
    void allocateMemory(int requestedSize);
};

#endif //MODULELAST_MEMORYMANAGER_H
