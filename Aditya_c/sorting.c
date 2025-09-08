#include <stdio.h>
int main()
{
    int n, temp, i, j;

    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    int arr2[n];
    printf("Enter the array elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
        arr2[i] = arr[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n===================The array is sorted in DESC order ==================-");
    for ( i = 0; i < n; i++)
    {
    printf("\n%d",arr[i]);
    }

for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr2[j] > arr2[j + 1])
            {
                temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }
    printf("\n========= The array is sorted in ASC order ========-");
    for ( i = 0; i < n; i++)
    {
    printf("\n%d",arr2[i]);
    }

    return 0;
}