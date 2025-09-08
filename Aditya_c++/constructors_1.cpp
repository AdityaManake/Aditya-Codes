#include<iostream>
using namespace std;
class Sum
{
    int n,sum;
    public:
    Sum(int num)
    {
        n=num;
        sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=i;
        }
        cout<<"Sum="<<sum;
    }
};
int main()
{
    Sum s(10);
    return 0;
}