#include<iostream>
using namespace std;
class department
{
    protected:
    string d_name;
};
class student:protected department 
{
    protected:
    string s_name;
    int roll;
};
class marks:protected student
{
    private:
    int m1,m2,p;

    public:
    void accept()
    {
        cout<<"Enter the department name :";
        cin>>d_name;
        cout<<"Enter the s_name :";
        cin>>s_name;
        cout<<"Enter the roll number :";
        cin>>roll;
        cout<<"Enter the marks of m1 :";
        cin>>m1;
        cout<<"Enter the marks of m2 :";
        cin>>m2;
    }
    void display()
    {
        p = m1 + m2 *100/100;
        cout<<"The department name is :"<<d_name<<endl;
        cout<<"The student name is :"<<s_name<<endl;
        cout<<"The roll number is :"<<roll<<endl;
        cout<<"Marks of m1 :"<<m1<<endl;
        cout<<"Marks of m2 :"<<m2<<endl;
        cout<<"Percentage :"<<p<<endl;
    }
};
int main()
{
    marks m;
    m.accept();
    m.display();
}
