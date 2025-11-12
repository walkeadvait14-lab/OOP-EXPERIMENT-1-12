#include<iostream>
using namespace std;
class students
{
    protected:
    int roll;
    string name;
};
class marks:protected students
{
    int m1,m2,avg;

    public:
    void accept()
    {
        cout<<"Enter the name :";
        cin>>name;
        cout<<"Enter the roll number :";
        cin>>roll;
        cout<<"Enter the marks of m1 :";
        cin>>m1;
        cout<<"Enter the marks of m2 :";
        cin>>m2;
    }

    void average()
    {
        avg = m1 + m2/2;
        cout<<"The average is :"<<avg<<endl;
        cout<<"The name is :"<<name<<endl;
        cout<<"The roll number is :"<<roll<<endl;
    }
};

int main()
{
    marks m;
    m.accept();
    m.average();
}
