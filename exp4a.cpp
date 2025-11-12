#include <iostream>
using namespace std;

class result2; // Forward declaration

class result1
{
    int m1;

public:
    void accept1()
    {
        cout << "Enter the marks of M1: ";
        cin >> m1;
    }

    friend void calculate(result1 p, result2 r);
};

class result2
{
    int m2;

public:
    void accept2()
    {
        cout << "Enter the marks of M2: ";
        cin >> m2;
    }

    friend void calculate(result1 p, result2 r);
};

void calculate(result1 p, result2 r)
{
    float avg = (p.m1 + r.m2) / 2.0;
    cout << "Average of the results = " << avg << endl;
}

int main()
{
    result1 p;
    result2 r;

    p.accept1();
    r.accept2();

    calculate(p, r);

    return 0;
}

output
Enter the marks of M1: 80
Enter the marks of M2: 90
Average of the results = 85
