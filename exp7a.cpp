#include <iostream>
using namespace std;

class Area
{
public:
    void area(int a, int b)
    {
        int c = a * b;
        cout << "Laboratory area: " << c << " sq units" << endl;
    }

    void area(int s)
    {
        int f = s * s;
        cout << "Class area: " << f << " sq units" << endl;
    }
};

int main()
{
    Area m;
    m.area(20, 30);
    cout << endl;
    m.area(20);
    return 0;
}
