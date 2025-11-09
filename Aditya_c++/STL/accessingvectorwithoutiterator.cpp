#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>v(10);
    unsigned int i;
    for(i=0;i<v.size();i++)
    {
        v[i]=i+'a';
    }
    cout<<"Current elements in vector are:\n";
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n\n";
    cout<<"Expanding vector:\n";
    cout<<endl;
    for(i=0;i<v.size();i++)
    {
        v[i]=toupper(v[i]);
    }
    cout<<"Modified contents:\n";
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}