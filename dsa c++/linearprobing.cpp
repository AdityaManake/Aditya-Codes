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
    vector<int>hashTable(hl,-1);
    for(int i=0;i<n;i++)
    {
        int index=arr[i]%hl;
        int start=index;
        while(hashTable[index] != -1 && hashTable[index]!=arr[i])
        {
            index=(index+1)%hl;
            if(index==start)
            {
                cout<<"Table full cannot insert"<<arr[i]<<endl;
                break;
            }
        }
        if(hashTable[index]==-1 || hashTable[index]==arr[i])
        hashTable[index]=arr[i];
    }

    for(int i=0;i<hl;i++)
    {
        cout<< i << "->"<<hashTable[i]<<endl;
    }
    return 0;
}