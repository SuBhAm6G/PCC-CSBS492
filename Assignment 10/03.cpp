//         3. Construct a program in C++ to implement multiple Inheritance 

#include <iostream>
using namespace std;

// First Base Class
class Student
{
protected:
    int roll;

public:
    void getRoll()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;
    }
};

// Second Base Class
class Sports
{
protected:
    int score;

public:
    void getScore()
    {
        cout << "Enter Sports Score: ";
        cin >> score;
    }
};

// Derived Class inheriting from both Student and Sports
class Result : public Student, public Sports
{
public:
    void display()
    {
        cout << "\nRoll Number: " << roll << endl;
        cout << "Sports Score: " << score << endl;
    }
};

int main()
{
    Result r;

    r.getRoll();
    r.getScore();
    r.display();

    return 0;
}