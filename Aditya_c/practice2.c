#include<stdio.h>
int main()
{
    int i,n,k,l,h,m;
    printf("Enter number of array elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search:");
    scanf("%d",&k);
         l=0;
         h=n-1;
        while(l<=h)
        {
            m=(l+h)/2;
            if(arr[m]==k)
            {
                printf("Element found at index %d",m);
                return 0;
            }
            else if(arr[m]<k)
            {
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
    if(l>h)
    {
        printf("Element not found!");
    }

    return 0;
}