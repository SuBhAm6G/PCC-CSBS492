//friend function
#include <iostream>
using namespace std;

class Demo{
    private:
    int num;
    public:
    void input(){
        cin>>num;
    }
    friend void display(Demo obj);
};

void display(Demo obj){
    cout<<"Number is: "<<obj.num;
}

int main(){
    Demo d;
    cout<<"Enter a number: ";
    d.input();
    display(d);
    
    return 0;
}