
#include "ExpressOrder.h"

ExpressOrder::ExpressOrder() {
    courier="not set";
    daysToDeliver=0;
}

ExpressOrder::ExpressOrder(int id, string courier, int daysToDeliver)
:Order(id)
{
    setCourier(courier);
    setDaysToDeliver(daysToDeliver);
}
ExpressOrder::ExpressOrder(int id, int year, int month, int day, int hour, int min, int sec, string courier,
                           int daysTodelivery)
:Order(id)
{
    this->yy=year;
    this->mm=month;
    this->dd=day;
    this->hh=hour;
    this->min=min;
    this->ss=sec;
    this->courier=courier;
    this->daysToDeliver=daysTodelivery;
}

void ExpressOrder::setCourier(string courier) {
    if(courier.size()<=0) throw new NameExeption;
    this->courier=courier;
}

void ExpressOrder::setDaysToDeliver(int days) {
    if(days<=0) throw new DigitExeption;
    this->daysToDeliver=days;
}

string ExpressOrder::getCourier() const {
    return courier;
}

int ExpressOrder::getDaysToDeliver() const {
    return daysToDeliver;
}

string ExpressOrder::toString() {
    string tmp;
    tmp+="ExpressOrder "+to_string(id)+' '+date_time+' '+courier+' '+ to_string(daysToDeliver);
    return tmp;
}

void ExpressOrder::showOrder() const {
    cout <<"Type: ExpressOrder" <<" Order #" << id << " Order date: " << dd << "-" << mm <<"-" << yy <<" ";
    cout <<"Order time: " << hh <<":" << min<<":"<<ss << endl;
    cout << "Courier: " << courier <<" " <<"Days to Deliver: " << daysToDeliver;
}

string ExpressOrder::getType() const {
    return "ExpressOrder";
}


bool ExpressOrder::operator<(const ExpressOrder &obj) {
    return this->getId()<obj.getId();
}
