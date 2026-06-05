//Construct a program in C++ to implement hybrid Inheritance 
#include <bits/stdc++.h>
using namespace std;
class Shop{
protected:
    int reg_no;
public:
    void get_reg(){
        cout << "Enter registration number: ";
        cin >> reg_no;
    }
};

class Tax : public Shop{
protected:
    int amount;
public:
    void get_tax(){
        cout << "Enter tax amount: ";
        cin >> amount;
    }
};

class Location{
protected:
    string city;
public:
    void get_city(){
        cout << "Enter city: ";
        cin >> city;
    }
};

class Bill : public Tax, public Location{
public:
    void display(){
        cout<<reg_no<<endl;
        cout<<city<<endl;
        cout<<amount<<endl;
    }
};

int main() {
    Bill b;
    b.get_reg();
    b.get_tax();
    b.get_city();
    b.display();
}
