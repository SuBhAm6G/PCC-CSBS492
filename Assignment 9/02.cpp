//Construct a program in C++ to implement overloading + operator
#include <bits/stdc++.h>
using namespace std;
class Number{
private:
    int x;
public:

    Number(int a=0){x = a;}
    void display(){ cout << "Value of x: " << x << endl; }
    Number operator+(Number n2){
        Number temp;
        temp.x=x+n2.x;
        return temp;
    }
};
int main() {
    Number n1(10),n2(20),n3;
    n3 = n1 + n2;
    n3.display();
    return 0;
}