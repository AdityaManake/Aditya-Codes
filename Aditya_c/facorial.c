#include<stdio.h>
int factorial_recursive(int n);
int factorial_iterative(int n);
int main()
{
    int number;
    printf("Enter the number for which you want to find factorial of:");
    scanf("%d",&number);
    printf("The factorials of the given number using recursive approach are: %d\n",factorial_recursive(number));
    printf("The factorials of the given number using iterative approach are: %d\n",factorial_iterative(number));
    return 0;
}

int factorial_recursive(int n)
{

    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
     return n*factorial_recursive(n-1);
    }

}
int factorial_iterative(int n)
{
int fact=1;
for (int i = 1; i <=n; i++)
{
   fact*=i;
}
return fact;
}