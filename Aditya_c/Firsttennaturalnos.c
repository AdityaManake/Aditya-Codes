#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <=10 ; i++)
    {
        printf("%d ", i);
        sum = i + sum;
    }
    printf("\n");
    printf("Sum of first 10 natural numbers are - %d\n", sum);

    return 0;
}