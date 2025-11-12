#include <iostream>
using namespace std;

class Sum
{
private:
    int num;
    int summy = 0;

public:
    Sum()
    {
        num = 5;
        for (int i = 1; i <= num; i++)
        {
            summy = summy + i;
        }
        cout << "Sum of " << num << " numbers is: " << summy << endl;
    }

    Sum(int n)
    {
        num = n;
        summy = 0;
        for (int i = 1; i <= num; i++)
        {
            summy = summy + i;
        }
        cout << "Sum of " << num << " numbers is: " << summy << endl;
    }
};

int main()
{
    Sum k;
    Sum z(3);
    Sum x(7);
    return 0;
}
