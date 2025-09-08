#include <stdio.h>
int main()
{
    int arr[2][2][3];
    printf("Enter the elements of an array:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                scanf("%d", &arr[i][j][k]);
                printf("%d\t", arr[i][j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}