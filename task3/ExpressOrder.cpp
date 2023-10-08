
#include "ExpressOrder.h"

ExpressOrder::ExpressOrder() {
/*    id=0;
    courier="not set";
    daysToDeliver=0;*/
}

ExpressOrder::ExpressOrder(int id, string courier, int daysToDeliver)
:Order(id)
{
    setCourier(courier);
    setDaysToDeliver(daysToDeliver);
    DT date;
    yy=date.getYear();
    mm=date.getMonth();
    dd=date.getDay();
    hh=date.getHour();
    min=date.getMin();
    ss=date.getSec();
    date_time+= to_string(yy);
    date_time+=' ';
    date_time+= to_string(mm/10);
    date_time+= to_string(mm%10);
    date_time+=' ';
    date_time+= to_string(dd/10);
    date_time+= to_string(dd%10);
    date_time+=' ';
    date_time+= to_string(hh/10);
    date_time+= to_string(hh%10);
    date_time+=' ';
    date_time+= to_string(min/10);
    date_time+= to_string(min%10);
    date_time+=' ';
    date_time+= to_string(ss/10);
    date_time+= to_string(ss%10);
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
    date_time+= to_string(year);
    date_time+=' ';
    date_time+= to_string(month/10);
    date_time+= to_string(month%10);
    date_time+=' ';
    date_time+= to_string(day/10);
    date_time+= to_string(day%10);
    date_time+=' ';
    date_time+= to_string(hour/10);
    date_time+= to_string(hour%10);
    date_time+=' ';
    date_time+= to_string(min/10);
    date_time+= to_string(min%10);
    date_time+=' ';
    date_time+= to_string(sec/10);
    date_time+= to_string(sec%10);
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
    cout << "\n" << date_time << endl;
}

string ExpressOrder::getType() const {
    return "ExpressOrder";
}

string ExpressOrder::getDateTime() const {
    return date_time;
}

/*bool ExpressOrder::operator<(const ExpressOrder &obj) {
    return this->getType()<obj.getType();
}*/
