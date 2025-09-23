#include<iostream>
#include<string>
using namespace std;
class Person
{
    protected:
    string name;
    int age;
};
class Student: public Person
{   
    private:
    string uni,course;
    public:
    void accept()
    {
        cout<<"Enter your name:";
        getline(cin ,name);
        cout<<"Enter your age:";
        cin>>age;
        cin.ignore();
        cout<<"Enter your university name:";
        getline(cin , uni);
        cout<<"Enter your course name:";
        getline(cin, course);
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"University name:"<<uni<<endl;
        cout<<"Course name:"<<course<<endl;
    }
};
int main()
{
    Student s1;
    s1.accept();
    s1.display();
    return 0;
}
