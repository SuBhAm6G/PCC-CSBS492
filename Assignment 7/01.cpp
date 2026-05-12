//Function Overloading
#include <iostream>
using namespace std;

class Demo {
    public:
        int sum (int a, int b, int c){
            return a + b;
        }
        float sum (float a, float b){
            return a + b;
        }
        double sum (double a, double b, double c){
            return (a + b + c);
        }
};

int main(){
    Demo obj;
    cout << "The sum of 10 and 20 is: " << obj.sum(10, 20, 0) << endl;
    cout << "The sum of 5.5 and 4.5 is: " << obj.sum(5.6, 4.5) << endl;
    cout << "The sum of 1.1, 2.2 and 3.3 is: " << obj.sum(1.1, 2.2, 3.3) << endl;
    return 0;
}