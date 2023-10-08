
#ifndef MODULELAST_EXPRESSORDER_H
#define MODULELAST_EXPRESSORDER_H


#include "Order.h"

class ExpressOrder : public Order {
protected:
    string courier;
    int daysToDeliver;
public:
    ExpressOrder();
    ExpressOrder(int id, string courier, int daysToDeliver);
    ExpressOrder(int id,int year,int month,int day,int hour,int min,int sec, string courier, int daysTodelivery);

    void setCourier(string courier);
    void setDaysToDeliver(int days);

    string getCourier()const;
    int getDaysToDeliver()const;

/*    bool operator < (const ExpressOrder& obj);*/

    string getType()const override;
    string toString() override;
    void showOrder()const override;

    string getDateTime()const;
};


#endif //MODULELAST_EXPRESSORDER_H
