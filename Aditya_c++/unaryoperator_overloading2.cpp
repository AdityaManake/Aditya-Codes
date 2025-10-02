#include<iostream>
using namespace std;
class Number
{
    private:
    int x;
    public:
    void accept()
    {
        cout<<"Enter a number: ";
        cin>>x;
    }
    void operator -()
    {
        x=-x;
    }
    void display()
    {
        cout<<"The number is: "<<x<<endl;
    }
};
int main()
{
    Number n1;
    n1.accept();
    -n1;
    n1.display();
    return 0;
}