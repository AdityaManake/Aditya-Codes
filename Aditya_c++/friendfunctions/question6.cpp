#include<iostream>
using namespace std;
class Beta;
class Gamma;
class Alpha
{
    private:
    int a=5;
    friend class Beta;
    friend class Gamma;
    friend int sum(Alpha&, Beta&, Gamma&);
};
class Beta
{
    private:
    int b=10;
    friend class Alpha;
    friend class Gamma;
    friend int sum(Alpha&, Beta&, Gamma&);
};

class Gamma
{
    private:
    int c=15;
    friend class Alpha;
    friend class Beta;
    friend int sum(Alpha&, Beta&, Gamma&);
};
int sum(Alpha& obj1, Beta& obj2, Gamma& obj3)
{
    return obj1.a+obj2.b+obj3.c;
}
int main()
{
    Alpha obj1;
    Beta obj2;
    Gamma obj3;
    cout << "Sum: " << sum(obj1, obj2, obj3) << endl;
    return 0;
}