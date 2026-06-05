//Construct a program in C++ to implement overloading unary minus.
#include <bits/stdc++.h>
using namespace std;
class Demo{
int x;
public:
    void setvalue(int a){x = a;}
    void display(){cout << "Value of x: " << x << endl;}
    void operator-(){x=-x;}
};
int main() {
    Demo num;
    num.setvalue(10);
    num.display();
    -num;
    num.display();


    return 0;
}