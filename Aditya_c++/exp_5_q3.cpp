#include<iostream>
#include<string>
using namespace std;
class College
{
    private:
    string course_name,stud_name;
    int roll_no;
    public:
    College()
    {
        roll_no=57;
        stud_name="Aditya";
        course_name="CSE-AIDS";
    }
    void display()
    {
        cout<<"Roll no:"<<roll_no<<endl;
        cout<<"Student name:"<<stud_name<<endl;
        cout<<"Course name:"<<course_name<<endl;
    }
};
int main()
{
    College c1;
    c1.display();
    return 0;
}