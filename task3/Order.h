#ifndef MODULELAST_ORDER_H
#define MODULELAST_ORDER_H

#include "Exeption.h"
#include "../includes.h"
#include "DT.h"
#include "string"

class Order {
protected:
    string date_time;
    int id;
    int yy,mm,dd,hh,min,ss; //TODO setter and getter in case
public:
    Order(int id);
    virtual ~Order();

    int getYear()const;
    int getMonth()const;
    int getDay()const;
    int getHour()const;
    int getMin()const;
    int getSec()const;
    int getId()const;
    string getString()const;

    virtual string getType()const=0;
    virtual string toString()=0;
    virtual void showOrder()const=0;

};


#endif //MODULELAST_ORDER_H
