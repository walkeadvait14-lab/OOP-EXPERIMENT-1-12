#include<iostream>
using namespace std;
class department
{
    protected:
    string d_name;
};
class student:protected department
{
    private:
    string s_name;
    int roll;

    public:
    void accept()
    {
        cout<<"Enter the department name :";
        cin>>d_name;
        cout<<"Enter the student name :";
        cin>>s_name;
        cout<<"Enter the roll number :";
        cin>>roll;
    }
    void display()
    {
        cout<<"Department name :"<<d_name<<endl;
        cout<<"Student name :"<<s_name<<endl;
        cout<<"Roll number :"<<roll<<endl;
    }
};
class staff:protected department
{
    private:
    string name;
    int id;

    public:
    void accept()
    {
        cout<<"Enter the name :";
        cin>>name;
        cout<<"Enter the ID :";
        cin>>id;
    }
    void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"ID :"<<id<<endl;
    }
};
int main()
{
    student s1;
    s1.accept();
    s1.display();

    staff s;
    s.accept();
    s.display();
}
