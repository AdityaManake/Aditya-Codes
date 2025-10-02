#include<iostream>
using namespace std;
class Demo
{
    int x;
    public:
    Demo()
    {
        x=5;
        cout<<"Default constructor called"<<endl;
        cout<<"x="<<x<<endl;
    }
    Demo(int x1)
    {
        x=x1;
        cout<<"Parameterized constructor called"<<endl;
        cout<<"x="<<x<<endl;
    }
    Demo(int x1,int y1)
    {
        x=x1+y1;
        cout<<"Parameterized constructor with two parameters called"<<endl;
        cout<<"x="<<x<<endl;
    }
};
int main()
{
    Demo d1;
    Demo d2(10);
    Demo d3(10,20);
    return 0;
}