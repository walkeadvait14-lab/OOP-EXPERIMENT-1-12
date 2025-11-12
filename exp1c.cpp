#include<iostream>
using namespace std;
class Time
{
    int h,m,s,t;
    public:
    
    void accept()
    {
        cout<<"Enter the time H,M,S :";
        cin>>h>>m>>s;
    }
    void display()
    {
        t=(h*3600)+(m*60)+s;
        cout<<"Total time in seconds:"<<t<<endl;
    }
};
int main()
{
    Time a1;
    a1.accept();
    a1.display();
}

OUTPUT
Enter the time H,M,S :1 30 45
Total time in seconds:5445
