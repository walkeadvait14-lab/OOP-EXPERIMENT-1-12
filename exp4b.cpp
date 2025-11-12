#include <iostream>
using namespace std;

class Number2; 

class Number1
{
    int num1;

public:
    void accept1()
    {
        cout << "Enter number 1: ";
        cin >> num1;
    }

    friend void calculate(Number1 p, Number2 r);
};

class Number2
{
    int num2;

public:
    void accept2()
    {
        cout << "Enter number 2: ";
        cin >> num2;
    }

    friend void calculate(Number1 p, Number2 r);
};

void calculate(Number1 p, Number2 r)
{
    if (p.num1 > r.num2)
        cout << "The greatest number is: " << p.num1 << endl;
    else if (r.num2 > p.num1)
        cout << "The greatest number is: " << r.num2 << endl;
    else
        cout << "Both numbers are equal." << endl;
}

int main()
{
    Number1 p;
    Number2 r;

    p.accept1();
    r.accept2();

    calculate(p, r);

    return 0;
}


