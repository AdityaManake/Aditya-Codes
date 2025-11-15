#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> v(10);
    for(char i=0;i <v.size();i++)
    {
        v[i]='a'+i;
    }
    vector<char>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}