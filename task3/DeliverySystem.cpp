#include "DeliverySystem.h"


DeliverySystem::DeliverySystem() {}
DeliverySystem::~DeliverySystem() {
    for (int i = 0; i <obj.size(); ++i) {
        delete obj[i];
    }
}


void DeliverySystem::addOrderToBase() {
    int menu;
    do{
        cout <<"Add order:" << endl;
        cout << "1. Ordinary" << endl;
        cout << "2. Express" << endl;
        cout << "3. Insured" << endl;
        cout << "0. Exit" << endl;
        cout <<"Choice: ";
        cin >> menu;
        switch(menu){
            case 1:{
                number++;
                obj.push_back(new OrdinaryOrder(number));
                cout <<"Order added to base" << endl;
                break;
            }
            case 2:{
                string c_tmp;
                int t_days;
                number++;
                cout <<"Enter courier: ";
                cin >> ws;
                getline(cin,c_tmp);
                cout <<"Enter days: ";
                cin >> t_days;
                obj.push_back(new ExpressOrder(number,c_tmp,t_days));
                cout <<"Order added to base" << endl;
                break;
            }
            case 3:{
                string c_tmp;
                double a_tmp;
                number++;
                cout << "Enter company: ";
                cin >> ws;
                getline(cin,c_tmp);
                cout <<"Enter amount: ";
                cin >> a_tmp;
                obj.push_back(new InsuredOrder(number,c_tmp,a_tmp));
                cout <<"Order added to base" << endl;
                break;
            }
        }
    }while(menu!=0);

}

void DeliverySystem::showAllOrders() {
    if(obj.begin()==obj.end()){
        cout <<"Database is empty\n";
        return;
    }
    sort(obj.begin(),obj.end(),compareOrder());
    for (int i = 0; i < obj.size(); ++i) {
        obj[i]->showOrder();
        cout << endl << endl;
    }
}

void DeliverySystem::Search() const {
    int menu;
    bool flag = false;
    do{
    cout << "Search:" << endl;
    cout << "1. By type" << endl;
    cout << "2. By year" << endl;
    cout << "3. By month" << endl;
    cout << "4. By day" << endl;
    cout << "Choice: " << endl;
    cin >> menu;
    switch(menu){
        case 1:{
            string t_tmp;
            cout << "Order types: OrdinaryOrder,ExpressOrder,InsuredOrder" << endl;
            cout << "Enter order type:";
            cin >> ws;
            getline(cin,t_tmp);
            for (int i = 0; i < obj.size(); ++i) {
                if(obj[i]->getType()==t_tmp){
                    obj[i]->showOrder();
                    cout << endl;
                    flag=true;
                }
            }
            break;
        }
        case 2:{
            int y_tmp;
            cout <<"Enter year: ";
            cin >> y_tmp;
            for (int i = 0; i < obj.size(); ++i) {
                if(obj[i]->getYear()==y_tmp){
                    obj[i]->showOrder();
                    cout << endl;
                    flag=true;
                }
            }
            break;
        }
        case 3:{
            int y_tmp;
            cout <<"Enter month: ";
            cin >> y_tmp;
            for (int i = 0; i < obj.size(); ++i) {
                if(obj[i]->getMonth()==y_tmp){
                    obj[i]->showOrder();
                    cout << endl;
                    flag=true;
                }
            }
            break;
        }
        case 4:{
            int y_tmp;
            cout <<"Enter day: ";
            cin >> y_tmp;
            for (int i = 0; i < obj.size(); ++i) {
                if(obj[i]->getDay()==y_tmp){
                    obj[i]->showOrder();
                    cout << endl;
                    flag=true;
                }
            }
            break;
        }
    }
        if(!flag)
            cout << "Nothing found!" << endl;
    }while(menu!=0);
}

void DeliverySystem::saveToFile() {
    ofstream file("Base.txt");
    if(file.is_open()){
        for (int i = 0; i < obj.size(); ++i) {
            file << obj[i]->toString() << endl;
        }
    }
    file.close();
}

void DeliverySystem::loadFromFile() {
    ifstream file("Base.txt");
    if(file.is_open()){
        string s1;
        vector<string>tokens;
        while(!file.eof()){
         getline(file,s1);
            istringstream iss(s1);
            if(s1.size()!=0){
                string token;
                while(iss>>token){
                    tokens.push_back(token);
                }
                if(tokens[0]=="ExpressOrder"){
                    obj.push_back(new ExpressOrder(stoi(tokens[1]),stoi(tokens[2]),stoi(tokens[3]),stoi(tokens[4]),stoi(tokens[5]),stoi(tokens[6]),stoi(tokens[7]),tokens[8],stoi(tokens[9])));
                    DeliverySystem::number=stoi(tokens[1]);
                    tokens.clear();
                }
                else if(tokens[0]=="InsuredOrder"){
                    obj.push_back(new InsuredOrder(stoi(tokens[1]),stoi(tokens[2]),stoi(tokens[3]),stoi(tokens[4]),stoi(tokens[5]),stoi(tokens[6]),stoi(tokens[7]),tokens[8],stod(tokens[9])));
                    DeliverySystem::number=stoi(tokens[1]);
                    tokens.clear();
                }
                else if(tokens[0]=="OrdinaryOrder"){
                    obj.push_back(new OrdinaryOrder(stoi(tokens[1]),stoi(tokens[2]),stoi(tokens[3]),stoi(tokens[4]),stoi(tokens[5]),stoi(tokens[6]),stoi(tokens[7])));
                    DeliverySystem::number=stoi(tokens[1]);
                    tokens.clear();
                }
            }
        }
    }
    file.close();
 //   sort(obj.begin(),obj.end(),compareOrder());
}

