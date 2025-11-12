
#include <iostream>
using namespace std;

class Num
{
    int a, b;

public:
    void accept()
    {
        cout << "Enter values of a and b: ";
        cin >> a >> b;
    }

    void display()
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }

    void operator++()
    {
        ++a;
        ++b;
    }
};

int main()
{
    Num n1;
    n1.accept();
    cout << "\nBefore increment:" << endl;
    n1.display();
    ++n1;
    cout << "\nAfter increment:" << endl;
    n1.display();
    return 0;
}
