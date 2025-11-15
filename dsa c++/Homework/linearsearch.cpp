#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    cout<<"Enter number of elements to insert in vector: ";
    int n;
    cin>>n;
    cout<<"Enter "<<n<<" elements:"<<endl;
    for (int i = 0; i < n; i++) {
        int element;
        cout<<"Enter element "<<i+1<<" : ";
        cin >> element;
        v.push_back(element);
    }
    cout<<"Enter element to search: ";
    int key;
    cin>>key;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==key)
        {
            cout<<"Element found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"Element not found in the vector."<<endl;
    return 0;
}