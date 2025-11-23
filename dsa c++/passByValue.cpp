#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "x = " << a << ", y = " << b << endl;   
}
int main()
{
    int x = 10, y = 20;
    cout << "x = " << x << ", y = " << y << endl;
    swap(x, y);
    return 0;
}   