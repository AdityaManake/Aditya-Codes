#include<iostream>
using namespace std;
class Number
{
    private:
    int a;
    public:
    Number(int num)
    {
        a=num;
    }
    void operator ++()
    {
        a=a+1;
    }
    void display()
    {
        cout<<a<<endl;
    }
};
int main()
{
    Number n1(10);
    ++n1;
    n1.display();
    return 0;
}   