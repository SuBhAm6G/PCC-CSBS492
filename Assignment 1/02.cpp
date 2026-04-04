// WAP in C++ to calculate the area and perimeter of a rectangle.
#include <iostream>
using namespace std;
int main(){
    int l,r;
    cout << "Enter the length: ";
    cin >> l;
    cout << "Enter the breadth: ";
    cin >> r;
    cout << "The area of rectangle is: " << l*r << "\n";
    cout << "The perimeter of rectangle is: " << 2*(l+r);
    return 0;
}