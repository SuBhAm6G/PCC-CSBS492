// WAP in C++ to swap the two number without using third variable.
#include <iostream>
using namespace std;

int main(){
    float x1,x2;
    cout << "Input two numbers: ";
    cin >> x1 >> x2;
    x1= x1 + x2;
    x2= x1 - x2;
    x1= x1 - x2;
    cout << "After swapping: " << x1 << " " << x2;
    return 0;
}