#include<iostream>
using namespace std;
class student
{
    int roll;
    string name;
    public:
    
    void accept()
    {
        cout<<"Enter the roll number of student";
        cin>>roll;
        cout<<"Enter the name of student ";
        cin>>name;
    }
    
    void display()
    {
        cout<<"Students name :"<<name<<endl;
        cout<<"Students roll number :"<<roll<<endl;
    }
};
int main()
{
    student s1;
    s1.accept();
    s1.display();
} 

OUTPUT
Enter the roll number of student: 24
Enter the name of student: Advait
Students name: Advait
Students roll number: 24
