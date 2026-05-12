//static member function
#include <iostream>
using namespace std;

class Demo{
    private:
    static int code;
    public:
    static void showcode(){
        cout << "Count = " << code;
    }
    static void setcode(int x){
        code = x;
    }
};
int Demo::code = 0;

int main(){
    Demo::setcode(100);
    Demo::showcode();
    
    return 0;
}