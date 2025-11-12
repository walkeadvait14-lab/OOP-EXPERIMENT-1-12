#include<iostream>
using namespace std;
class info
{
    protected:
    string d_name;
};
class teacher:protected info
{
    private:
    string t_name;
    int id;

    public:
    void accept()
    {
        cout<<"Enter the department name :";
        cin>>d_name;
        cout<<"Enter the teacher name :";
        cin>>t_name;
        cout<<"Enter the ID :";
        cin>>id;
    }
    void display()
    {
        cout<<"Department name :"<<d_name<<endl;
        cout<<"Teacher name :"<<t_name<<endl;
        cout<<"ID is :"<<id<<endl;
    }
};
class student:protected info
{
    protected:
    string s_name;
    int roll;
};

class marks:protected student 
{
    private:
    int m1,m2;
    float p;

    public:
    void get()
    {
        cout<<"Enter student name :";
        cin>>s_name;
        cout<<"Enter the roll number :";
        cin>>roll;
        cout<<"Enter the marks of m1 :";
        cin>>m1;
        cout<<"Enter the marks of m2 :";
        cin>>m2;
    }
    void show()
    {
        cout<<"Name of student :"<<s_name<<endl;
        cout<<"Roll number :"<<roll<<endl;
        cout<<"Marks of m1 :"<<m1<<endl;
        cout<<"Marks of m2 :"<<m2<<endl;
    }
};
int main()
{
     teacher t;
     marks m;

     t.accept();
     t.display();

     m.get();
     m.show();
}
