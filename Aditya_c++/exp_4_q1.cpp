#include<iostream>
using namespace std;
class Result2;
class Result1
{
    public:
    int marks;
    void getData()
    {
        cout<<"Enter marks for subject:";
        cin>>marks;
    }
    int data()
    {
        return marks;
    }

};
class Result2
{
    public:
    int marks;
    void accept()
    {
        cout<<"Enter marks for subject:";
        cin>>marks;
    }
    int data()
    {
        return marks;
    }
};

int main()
{
    Result1 obj1;
    Result2 obj2;
    obj1.getData();
    obj2.accept();
    float avg= (obj1.data()+obj2.data())/2.0;
    cout<<"Average marks: "<<avg;
    return 0;
}