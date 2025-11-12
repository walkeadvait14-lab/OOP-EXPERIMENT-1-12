
#include <iostream>
using namespace std;

class B; 

class A
{
    int a;

public:
    void accept()
    {
        cout << "Enter value of a: ";
        cin >> a;
    }

    void display()
    {
        cout << "Value of a: " << a << endl;
    }

    friend void swapNumbers(A &x, B &y);
};

class B
{
    int b;

public:
    void accept()
    {
        cout << "Enter value of b: ";
        cin >> b;
    }

    void display()
    {
        cout << "Value of b: " << b << endl;
    }

    friend void swapNumbers(A &x, B &y);
};

void swapNumbers(A &x, B &y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main()
{
    A k;
    B f;

    k.accept();
    f.accept();

    cout << "\nBefore swapping:\n";
    k.display();
    f.display();

    swapNumbers(k, f);

    cout << "\nAfter swapping:\n";
    k.display();
    f.display();

    return 0;
}
