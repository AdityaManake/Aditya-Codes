#include<bits/stdc++.h>
using namespace std;
void convertToDecimal(int n)
{
    int ans=0,pow=1;
    while(n>0)
    {
        int rem=n%10;
        ans+=rem*pow;
        n/=10;
        pow*=2;
    }
    cout<<ans<<" ";
}
int main()
{
    cout<<"Decimal representation: ";
    convertToDecimal(1011101);
}