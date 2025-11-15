#include<bits/stdc++.h>
using namespace std;
int reverseVector(vector<int> &v)
{
    for(int i=v.size()-1; i>=0; i--)
    {
        return v[i];
    }

}
int main()
{
    vector<int>v={1,2,3,4,5};
    cout<<"Original vector elements:"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<"Reversed vector elements:"<<endl;
    reverseVector(v);
    return 0;
}