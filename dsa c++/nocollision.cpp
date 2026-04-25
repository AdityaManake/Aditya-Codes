#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={1,2,3,4,5};
    vector<int>hashmap(10);
    for(int i=0;i<arr.size();i++)
    {
        hashmap[(arr[i]%10)]=arr[i];

    }

 for(int i = 0; i<arr.size(); i++) {
        cout << "in arr: " << arr[i] << endl;
        cout << "in HashMap: " << hashmap[i] << endl << endl;
    }

    return 0;


}