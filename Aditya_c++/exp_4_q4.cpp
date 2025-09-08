#include <iostream>
using namespace std;

class Number {
    int value;

public:
   
    Number(int v = 0) {
        value = v;
    }

    
    void display() {
        cout << value << endl;
    }

   
    void swap(Number &obj) {
        int temp = value;
        value = obj.value;
        obj.value = temp;
    }
};

int main() {
    Number n1(10), n2(20);

    cout << "Before Swap:" << endl;
    cout << "n1 = "; n1.display();
    cout << "n2 = "; n2.display();

   
    n1.swap(n2);

    cout << "\nAfter Swap:" << endl;
    cout << "n1 = "; n1.display();
    cout << "n2 = "; n2.display();

    return 0;
}
