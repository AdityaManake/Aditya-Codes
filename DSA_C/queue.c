
#include<stdio.h>
#define MAX 100
int queue[MAX];
int rear=-1, front=-1;
void enqueue(int n);
void dequeue();
void display();
void peek();
int main()
{
    int choice,value;
    printf("Enter '1' to enqueue:\n");
    printf("Enter '2' to dequeue:\n");
    printf("Enter '3' to peek:\n");
    printf("Enter '4' to display:\n");
    printf("Enter '5' to exit:\n");
    while(1)
    {
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter value:");
                    scanf("%d",&value);
                    enqueue(value);
                    break;
            case 2: dequeue();
                    break;
            case 3: peek();
                    break;
            case 4: display();
                    break;
            case 5: printf("Exiting!..\n");
                    return 0;
            default: printf("Invalid input!\n");
        }
    }
}
void enqueue(int n)
{
    if(rear==MAX-1)
    {
        printf("Queue Overflow!\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=n;
        printf("%d enqueued!\n",n);
    }
}
void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("Queue Underflow!\n");
    }
    else
    {
        printf("%d deleted from queue!\n",queue[front]);
        front++;
    }
}
void peek()
{
    if(front==-1 || front>rear)
    {
        printf("Queue Empty!\n");
    }
    else
    {
        printf("First element:%d\n",queue[front]);
    }
}
void display()
{
    if(front==-1 || front>rear)
    {
        printf("Queue Empty!\n");
    }
    else
    {
        printf("Queue Elements:\n");
        for(int i=front; i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}