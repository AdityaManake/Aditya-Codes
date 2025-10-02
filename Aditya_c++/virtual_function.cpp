#include<iostream>
using namespace std;
class Shape
{
    protected:
    int length=10,breadth=5;
    public:
    virtual void calculate()
    {
        cout<<"Base class area: "<<length*breadth<<endl;
    }
};
class Rectangle: public Shape
{
    public:
    void calculate() 
    {   
        length=20;
        breadth=10;
        cout<<"Derived class area: "<<length*breadth<<endl;
    }
};
int main()
{
    Shape *ptr,sh;
    sh.calculate();
    Rectangle rec;
    ptr=&rec;
    ptr->calculate();
    return 0;
}