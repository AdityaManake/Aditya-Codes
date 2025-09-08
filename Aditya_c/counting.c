#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of array elements:");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter elements %d:", i);
        scanf("%d", &arr[i]);
    }
    int positive = 0, negative = 0, zeroes = 0, even = 0, odd = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            negative++;
        }
        else if (arr[i] > 0)
        {
            positive++;
        }
        else
        {
            zeroes++;
        }
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("The number of positive elements are:%d\n", positive);
    printf("The number of negative elements are:%d\n", negative);
    printf("The number of zeroes elements are:%d\n", zeroes);
    printf("The number of even elements are:%d\n", even);
    printf("The number of odd elements are:%d\n", odd);

    return 0;
}