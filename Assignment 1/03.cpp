// WAP in C++ to calculate the area and circumference of a Circle.
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float r;
    cout << "Enter the radius: ";
    cin >> r;
    cout << "The area of the Circle is: " << float(3.14*pow(r,2));
    cout << "\nThe circumference of the Circle is: " << float(2*3.14*r);
    return 0;
}
