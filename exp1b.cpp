#include<iostream>
using namespace std;
class book
{
    string name;
    float price;
    int page;
    public:
    
    void accept()
    {
        cout<<"Enter the name of book:";
        cin>>name;
        cout<<"Enter the price of book:";
        cin>>price;
        cout<<"Enter the pages of book:";
        cin>>page;
    }
    
    void display()
    {
        cout<<"Name of book:"<<name<<endl;
        cout<<"Price of book:"<<price<<endl;
        cout<<"Pages of book:"<<page<<endl;
    }
};
int main(){
book b1,b2;
b1.accept();
b2.accept();
b1.display();
b2.display();
}

OUTPUT
Enter the name of book:HarryPotter
Enter the price of book:499.99
Enter the pages of book:350
Enter the name of book:Inferno
Enter the price of book:599.50
Enter the pages of book:420
Name of book:HarryPotter
Price of book:499.99
Pages of book:350
Name of book:Inferno
Price of book:599.5
Pages of book:420
