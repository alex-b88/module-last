
#include "Order.h"

Order::Order() {
}

Order::Order(int id) {
    this->id=id;
    DT date;
    yy=date.getYear();
    mm=date.getMonth();
    dd=date.getDay();
    hh=date.getHour();
    min=date.getMin();
    ss=date.getSec();
/*    date_time+= to_string(date.getYear());
    date_time+=' ';
    date_time+= to_string(date.getMonth()/10);
    date_time+= to_string(date.getMonth()%10);
    date_time+=' ';
    date_time+= to_string(date.getDay()/10);
    date_time+= to_string(date.getDay()%10);
    date_time+=' ';
    date_time+= to_string(date.getHour()/10);
    date_time+= to_string(date.getHour()%10);
    date_time+=' ';
    date_time+= to_string(date.getMin()/10);
    date_time+= to_string(date.getMin()%10);
    date_time+=' ';
    date_time+= to_string(date.getSec()/10);
    date_time+= to_string(date.getSec()%10);*/
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



