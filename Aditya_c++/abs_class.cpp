// Abstract class is a class that contains atleast one pure virtual function
#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void show()=0;
};
class Derived:public Base
{
    public:
    void show()
    {
        cout<<"Derived class implementation of show()"<<endl;
    }
};
int main()
{
    Base *b;
    Derived d;
    b=&d;
    b->show();
    return 0;
}