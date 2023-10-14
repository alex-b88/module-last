#include "MemoryManager.h"

MemoryManager::MemoryManager() {
        freeBlocks.push_back(MemoryBlock((void *) 0x0, 4));
        freeBlocks.push_back(MemoryBlock((void *) 0x4, 4));
        freeBlocks.push_back(MemoryBlock((void *) 0x8, 4));
        freeBlocks.push_back(MemoryBlock((void *) 0x10, 4));
        freeBlocks.push_back(MemoryBlock((void *) 0x14, 4));
        freeBlocks.push_back(MemoryBlock((void *) 0x18, 4));
        freeBlocks.push_back(MemoryBlock((void *) 0x1C, 4));
        freeBlocks.push_back(MemoryBlock((void *) 0x20, 4));
        freeBlocks.push_back(MemoryBlock((void *) 0x24, 4));
        freeBlocks.push_back(MemoryBlock((void *) 0x28, 4));
        freeBlocks.push_back(MemoryBlock((void *) 0x3C, 4));
        freeBlocks.push_back(MemoryBlock((void *) 0x40, 4));
        freeBlocks.push_back(MemoryBlock((void *) 0x44, 4));
        freeBlocks.push_back(MemoryBlock((void *) 0x48, 4));
        freeBlocks.push_back(MemoryBlock((void *) 0x4C, 4));
}

void MemoryManager::allocateMemory(int requestedSize) {
    for (auto it = freeBlocks.begin(); it != freeBlocks.end(); ++it) {
        if (requestedSize < 30) {
            do {
                std::cout << "Выделен блок памяти: " << it->address << ", размер 4 байт." << std::endl;
                if (it->size < requestedSize) {
                    it->address = static_cast<char *>(it->address) + requestedSize;
                    it->size -= requestedSize;
                } else {
                    freeBlocks.erase(it);
                }
                requestedSize-=4;
            } while (requestedSize > 0);
            return;
        }
    }
    std::cout << "Невозможно выделить " << requestedSize << " байт памяти." << std::endl;
}
