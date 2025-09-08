#include <iostream>
using namespace std;

class A {
public:
    int numA;
    A(int a) : numA(a) {}
};

class B {
public:
    int numB;
    B(int b) : numB(b) {}
};

void swapValues(A objA, B objB) {
    int temp = objA.numA;
    objA.numA = objB.numB;
    objB.numB = temp;
    cout << "Inside swap function:\n";
    cout << "A: " << objA.numA << ", B: " << objB.numB << endl;
}

int main() {
    A a(5);
    B b(10);

    cout << "Before swapping:\n";
    cout << "A: " << a.numA << ", B: " << b.numB << endl;

    swapValues(a, b);

    cout << "After swapping (in main):\n";
    cout << "A: " << a.numA << ", B: " << b.numB << endl;

    return 0;
}
