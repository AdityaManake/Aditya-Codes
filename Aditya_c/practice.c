#include<stdio.h>
int main()
{
  int n,i,k=0;
  printf("Enter the number of array elements:");
  scanf("%d",&n);
  int arr[n];
  int arr2[n];
  int j=n-1;
  printf("Enter the array elements:\n");
  for ( i = 0; i < n; i++)
  {
    printf("Enter element %d:",i);
    scanf("%d",&arr[i]);
  }
  for ( i = 0; i < n; i++)
  {
    if(arr[i]<0)
    {
      arr2[k]=arr[i];
      k++;
    }
    else
    {
      arr2[j]=arr[i];
      j--;
    }
  }
  for ( i = 0; i < n; i++)
  {
   printf("%d\n",arr2[i]);
  }
  

  return 0;
}

