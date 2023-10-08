#ifndef MODULELAST_ORDINARYORDER_H
#define MODULELAST_ORDINARYORDER_H


#include "Order.h"


class OrdinaryOrder : public Order {

public:
    OrdinaryOrder();
    OrdinaryOrder(int id);
    OrdinaryOrder(int id, int year, int month, int day, int hour, int min, int sec);

    bool operator < (const OrdinaryOrder& obj);
    virtual string getType()const override;
    virtual string toString() override;
    virtual void showOrder()const override;
};


#endif //MODULELAST_ORDINARYORDER_H
