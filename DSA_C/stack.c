#include<stdio.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int n);
void pop();
void peek();
void display();
void isEmpty();
void isFull();
int main()
{
    int choice,value;
    printf("Enter '1' to push:\n");
    printf("Enter '2' to pop:\n");
    printf("Enter '3' to peek:\n");
    printf("Enter '4' to display:\n");
    printf("Enter '5' to check if stack is empty:\n");
    printf("Enter '6' to check if stack is full:\n");
    printf("Enter '7' to exit:\n");
    while(1)
    {
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter element to push:");
                    scanf("%d",&value);
                    push(value);
                    break;
            case 2: pop();
                    break;
            case 3: peek();
                    break;
            case 4: display();
                    break;
            case 5: isEmpty();
                    break;
            case 6: isFull();
                    break;
            case 7: printf("Exiting!\n");
                    return 0;
            default: printf("Enter a valid input!\n");
        }
    }
}
void push(int n)
{
    if(top== MAX-1)
    {
        printf("Stack overflow!\n");
    }
    else
    {
        stack[++top]=n;
        printf("%d added to stack\n",n);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack underflow!\n");
    }
    else
    {
        printf("%d element popped out!\n",stack[top--]);
    }
}
void peek()
{
    if(top==-1)
    {
        printf("Stack empty!\n");
    }
    else
    {
        printf("Top element %d\n",stack[top]);
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack empty!\n");
    }
    else
    {
        printf("Stack elements:");
        for(int i=0;i<=top;i++)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
void isEmpty()
{
    if(top==-1)
    { 
        printf("Stack is empty!\n");
    }
    else{
        printf("Stack is not empty!\n");
    }
}
void isFull()
{
    if(top == MAX-1)
    {
        printf("Stack is Full!\n");
    }
    else
    {
        printf("Stack is not full!\n");
    }
    
}