
#include "InsuredOrder.h"

InsuredOrder::InsuredOrder() {
    company="not seted";
    amount=0;
}

InsuredOrder::InsuredOrder(int id, string company, double amount)
:Order(id)
{
    setCompany(company);
    setAmount(amount);
}

void InsuredOrder::setCompany(string company) {
    if(company.size()<=1) throw new NameExeption;
    this->company=company;
}

void InsuredOrder::setAmount(double amount) {
    if(amount<0) throw new DigitExeption;
    this->amount=amount;
}

string InsuredOrder::getCompany() const {
    return company;
}

double InsuredOrder::getAmount() const {
    return amount;
}

string InsuredOrder::getType() const {
    return "InsuredOrder";
}

string InsuredOrder::toString() {
    string tmp;
    tmp+="InsuredOrder "+to_string(id)+' '+date_time+' '+company+' '+ to_string(amount);
    return tmp;
}

void InsuredOrder::showOrder() const {
        cout <<"Type: InsuredOrder" <<" Order #" << id << " Order date: " << dd << "-" << mm <<"-" << yy <<" ";
        cout <<"Order time: " << hh <<":" << min<<":"<<ss << endl;
        cout << "Company: " << company <<" " <<"Amount: " << amount;
}

InsuredOrder::InsuredOrder(int id, int year, int month, int day, int hour, int min, int sec, string company,
                           double amount)
:Order(id)
{
    this->yy=year;
    this->mm=month;
    this->dd=day;
    this->hh=hour;
    this->min=min;
    this->ss=sec;
    this->company=company;
    this->amount=amount;
}


bool InsuredOrder::operator<(const InsuredOrder &obj) {
    return this->getType()<obj.getType();
}
