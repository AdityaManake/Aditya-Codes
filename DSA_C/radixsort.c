#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of array elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max_element=0;
    for ( i = 0; i < n; i++)
    {
        if(arr[i]>max_element)
        {
            max_element=arr[i];
        }
    }
    for ( i = 1; max_element>0 ; i*10)
    {
        if (arr[i]<max_element)
        {
            max_element = max_element / 10;
        }  
    }
    printf("The number of digits in the largest element is: %d\n", i);
   /* for ( i = 0; i < n; i++)
    {
       if(arr[i] % 10>arr[i+1]%10)
       {
              int temp = arr[i];
              arr[i] = arr[i + 1];
              arr[i + 1] = temp;
              i = -1; 
       }
    }
    fxor ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
/**/
    return 0;
}