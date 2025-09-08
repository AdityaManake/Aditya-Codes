
#include<iostream>
using namespace std;
class B;
class A
{
    private:
    int a=5;
    friend class B;
    friend int sum(A&, B&);
};
class B
{
    private:
    int b=10;
    friend class A;
    friend int sum(A&, B&);
};
int sum(A& objA, B& objB)
{
    return objA.a + objB.b;
}
int main()
{
    A objA;
    B objB;
    cout<<"The sum of two numbers is:"<<sum(objA , objB);
    return 0;
}