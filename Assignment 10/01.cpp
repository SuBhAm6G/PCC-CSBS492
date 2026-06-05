//Construct a program in C++ to implement single Inheritance
#include <iostream>
using namespace std;

class Base {
public:
    void displayBase() {
        cout << "This is the base class." << endl;
    }
};

class Derived : public Base {
public:
    void displayDerived() {
        cout << "This is the derived class." << endl;
    }
};

int main() {
    Derived obj;
    obj.displayBase();
    obj.displayDerived();
    return 0;
}
