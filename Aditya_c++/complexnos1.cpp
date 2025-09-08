#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
    void add(const Complex &c1, const Complex &c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
};

int main() {
    Complex c1, c2, sum;
    cout << "Enter first complex number:\n";
    c1.input();
    cout << "Enter second complex number:\n";
    c2.input();
    sum.add(c1, c2);
    cout << "\nSum of the two complex numbers: ";
    sum.display();

    return 0;
}
