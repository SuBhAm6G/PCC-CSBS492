//Constructor Overloading
#include <iostream>
using namespace std;

class Demo{
    int x;
    public:
        //default
        Demo(){};
        //parameterized
        Demo(int a){
            x = a;
        }
        Demo(int a, int b){
            x = a*b;
        }
        void display(){
            cout << "x= " << x << endl;
        }
};
int main(){
    Demo d1; //default constructor
    Demo d2(5); //parameterized constructor with one argument
    Demo d3(5, 10); //parameterized constructor with two arguments
    d2.display();
    d3.display();
    
    return 0;
}