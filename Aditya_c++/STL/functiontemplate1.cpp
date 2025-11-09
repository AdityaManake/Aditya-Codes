#include <iostream>
using namespace std;

template<typename T>
T sumArray(T arr[], int n) {
    T sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int intArr[10] = {1,2,3,4,5,6,7,8,9,10};
    float floatArr[10] = {1.1f,2.2f,3.3f,4.4f,5.5f,6.6f,7.7f,8.8f,9.9f,10.1f};
    double doubleArr[10] = {1.123,2.123,3.123,4.123,5.123,6.123,7.123,8.123,9.123,10.123};

    cout << "Sum of int array: " << sumArray(intArr, 10) << endl;
    cout << "Sum of float array: " << sumArray(floatArr, 10) << endl;
    cout << "Sum of double array: " << sumArray(doubleArr, 10) << endl;

    return 0;
}
