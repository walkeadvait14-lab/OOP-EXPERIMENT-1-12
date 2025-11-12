#include <iostream>
using namespace std;

class Demo
{
public:
    int p, q;

    void accept()
    {
        cout << "Enter 2 numbers: ";
        cin >> p >> q;
    }

    void swapNumbers()
    {
        int temp = p;
        p = q;
        q = temp;
    }

    void display()
    {
        cout << "After swapping:" << endl;
        cout << "p = " << p << ", q = " << q << endl;
    }
};

int main()
{
    Demo d;
    d.accept();
    d.swapNumbers();
    d.display();
    return 0;
}
