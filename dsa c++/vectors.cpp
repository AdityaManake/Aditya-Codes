#include<bits/stdc++.h>  
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);    
    v.push_back(30);
    v.push_back(40);
    for(int i:v)
    {
        cout<<i<<endl;
    }
    v.pop_back();
    cout<<"After pop_back operation:"<<endl;
    for(int i:v)
    {
        cout<<i<<endl;
    }
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.size()<<endl;
    cout<<v.at(1)<<endl; // to find element at a specific index
    return 0;
}