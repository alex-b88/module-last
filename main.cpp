/*#include "task1/MemoryBlock.h"
#include "task2/Spisok.h"
#include "task3/Order.h"*/

#include "task3/DeliverySystem.h"

int DeliverySystem::number=0;

int main() {
 /*   MemoryBlock obj;
    obj.showMemory();
    obj.setMemory();
    obj.showMemory();*/
//task2
/*    Spisok obj;
    obj.showMylist();
    obj.showMaxScool();*/

//task 3

    DeliverySystem base;
    base.loadFromFile();
    base.showAllOrders();
    base.addOrderToBase();
    base.SortOrders();
  //  base.saveToFile();
 //   base.saveToFile();

    return 0;
}
