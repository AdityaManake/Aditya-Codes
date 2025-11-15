#include<bits/stdc++.h>
using namespace std;
class Area
{
    private:
    int l,b;
    public:
    void area(int length)
    {
        cout<<"Area of square: "<<length*length<<endl;
    }
    void area(int length, int breadth)
    {
        cout<<"Area of rectangle: "<<length*breadth<<endl;
    }
};
int main()
{
    Area a;
    a.area(5);
    a.area(5,10);
    return 0;
}