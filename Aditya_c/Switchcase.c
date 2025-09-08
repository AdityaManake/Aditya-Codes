#include <stdio.h>
int main()
{

    char a[2][15] = {"Age", "Standard"};
    int age;
    int standard;
    for (int i = 0; i < 2; i++)
    {
        printf("Enter your %s: ", a[i]);
        if (i == 0)
        {
            scanf("%d", &age);
        }
        else
        {
            scanf("%d", &standard);
        }
    }
    switch (age)
    {
    case 14:
        printf("Your age is 14\n");
        switch (standard)
        {
        case 9:
            printf("You study in std IX\n");
        }
        break;
    case 15:
        printf("Your age is 15\n");
        switch (standard)
        {
        case 10:
            printf("You study is std X\n");
        }
        break;
    case 16:
        printf("Your age  is 16\n");
        switch (standard)
        {
        case 11:
            printf("You study is std XI\n");
        }
        break;
    
    default:
    printf("Age & Standard not matched\n");
    }
    return 0;
}