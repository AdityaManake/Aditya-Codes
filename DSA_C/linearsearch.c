#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter the number of array elements:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d", &k);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            printf("Element %d found at index %d\n", k, i);
            return 0;
        }
    }
    printf("Element %d not found in the array\n", k);
    return 0;
}