#ifndef MODULELAST_EXEPTION_H
#define MODULELAST_EXEPTION_H

#include "string"
#include "iostream"

using namespace std;

class Exeption {
public:
    virtual string showMessage()const=0;
};

class NameExeption : public Exeption {
public:
    string showMessage()const override;
};

class MenuExeption : public Exeption{
public:
    string showMessage()const override;
};

class DigitExeption : public Exeption{
public:
    string showMessage()const override;
};


#endif //MODULELAST_EXEPTION_H
