#include<bits/stdc++.h>
//#include<stack>
using namespace std;
int main()
{
    stack<string>cars;
    cars.push("BMW");
    cars.push("Audi");
    cars.push("Mercedes");
    cars.push("Ferrari");
    cout<<"Top element is: "<<cars.top()<<endl;
    cout<<"Size of stack is: "<<cars.size()<<endl;
    cars.pop();
    cars.pop();
    while(!cars.empty())
    {
        cout<<"Elements in stack are:"<<cars.top()<<endl;
        cars.pop(); 
    }
    return 0;
}