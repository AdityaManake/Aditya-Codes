#include<iostream>
using namespace std;
class Cube;
class Box
{
    private:
    int box_volume=500;
    friend class Cube;
    friend void displayVolume(Box&, Cube&);
};
class Cube
{
    private:
    int cube_volume=1000;
    friend class Box;
    friend void displayVolume(Box&, Cube&);
};
void displayVolume(Box& a , Cube& b)
{
    if (a.box_volume > b.cube_volume)
    {
        cout<<"Box has larger volume:"<<a.box_volume<<endl;
    }
    else
    {
        cout<<"Cube has larger volume:"<<b.cube_volume<<endl;
    }
    
}
int main()
{
    Box obj1;
    Cube obj2;
    displayVolume(obj1, obj2);
    return 0;
}