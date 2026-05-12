//array of objects
#include <iostream>
using namespace std;

class CSBS{
    private:
    string name;
    int id;
    public:
    void input(){
        cin.ignore();
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "\nEnter id: ";
        cin >> id;
    }

    void display(){
        cout << "Student name: " << name << " , ";
        cout << "id: " << id;
    }
};

int main(){
    int n;
    cout << "Enter no. of students = ";
    cin >> n;
    CSBS *s = new CSBS[n];
    //Input
    
    for(int i = 0; i < n; i++){
        cout << "Enter details of student no. "<< i + 1 << "-> " ;
        s[i].input();
    }

    //display
    for(int i = 0; i < n; i++){
        s[i].display();
        cout << endl;
    }
    

    return 0;
}