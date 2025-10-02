#include<iostream>
using namespace std;
class Demo
{
    private:
    int x,y;
    public:
    Demo(int x1,int y1)
    {
        x=x1;
        y=y1;
        cout<<"Parameterized constructor called"<<endl;
        cout<<"x="<<x<<" y="<<y<<endl;
    }
    Demo(Demo &d2)
    {
        x=d2.x;
        y=d2.y;
        cout<<"Copy constructor called"<<endl;
        cout<<"x="<<x<<" y="<<y<<endl;
    }

};
int main(){
    {
        Demo d1(10,20);
        Demo d2=d1;
        return 0;
    }
}