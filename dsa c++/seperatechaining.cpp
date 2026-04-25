#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,hl;
    cout<<"Enter number of array elements:";
    cin>>n;
    cout<<"Enter length of hash table:";
    cin>>hl;
    cout<<"Enter array elements:";
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<vector<int>> hashTable(hl);
    for(int i=0;i<n;i++)
    {
        int index= arr[i]%hl;
        hashTable[index].push_back(arr[i]);
    }
    cout<<"Hash Table:\n";
    for(int i=0;i<hl;i++)
    {
        cout<<i << "-> ";
        for(int x: hashTable[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}