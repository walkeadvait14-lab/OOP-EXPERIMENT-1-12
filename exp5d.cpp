#include <iostream>
using namespace std;

class Rectangle
{
    int l, w;

public:
    Rectangle()
    {
        l = 2;
        w = 2;
    }

    Rectangle(int a)
    {
        l = a;
        w = a;
    }

    Rectangle(int a, int b)
    {
        l = a;
        w = b;
    }

    void calculate()
    {
        int area;
        area = l * w;
        cout << "Area = " << area << endl;
    }
};

int main()
{
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(4, 5);

    r1.calculate();
    r2.calculate();
    r3.calculate();

    return 0;
}
