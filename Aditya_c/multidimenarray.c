#include <stdio.h>
void takingInputs(int arr[],int n);
void counting(int arr[],int n);
int main()
{
int n;
printf("Enter the number of array elements:");
    scanf("%d", &n);
    int arr[n];
    takingInputs(arr, n);
    counting(arr, n);
    return 0;
}
void takingInputs(int arr[],int n)
{
    int i;
   
    printf("Enter the number of array elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d:", i);
        scanf("%d", &arr[i]);
    }
}

void counting(int arr[],int n)
{
    int positive = 0, negative = 0, even = 0, odd = 0, zeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zeros++;
        }
        if (arr[i] != 0)
        {
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    printf("Positive numbers: %d\n",positive);
    printf("negative numbers: %d\n",negative);
    printf("zeroes: %d\n",zeros);
    printf("odd numbers: %d\n",odd);
    printf("even numbers: %d\n",even);
    
}