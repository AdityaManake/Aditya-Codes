#include <stdio.h>
int main()
{
    int option;
    float sum, difference, product, ratio;
    char l[2][10] = {"first", "second"};
    float a[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter %s number - ", l[i]);
        scanf("%f", &a[i]);
    }
    printf("Enter your option- Add(1) / Substract(2) / multiply(3) / divide(4) - ");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
    {
        sum = a[0]+a[1] ;
        printf("Sum = %.2f\n",sum);
        break;
    }
    case 2:
        difference = a[0]-a[1];
        printf("Difference = %.2f\n",difference);
        break;
    case 3:
        product = a[0]*a[1];
        printf("Product = %.2f\n",product);
        break;
    case 4:
        ratio = a[0]/a[1];
        printf("Ratio = %.2f\n",ratio);
        break;
    default:
        printf("Enter a valid number\n");
        break;
    }
    return 0;
}