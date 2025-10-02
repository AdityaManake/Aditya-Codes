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
    ~Demo()
    {
        cout<<"Destructor called"<<endl;
        cout<<"x="<<x<<endl;
    }
};
int main()
{
    Demo d1;
    return 0;
}