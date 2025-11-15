#include <iostream>
using namespace std;

template <class T>
class Stack {
    T stack[10];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(T value) {
        if (top == 9)
            cout << "Stack Overflow!" << endl;
        else {
            top++;
            stack[top] = value;
            cout << value << " pushed to stack." << endl;
        }
    }

    void pop() {
        if (top == -1)
            cout << "Stack Underflow!" << endl;
        else {
            cout << stack[top] << " popped from stack." << endl;
            top--;
        }
    }

    void display() {
        if (top == -1)
            cout << "Stack is empty." << endl;
        else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--)
                cout << stack[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Stack<int> intStack;
    Stack<float> floatStack;

    cout << "\n--- Integer Stack Operations ---" << endl;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.display();
    intStack.pop();
    intStack.display();

    cout << "\n--- Float Stack Operations ---" << endl;
    floatStack.push(1.1);
    floatStack.push(2.2);
    floatStack.display();
    floatStack.pop();
    floatStack.display();

    return 0;
}

