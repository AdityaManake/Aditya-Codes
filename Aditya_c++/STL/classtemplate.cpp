#include<bits/stdc++.h>
using namespace std;
template<typename T> class Calculator{
    public:
    T add(T a , T b)
    {
        return a+b;
    }
    T substract(T a, T b)
    {
        return a-b;
    }
    T multiply(T a, T b)
    {
        return a*b;
    }
    T divide(T a,T b)
    {
        return a/b;
    }

};
int main()
{
    Calculator<int>intCalc;
    cout<<intCalc.add(5,3)<<endl;
    cout<<intCalc.substract(5,3)<<endl;
    cout<<intCalc.multiply(5,3)<<endl;
    cout<<intCalc.divide(5,3)<<endl;
    Calculator<double>doubleCalc;
    cout<<doubleCalc.add(5.5,3.3)<<endl;
    cout<<doubleCalc.substract(5.5,3.3)<<endl;
    cout<<doubleCalc.multiply(5.5,3.3)<<endl;
    cout<<doubleCalc.divide(5.5,3.3)<<endl;
    return 0;
}

