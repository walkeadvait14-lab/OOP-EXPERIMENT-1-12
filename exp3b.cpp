#include<iostream>
using namespace std;
class student
{
    int roll;
    float per;
    public:
    
    void accept()
    {
        cout<<"Enter the roll number:";
        cin>>this->roll;
        cout<<"Enter the percentage:";
        cin>>this->per;
    }
    void display()
    {
        cout<<"Roll number is:"<<this->roll<<endl;
        cout<<"Percentage is:"<<this->per<<endl;
    }
};
int main()
{
    student s1;
    s1.accept();
    s1.display();
}

OUTPUT
Enter the roll number:24
Enter the percentage:88.5
Roll number is:24
Percentage is:88.5
