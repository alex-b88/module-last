#ifndef MODULELAST_MEMORYBLOCK_H
#define MODULELAST_MEMORYBLOCK_H


class MemoryBlock {
public:
    void* address;
    int size;

    MemoryBlock(void* addr, int sz) : address(addr), size(sz) {}
};


#endif //MODULELAST_MEMORYBLOCK_H
