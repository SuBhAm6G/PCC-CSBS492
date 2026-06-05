//Construct a program in C++ to implement multilevel Inheritance
#include <bits/stdc++.h>
using namespace std;
//Base class
class Student{
protected:
    int roll;
public:
    void getroll(){
        cout << "Enter roll number: ";
        cin >>roll;
    }
};
//Derived 1
class Test:public Student{
protected:
    int marks;
public:
    void getmarks(){
        cout << "Enter marks: ";
        cin >> marks;
    }
};

class Result:public Test{
public:
    void result(){
        cout << "roll :" << roll << endl;
        cout << "marks :" << marks << endl;
    }
};
int main() {
    Result r;
    r.getroll();
    r.getmarks();
    r.result();

    return 0;
}
