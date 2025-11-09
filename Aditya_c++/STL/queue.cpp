#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>age;
    age.push(21);
    age.push(22);   
    age.push(23);
    age.push(24);
    cout<<"Front element is: "<<age.front()<<endl;
    cout<<"Back element is: "<<age.back()<<endl;
    age.pop();
    age.pop();
    while(!age.empty())
    {
        cout<<"Elements in queue are:"<<age.front()<<endl;
        age.pop();
    }
    return 0;
}