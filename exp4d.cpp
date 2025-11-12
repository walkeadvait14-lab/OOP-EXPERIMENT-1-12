
#include <iostream>
using namespace std;

class Demo
{
    int a, b;

public:
    void accept()
    {
        cout << "Enter 2 numbers: ";
        cin >> a >> b;
    }

    void display()
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }

    friend void swapnums(Demo &d);
};

void swapnums(Demo &d)
{
    int temp = d.a;
    d.a = d.b;
    d.b = temp;
}

int main()
{
    Demo k;
    k.accept();

    cout << "\nBefore swapping:\n";
    k.display();

    swapnums(k);

    cout << "\nAfter swapping:\n";
    k.display();

    return 0;
}
