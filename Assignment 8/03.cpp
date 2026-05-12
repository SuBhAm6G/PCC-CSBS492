//copy constructor
#include <iostream>
using namespace std;
class Demo{
    int x;
    public:
        Demo(int a){
            x = a;
        }

        Demo(const Demo &obj){
            x = obj.x;
        }

        void display(){
            cout << "x = " << x << endl;
        }
};
int main(){
    Demo d1(5); //parameterized constructor
    Demo d2(d1); //copy constructor
    Demo d3 = d1;
    d1.display();
    d2.display();
    d3.display();
    return 0;

}