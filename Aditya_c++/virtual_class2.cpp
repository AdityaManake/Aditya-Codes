#include<iostream>
#include<string>
using namespace std;
class Grandparent
{
    protected:
    string name="Bob";
    public:
    void displayInfo1()
    {
        cout<<"Name: "<<name<<endl;
    }
};
class Parent1:virtual public Grandparent
{
    protected:
    int age=65;
    void displayInfo2()
    {
        cout<<"Age: "<<age<<endl;
    }

};
class Parent2:virtual public Grandparent
{
    protected:
    string occupation="Retired";
    void displayInfo3()
    {
        cout<<"Occupation: "<<occupation<<endl;
    }
};
class Child: public Parent1, public Parent2
{
    public:
    void display()
    {
        displayInfo1();
        displayInfo2();
        displayInfo3();
    }
};
int main()
{
    Child c;
    c.display();
    c.displayInfo1();
    return 0;
}