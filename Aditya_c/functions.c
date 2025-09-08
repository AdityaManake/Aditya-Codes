#include <stdio.h>
int sum(int a, int b);
void printstar(int n) 
void message(void)
{
    printf("Hello this a function with no argument and return value\n");
}
{
    for (int i = 0; i < n; i++)
    {
          printf("%c", '*');
    }
}
int takingnumber()
{
    int i;
    // printf("Enter any number:");
    // scanf("%d", &i);
    // return i;
}

int main()
{
    int a, b, c;
    a = 57;
    b = 10;
    // c = takingnumber();
    message();
    // printstar(10);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}   