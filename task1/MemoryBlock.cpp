
#include "MemoryBlock.h"

MemoryBlock::MemoryBlock() {
    for (int i = 0; i < 32; i+=2) {
        memory.push_back(Cell(0));
    }
}

void MemoryBlock::showMemory() const {
    if(memory.begin()==memory.end()){
        cout <<"All memory is free!" << endl;
        return;
    }
    for(auto it: memory){
        it.showCell();
    }
    cout << endl;
}

void MemoryBlock::setMemory() {
        int x;
        cout <<"Enter quantity: ";
        cin >> x;
        if(x>=30){
            cout <<"Can't allocate memory!\n";
            return;
        }
            for(auto it : memory)
            {
                if(it.getAviable())
                    continue;
            it.setValue(4);
            x-=4;
            if(x<=0)
                break;
            }
}
