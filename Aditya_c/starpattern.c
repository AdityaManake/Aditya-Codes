#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        for (int j = 0; j <=i-1;  j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}