#ifndef MODULELAST_SPISOK_H
#define MODULELAST_SPISOK_H

#include "Student.h"
#include "vector"

class Spisok {
protected:
    vector<Student>students;
    map<int,vector<string>>mylist;
public:
    Spisok();
    void showMylist()const;
    void showMaxScool()const;
};


#endif //MODULELAST_SPISOK_H
