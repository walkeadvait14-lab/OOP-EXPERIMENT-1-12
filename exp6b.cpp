#include<iostream>
using namespace std;
class department
{
    protected:
    string d_name;
};
class student
{
    protected:
    string s_name;
    int roll;
};
class marks:protected department,protected student
{
    private:
    int m1,m2;
    float p;

    public:
    void accept()
    {
        cout<<"Enter the department name :";
        cin>>d_name;
        cout<<"Enter the student name :";
        cin>>s_name;
        cout<<"Enter the roll number :";
        cin>>roll;
        cout<<"Enter the marks of m1 :";
        cin>>m1;
        cout<<"Enter the marks of m2 :";
        cin>>m2;
    }
    void calculate()
    {
        p=(m1+m2)/2*100;
        cout<<"The percentage is :";
        cin>>p;
    }
};
int main()
{
    marks m;
    m.accept();
    m.calculate();
}
