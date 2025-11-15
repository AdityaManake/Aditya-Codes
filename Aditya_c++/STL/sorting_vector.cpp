#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={4,1,2,1,2};
    sort(v.begin(),v.end());
    for(int i:v)
    {
        cout<<i<<endl;
    }
    return 0;
}