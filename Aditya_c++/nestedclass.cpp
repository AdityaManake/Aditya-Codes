#include<iostream>
#include<string>
using namespace std;
class Student
{
   public:
   string name;
   int rollno;
   void getData()
   {
       cout << "Enter student name: ";
       getline(cin,name);
       cout << "Enter student roll number: ";
       cin >> rollno;
       cin.ignore();
   }
   void displayData()
   {
       cout << "Student Name: " << name << endl;
       cout << "Student Roll Number: " << rollno << endl;
   }
   class Marks
   {
        public:
        int m1,m2;
        void getMarks()
        {
            Student obj1;
            obj1.getData();
            cout << "Enter marks of OOP : ";
            cin >> m1;
            cout << "Enter marks of ADS: ";
            cin >> m2;
        }
        void displayMarks()
        {
            Student obj1;
            obj1.displayData();
            cout << "Marks in OOP: " << m1 << endl;
            cout << "Marks in ADS: " << m2 << endl;
        }
   };
};
int main()
{
    Student::Marks obj2;
    obj2.getMarks();
    obj2.displayMarks();
    return 0;
}