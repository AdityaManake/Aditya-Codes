#include<iostream>
using namespace std;
class Number
{
    private:
    int x,temp;
    public:
    void accept()
    {
        cout<<"Enter a number: ";
        cin>>x;
        temp=x;
    }
    void operator ++()
    {
        x=++x;
    }
    void reset()
    {
        x=temp;
    }
    void operator ++(int)
    {
        x=x++;
    }
    void display1()
    {
        cout<<"(pre)The number is: "<<x<<endl;
    }
    void display2()
    {
        cout<<"(post)The number is: "<<x<<endl;
    }
};
int main()
{
    Number n1;
    n1.accept();
    ++n1;
    n1.display1();
    n1.reset();
    n1++;
    n1.display2();
    return 0;
}