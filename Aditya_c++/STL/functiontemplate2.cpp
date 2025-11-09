#include <iostream>
#include <string>
using namespace std;

template <typename T>
T square(T n) {
    return n * n;
}
template <>
string square<string>(string str)
{
    return str + str;
}

int main() {
    int num = 5;
    string text = "Hello";

    cout << "Square of integer: " << square(num) << endl;
    cout << "Square of string: " << square(text) << endl;

    return 0;
}