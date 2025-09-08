#include<iostream>
using namespace std;
class Number
{
    private:
    int a=5;
    int b=10;
    friend void swap(Number& , Number&);
    friend void display(Number& ,Number&);
};
void swap(Number& obj1, Number& obj2)
{
    int temp;
    temp = obj1.a;
    obj1.a=obj2.b;
    obj2.b=temp;
}
void display(Number& obj1,Number& obj2)
{
    cout << "a: " << obj1.a << ", b: " << obj2.b << endl;

}

int main()
{
    Number obj1,obj2;
    cout<<"Before swapping:"<<endl;
    display(obj1,obj2);
    swap(obj1,obj2);
    cout<<"After swapping:"<<endl;
    display(obj1, obj2);
    return 0;
}