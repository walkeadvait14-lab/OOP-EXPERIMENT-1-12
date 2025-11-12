#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int s;
    cout << "Enter size of vector: ";
    cin >> s;

    vector<int> vec(s);

    cout << "Enter " << s << " vector elements: ";
    for (int i = 0; i < s; i++)
        cin >> vec[i];

    cout << "\nAll vector elements are: ";
    for (int i = 0; i < s; i++)
        cout << vec[i] << " ";
    cout << endl;

    for (int i = 0; i < s; i++)
        vec[i] = vec[i] + i * 2;

    cout << "Modified elements are: ";
    for (int i = 0; i < s; i++)
        cout << vec[i] << " ";
    cout << endl;

    int scalar;
    cout << "Enter a scalar value to multiply: ";
    cin >> scalar;

    for (int i = 0; i < s; i++)
        vec[i] = vec[i] * scalar;

    cout << "After multiplying by scalar: ";
    for (int i = 0; i < s; i++)
        cout << vec[i] << " ";
    cout << endl;

    return 0;
}
