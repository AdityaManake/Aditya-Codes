// Pure virtual function is a virtual function that is declared by assigning 0 in base class.
// It doesn't have any definition in base class and it must

#include<iostream>
using namespace std;
class Sum
{
    public:
    virtual void add()=0;
};
class Addition : public Sum
{
    public:
    void add()
    {
        int a=5,b=10;
        cout<<"Sum is:"<<a+b<<endl;
    }
};
int main()
{
    Sum *ptr;
    Addition ad;
    ptr=&ad;
    ptr->add();
    return 0;
}