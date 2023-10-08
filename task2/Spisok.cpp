
#include "Spisok.h"

Spisok::Spisok() {
    students.push_back(Student(123,1990,"Makarov"));
    students.push_back(Student(124,1990,"Sidorov"));
    students.push_back(Student(125,1990,"Petrov"));
    students.push_back(Student(126,1990,"Ogyrzov"));
    students.push_back(Student(123,1990,"Malinov"));
    students.push_back(Student(124,1990,"Pomidorova"));
    students.push_back(Student(125,1990,"Apelsinova"));
    students.push_back(Student(126,1990,"Makarov"));
    students.push_back(Student(126,1990,"Gladko"));
    students.push_back(Student(126,1990,"Smirniv"));
    students.push_back(Student(126,1990,"Petrenko"));
    students.push_back(Student(123,1990,"Granatova"));

    for (int i = 0; i < students.size(); ++i) {
        mylist[students[i].getSchool()].push_back(students[i].getSurname());
    }

}

void Spisok::showMylist() const {
    for(auto obj : mylist){
        cout << obj.first << endl;
        for(int i=0; i != obj.second.size(); ++i){
            cout << obj.second[i];
            cout << endl;
        }
    }
    cout << endl;
}

void Spisok::showMaxScool() const {
    int max,buf=0,count;
    for(auto obj : mylist){
        count=0;
        for(int i=0; i != obj.second.size(); ++i){
            count++;
        }
        if(count>buf){
            max=obj.first;
            buf=count;
        }
    }
    cout << "Maximun students is school #" << max << endl;
}
