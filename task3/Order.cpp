
#include "Order.h"

Order::Order() {
    DT date;
    yy=date.getYear();
    mm=date.getMonth();
    dd=date.getDay();
    hh=date.getHour();
    min=date.getMin();
    ss=date.getSec();
    date_time+= to_string(date.getYear());
    date_time+=' ';
    date_time+= to_string(date.getMonth());
    date_time+=' ';
    date_time+= to_string(date.getDay());
    date_time+=' ';
    date_time+= to_string(date.getHour());
    date_time+=' ';
    date_time+= to_string(date.getMin());
    date_time+=' ';
    date_time+= to_string(date.getSec());
    id=0;
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
    date_time+= to_string(date.getYear());
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
    date_time+= to_string(date.getSec()%10);
}

Order::~Order() {}

/*bool Order::operator < (const Order &obj)  {
    return this->getId()<obj.getId();
}*/

int Order::getYear() const {
    return yy;
}

int Order::getMonth() const {
    return mm;
}

int Order::getDay() const {
    return dd;
}

int Order::getId() const {
    return id;
}


