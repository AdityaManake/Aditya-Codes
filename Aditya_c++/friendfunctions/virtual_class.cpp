#include<iostream>
using namespace std;
class CollegeStudent
{
    protected:
    int stud_id,college_id;
    public:
    void inputStud()
    {
        cout<<"Enter student ID: ";
        cin>>stud_id;
        cout<<"Enter college ID: ";
        cin>>college_id;
    }
    void displayStud()
    {
        cout<<"Student ID: "<<stud_id<<endl;
        cout<<"College ID: "<<college_id<<endl;
    }
};
class Test: virtual public CollegeStudent
{
    protected:
    int marks1,marks2;
    public:
    void inputTest()
    {
        cout<<"Enter marks of subject 1: ";
        cin>>marks1;
        cout<<"Enter marks of subject 2: ";
        cin>>marks2;
    }
    void displayTest()
    {
        cout<<"Marks of subject 1: "<<marks1<<endl;
        cout<<"Marks of subject 2: "<<marks2<<endl;
    }
};
class Sports: virtual public CollegeStudent
{
    protected:
    int score;
    public:
    void inputSports()
    {
        cout<<"Enter sports score: ";
        cin>>score;
    }
    void displaySports()
    {
        cout<<"Sports score: "<<score<<endl;
    }
};
class Result : public Test, public Sports
{
    public:
    int input()
    {
        inputStud();
        inputTest();
        inputSports();
    }
    void display()
    {
        displayStud();
        displayTest();
        displaySports();
        cout<<"Total marks: "<<marks1+marks2+score<<endl;
    }
};
int main()
{
    Result r;
    r.input();
    r.display();
    return 0;
}