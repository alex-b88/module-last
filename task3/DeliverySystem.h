
#ifndef MODULELAST_DELIVERYSYSTEM_H
#define MODULELAST_DELIVERYSYSTEM_H

#include <sstream>
#include "Order.h"
#include "OrdinaryOrder.h"
#include "ExpressOrder.h"
#include "InsuredOrder.h"
#include "fstream"

struct compareByID{
    bool operator()(const Order* left, const Order*right)const{
        if(left->getId()<=right->getId())
            return true;
        return false;
    }
};
struct compareByType{
    bool operator()(const Order* left, const Order*right)const{
        if(left->getType()<=right->getType())
            return true;
        return false;
    }
};

struct compareByDateTime{
    bool operator()(const Order* left, const Order*right)const{
        return left->getString()<=right->getString();
    }
};

class DeliverySystem {
protected:
    static int number;
    vector <Order*> obj;
public:
    DeliverySystem();
    ~DeliverySystem();

    void addOrderToBase();
    void showAllOrders()const;
    void Search()const;
    void saveToFile();
    void loadFromFile();
    void SortOrders();

};


#endif //MODULELAST_DELIVERYSYSTEM_H
