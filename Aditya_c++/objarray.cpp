#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    string name;
    int rollno;
    int marks;
    void getData()
    {
        cout<<"Enter student name:";
        getline(cin, name);
        cout<<"Enter roll number:";
        cin>>rollno;
        cout<<"Enter total marks:";
        cin>>marks;
        cin.ignore();
    }
};
int main()
{
    Student s1[5];
    for(int i=0 ; i<5 ; i++)
    {
        cout<<"Enter details for student "<<i+1<<":\n";
        s1[i].getData();
    }
    int max=0;
    for(int i=0;i<5;i++)
    {
        if(s1[i].marks > s1[max].marks)
            max=i;
    }
    cout<<"Student with highest marks:\n";
    cout<<"Name: "<<s1[max].name<<"\n";
    cout<<"Roll No: "<<s1[max].rollno<<"\n";
    cout<<"Total Marks: "<<s1[max].marks<<"\n";
}