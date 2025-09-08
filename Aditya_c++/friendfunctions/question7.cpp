#include<iostream>
#include<math.h>
using namespace std;
class Point
{
    private:
    int x,y;
    friend int calculateDistance(Point&, Point&);
    public:
    void acceptData()
    {
        cout<<"Enter value of 'x': ";
        cin>>x;
        cout<<"Enter value of 'y': ";
        cin>>y;
    }
};
int calculateDistance(Point& p1, Point& p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
};
int main()
{
    Point p1,p2;
    cout<<"Point 1:"<<endl;
    p1.acceptData();
    cout<<"Point 2:"<<endl;
    p2.acceptData();  
    cout<<"The distance between two points is:"<<calculateDistance(p1,p2);
    return 0;
}