#ifndef MODULELAST_INSUREDORDER_H
#define MODULELAST_INSUREDORDER_H


#include "Order.h"


class InsuredOrder : public Order {
protected:
    string company;
    double amount;
public:
    InsuredOrder();
    InsuredOrder(int id, string company, double amount);
    InsuredOrder(int id,int year, int month, int day, int hour, int min, int sec, string company, double amount);

    void setCompany(string company);
    void setAmount(double amount);
    string getCompany()const;
    double getAmount()const;

    bool operator < (const InsuredOrder& obj);

    string getType()const override;
    string toString() override;
    void showOrder()const override;

};


#endif //MODULELAST_INSUREDORDER_H
