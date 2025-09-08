#include<iostream>
using namespace std;
class Greatest2;
class Greatest
{
    public:
    int a;
    void getdata()
    {
        cout<<"Enter the first number:";
        cin>>a;
    }
    friend void compare(Greatest &a, Greatest2 &b);
};
class Greatest2
{
    public:
    int b;
    void accept()
    {
        cout<<"Enter the second number:";
        cin>>b;
    }
    friend void compare(Greatest &n1, Greatest2 &n2);
};
void compare(Greatest &n1, Greatest2 &n2)
{
    if(n1.a > n2.b)
        cout<<"The greatest number is: "<<n1.a;
    else
        cout<<"The greatest number is: "<<n2.b;
}
int main()
{
    Greatest obj1;
    Greatest2 obj2;
    obj1.getdata();
    obj2.accept();
    compare(obj1, obj2);
}
