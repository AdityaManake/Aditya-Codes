#include<iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    void inputData()
    {
        cout<<"Enter real part:";
        cin>>real;
        cout<<"Enter imaginary part:";
        cin>>imag;
    }
    void complexadd(Complex c1 , Complex c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
    void display()
    {
        cout<<"Complex number is: "<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.inputData();
    c2.inputData();
    c3.complexadd(c1, c2);
    c3.display();
    return 0;
}