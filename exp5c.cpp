#include <iostream>
using namespace std;

class College
{
    int roll;
    string name, course;

public:
    College(int r, string n)
    {
        roll = r;
        name = n;
        course = "Computer Science";
    }

    void display()
    {
        cout << "The name of student = " << name << endl;
        cout << "The roll number of student = " << roll << endl;
        cout << "The course of student = " << course << endl;
    }
};

int main()
{
    College s1(11, "Atharva"), s2(10, "Aditya");

    s1.display();
    s2.display();

    return 0;
}
