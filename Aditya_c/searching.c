#include<stdio.h>
int main()
{
    int n,searchelement,i,found=0;
    printf("Enter the number of array elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for ( i = 0; i < n; i++)
    {
        printf("Enter element %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&searchelement);
    for ( i = 0; i < n; i++)
    {
        if(searchelement==arr[i])
    
        {
            found=1;
        printf("Searchelement %d found at %d\n",searchelement,i);
        break;
        }
    
    }
     if(found==0)
     {
        printf("Element %d not found in the array!",searchelement);
     }
    
    return 0;
}

