#include "OrdinaryOrder.h"

OrdinaryOrder::OrdinaryOrder(int id) : Order(id) {
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
    date_time+= to_string(ss%10);}

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

string OrdinaryOrder::getDateTime() const {
    return date_time;
}