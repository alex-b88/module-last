
#include "Student.h"

Student::Student() {

}

Student::Student(int school, int year, string surname) {
    setSchool(school);
    setYear(year);
    setSurname(surname);
}

void Student::setSchool(int x) {
    if(x>0)
        this->school=x;
}

void Student::setYear(int x) {
    if(x>0)
        this->year=x;
}

void Student::setSurname(string surname) {
    if(surname.length()>0)
        this->surname=surname;
}

int Student::getSchool() const {
    return school;
}

int Student::getYear() const {
    return year;
}

bool Student::operator<(const Student &obj) const {
    return this->school<obj.school;
}
string Student::getSurname() const {
    return surname;
}