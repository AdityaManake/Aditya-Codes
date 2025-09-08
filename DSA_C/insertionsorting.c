#include<stdio.h>
int main()
{ 
    int i,previous,current,n;
    printf("Enter the number of array elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=1;i<n;i++)
    {
        current=arr[i];
        previous=i-1;
        while(previous>=0 && arr[previous]>current)
        {
            arr[previous+1]=arr[previous];
            previous--;
        }
        arr[previous+1]=current;
    }
    printf("Array sorted in ascending order is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}