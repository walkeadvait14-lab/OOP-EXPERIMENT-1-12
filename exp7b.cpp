#include <iostream>
using namespace std;

class Sumi
{
public:
    void sum(float a[5])
    {
        float s = 0;
        for (int i = 0; i < 5; i++)
            s += a[i];
        cout << "Sum of 5 float numbers: " << s << endl;
    }

    void sum(int b[10])
    {
        int s = 0;
        for (int i = 0; i < 10; i++)
            s += b[i];
        cout << "Sum of 10 integer numbers: " << s << endl;
    }
};

int main()
{
    Sumi s1;
    float f[5];
    int d[10];

    cout << "Enter 5 float numbers:\n";
    for (int i = 0; i < 5; i++)
        cin >> f[i];

    cout << "Enter 10 integer numbers:\n";
    for (int i = 0; i < 10; i++)
        cin >> d[i];

    s1.sum(f);
    s1.sum(d);

    return 0;
}
