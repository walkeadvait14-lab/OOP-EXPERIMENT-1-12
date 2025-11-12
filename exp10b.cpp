#include <iostream>
#include <string>
using namespace std;

template <class T>
T square(T x) {
    T result = x * x;
    return result;
}

template <>
string square<string>(string s) {
    return s + s;
}

int main() {
    int i = 2, ii;
    string ww = "Atharva";
    ii = square<int>(i);
    cout << i << " : " << ii << endl;
    cout << square<string>(ww) << endl;
    return 0;
}
