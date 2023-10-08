#ifndef MODULELAST_STUDENT_H
#define MODULELAST_STUDENT_H

#include "../includes.h"
#include "map"
#include "string"

class Student {
protected:
    int school;
    int year;
    string surname;
public:
    Student();
    Student(int school, int year, string surname);
    void setSchool(int x);
    void setYear(int x);
    void setSurname(string surname);
    int getSchool()const;
    int getYear()const;
    string getSurname()const;

    bool operator < (const Student& obj)const;
};


#endif //MODULELAST_STUDENT_H
