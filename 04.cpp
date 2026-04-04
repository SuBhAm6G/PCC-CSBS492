// WAP in C++ to convert Fahrenheit to Celsius. 
#include <iostream>
using namespace std;

int main(){
    float f;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> f;
    cout << "The temperature in Celsius is: " << float((f-32)*5/9);
    return 0;
}