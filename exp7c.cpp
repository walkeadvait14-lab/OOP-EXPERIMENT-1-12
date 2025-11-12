#include <iostream>
using namespace std;

class Num
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

    void operator-()
    {
        a = -a;
    }
};

int main()
{
    Num n1;
    n1.accept();
    cout << "Before overloading:\n";
    n1.display();

    -n1;

    cout << "After applying unary minus operator:\n";
    n1.display();

    return 0;
}
