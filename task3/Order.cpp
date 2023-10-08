#include "Order.h"


Order::Order(int id) {
    this->id=id;
}

Order::~Order() {}


int Order::getYear() const {
    return yy;
}

int Order::getMonth() const {
    return mm;
}

int Order::getDay() const {
    return dd;
}

int Order::getHour() const {
    return hh;
}

int Order::getMin() const {
    return min;
}

int Order::getSec() const {
    return ss;
}

int Order::getId() const {
    return id;
}

string Order::getString() const {
    return date_time;
}



