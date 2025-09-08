/*
//Factorial of a given number program
#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number-1));
    }
}
int main()
{
    int num;
    printf("Enter the number you want the factorial of:");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, factorial(num));
    return 0;
}


//sum of first 50 numbers using recursive function program
#include<stdio.h>
int sum()
{
    int sum=0;
    for (int i = 0; i < 50; i++)
    {
       sum = sum + i;
    }
    return sum;
}
int main()
{
int result = sum();
printf("The sum of first 50 numbers is: %d",result);
return 0;
}
/**/ 

//fibonacci series in recursion program 
#include<stdio.h>
int fib_recursive(int n)
{
    
    if(n==0 || n==1)
    {
        return n;
    }
    else
    {
        return fib_recursive(n - 1)+fib_recursive(n - 2);
    }
}
int main()
{
    int a;
    printf("Enter any number upto which you want to find fibonacci series:\n");
    scanf("%d",&a);
    printf("The fibonacci series upto %d is:\n",a);
    for (int i = 0; i <= a; i++)
    {
        printf("%d ",fib_recursive(i));
    }
    
    return 0;
} 


//fibonacci series using iteration program
