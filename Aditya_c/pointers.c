#include <stdio.h>
int main()
{
    // int a= 3;
    // int *ptr=&a;
    // ptr++;
    // printf("%d\n",ptr);
    // printf("%d\n",ptr - 1);
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int *arrayptr = arr;
    printf("The value of the third element of an array is %d\n", arr[2]);
    printf("The address of the first element of an array is %d\n", arr);
    printf("The address of the first element of an array is %d\n", &arr[0]);
    printf("The address of the second element of an array is %d\n", &arr[1]);
    printf("The address of the second element of an array is %d\n", arr + 1);
    arrayptr++;
    printf("The value at address of the first element of an array is %d\n", *(arr));
    printf("The value at address of the first element of an array is %d\n", arr[0]);
    printf("The value at address of the first element of an array is %d\n", *(&arr[0]));
    printf("The value at address of the second element of an array is %d\n", *(&arr[1]));
    printf("The value at address of the second element of an array is %d\n", *(arr + 1));
    return 0;
}