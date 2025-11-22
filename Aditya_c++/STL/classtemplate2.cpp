#include<iostream>
using namespace std;
template< class T>
class Stack
{
    T stack[10];
    int top=-1;
    public:
    /*  Stack()
    {
        top=-1;
    }*/
    void push(T value)
    {
        if(top==9)
        {
            cout<<"Stack overflow"<<endl;
        
        }
        else
        {
            top++;
            stack[top]=value;
            cout<<value<<"pushed to stack"<<endl;
        }
    }
    void pop()
    {
        if(top==-1)
        {
             cout<<"Stack underflow"<<endl;
        }
        else
        {
            cout<<stack[top]<<"popped from stack"<<endl;
            top--;
        }
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"Stack underflow"<<endl;
        }
        else
        {
            cout<<"Stack elements:"<<endl;
            for(int i=0;i<top;i++)
            {
                cout<<stack[i]<<" ";    
            }
            cout<<endl;
        }
    }
};
int main()
{
    Stack<int> intStack;
    Stack<float> floatStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.display();
    intStack.pop();
    intStack.display();
    floatStack.push(1.1);
    floatStack.push(2.2);
    floatStack.display();
    floatStack.pop();
    floatStack.display();   
    return 0;
}