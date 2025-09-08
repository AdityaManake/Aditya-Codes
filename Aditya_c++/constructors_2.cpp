#include<iostream>
#include<string>
using namespace std;
class Student
{
    private:
    string name;
    float percentage;
    public:
    Student(string n, float p)
    {
        name=n;
        percentage=p;
        cout<<"Name:";
        getline(cin,name);
        cout<<"Percentage:";
        cin>>percentage;
    }
    void display()
    {
        cout<<"Student name:"<<name<<endl;
        cout<<"Student percentage:"<<percentage<<endl;
    }

};
int main()
{
    Student s1("Aditya",85.5);
    s1.display();
    return 0;
}
