#include <iostream>
using namespace std;

template <class T>
T sum(T arr[], int n) {
    T sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};

    cout<<"Sum of int array: "<<sum(a, 5)<<endl;

    return 0;
}
