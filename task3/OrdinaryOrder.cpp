
#include "OrdinaryOrder.h"

OrdinaryOrder::OrdinaryOrder() :Order(){}
OrdinaryOrder::OrdinaryOrder(int id) : Order(id) {}

string OrdinaryOrder::getType() const {
    return "OrdinaryOrder";
}

string OrdinaryOrder::toString() {
    string tmp;
    tmp+="OrdinaryOrder "+ to_string(id)+' '+date_time;
    return tmp;
}

void OrdinaryOrder::showOrder() const {
    cout <<"Type: OrdinaryOrder" <<" Order #" << id << " Order date: " << dd << "-" << mm <<"-" << yy <<" ";
    cout <<"Order time: " << hh <<":" << min<<":"<<ss;
}

OrdinaryOrder::OrdinaryOrder(int id, int year, int month, int day, int hour, int min, int sec)
:Order(id)
{
    this->yy=year;
    this->mm=month;
    this->dd=day;
    this->hh=hour;
    this->min=min;
    this->ss=sec;
}

bool OrdinaryOrder::operator<(const OrdinaryOrder &obj) {
    return this->getType()<obj.getType();
}

