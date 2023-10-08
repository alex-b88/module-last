
#ifndef MODULELAST_DELIVERYSYSTEM_H
#define MODULELAST_DELIVERYSYSTEM_H

#include <sstream>
#include "Order.h"
#include "OrdinaryOrder.h"
#include "ExpressOrder.h"
#include "InsuredOrder.h"
#include "fstream"


class DeliverySystem {
protected:
    static int number;
    vector <Order*> obj;
public:
    DeliverySystem();
    ~DeliverySystem();

    void addOrderToBase();
    void showAllOrders();
    void Search()const;
    void saveToFile();
    void loadFromFile();

};


#endif //MODULELAST_DELIVERYSYSTEM_H
