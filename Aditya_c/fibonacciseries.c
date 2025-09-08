#include <stdio.h>

// Function prototypes
int fib_recursive(int n);
int fib_itreative(int n);

int main()
{
    int number;

    // Input from user
    printf("Enter any number: ");
    scanf("%d", &number);

    // Iterative approach
    printf("The value of the Fibonacci number at position no. %d using the iterative approach is %d\n", number, fib_itreative(number));

    // Recursive approach
    printf("The value of the Fibonacci number at position no. %d using the recursive approach is %d\n", number, fib_recursive(number));

    return 0;
}

// Recursive Fibonacci function
int fib_recursive(int n)
{
    if (n == 0 || n == 1)
    {
        return n; // Return n directly for base cases
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

// Iterative Fibonacci function
int fib_itreative(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int a = 0, b = 1, temp;
    for (int i = 2; i <= n; i++) // Loop from 2 to n
    {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b; // Return the nth Fibonacci number
}
