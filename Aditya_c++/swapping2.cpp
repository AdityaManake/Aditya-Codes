#include <iostream>
using namespace std;

class Number {
public:
    int a, b;
    Number(int x, int y) {
        a = x;
        b = y;
    }
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
    void swapByValue(Number obj) {
        int temp = obj.a;
        obj.a = obj.b;
        obj.b = temp;
        cout << "Inside swapByValue (after swap):\n";
        cout << "a = " << obj.a << ", b = " << obj.b << endl;
    }
};

int main() {
    Number num(10, 20);

    cout << "Before swap:\n";
    num.display();
    num.swapByValue(num);
    cout << "After swap (in main):\n";
    num.display();

    return 0;
}
