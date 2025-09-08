#include<iostream>
#include<string>
using namespace std;
class Student
{
    private:
    string name="Aditya";
    int s1=82,s2=56,s3=95;
    friend void calculateAverage(Student&);
};
void calculateAverage(Student& obj)
{
    float average;
    average=(obj.s1+obj.s2+obj.s3)/3.0;
    cout<<"Average: "<<average<<endl;
}
int main()
{
    Student obj;
    calculateAverage(obj);
    return 0;
}