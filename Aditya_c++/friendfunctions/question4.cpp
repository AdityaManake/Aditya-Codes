#include<iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int imag;
    friend void addComplex(Complex&, Complex&);
    public:
    void takeInputs()
    {
        cout<<"Enter real part:";
        cin>>real;
        cout<<"Enter imaginary part:";
        cin>>imag;
    }
};
void addComplex(Complex& c1, Complex& c2)
{
    int total_real=0,total_imag=0;
    total_real=c1.real + c2.real;
    total_imag=c1.imag + c2.imag;
    cout<<"Sum of Complex Numbers: "<<total_real<<" + "<<total_imag<<"i"<<endl;
}
int main()
{
    Complex c1,c2;
    c1.takeInputs();
    c2.takeInputs();
    addComplex(c1,c2);
    return 0;
}