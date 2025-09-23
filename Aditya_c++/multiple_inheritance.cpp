#include<iostream>
#include<string>
using namespace std;
class University
{
    protected:
    string uni_name;
    int uni_code;
};
class Course
{
    protected:
    string course_name;
    int course_code;
};
class Student: public University, public Course
{
    private:
    string stud_name;
    float cgpa;
    public:
    void accept()
    {
        cout<<"Enter university name:";
        getline(cin, uni_name);
        cout<<"Enter university code:";
        cin>>uni_code;
        cin.ignore();
        cout<<"Enter course name:";
        getline(cin, course_name);
        cout<<"Enter course code:";
        cin>>course_code;
        cout<<"Student name:";
        cin.ignore();
        getline(cin, stud_name);
        cout<<"Enter student cgpa:";
        cin>>cgpa;
   }
   void display()
   {
        cout<<"University name:"<<uni_name<<endl;
        cout<<"University code:"<<uni_code<<endl;
        cout<<"Course name:"<<course_name<<endl;
        cout<<"Course code:"<<course_code<<endl;
        cout<<"Student grade:"<<cgpa<<endl;
   }
};
int main()
{
    Student s1;
    s1.accept();
    s1.display();
    return 0;
}