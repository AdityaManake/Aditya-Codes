#include<iostream>
#include<string>
using namespace std;
class Student
{
    private:
    string name;
    int rollno;
    float percentage;
    public:
    void getData()
    {
        cout<<"Enter student name: ";
        getline(cin,this->name);
        cout<<"Enter student roll number: ";
        cin>>this->rollno;
        cout<<"Enter student percentage: ";
        cin>>this->percentage;
        cin.ignore();
    }
    void displayData()
    {
        this->getData();
        cout<<"Student Details:"<<endl;
        cout<<"Student Name: "<<this->name<<endl;
        cout<<"Roll Number: "<<this->rollno<<endl;
        cout<<"Percentage: "<<this->percentage<<"%"<<endl;
    }
};
int main()
{
    Student s1;
    s1.displayData();
    return 0;
}