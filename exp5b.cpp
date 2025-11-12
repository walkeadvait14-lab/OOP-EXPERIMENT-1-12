#include <iostream>
using namespace std;

class Student
{
    float per;
    string name;

public:
    Student()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter the Percentage: ";
        cin >> per;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Percentage: " << per << endl;
    }
};

int main()
{
    Student s1;
    s1.display();
    return 0;
}
