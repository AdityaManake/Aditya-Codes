#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>v(10);
    vector<char>::iterator p;
    int i;
    p=v.begin();
    i=0;
    while(p!=v.end())
    {
        *p=i+'a';
        p++;
        i++;
    }
    p=v.begin();
    while(p!=v.end())
    {
        cout<<*p<<" ";
        p++;
    }
    return 0;
}