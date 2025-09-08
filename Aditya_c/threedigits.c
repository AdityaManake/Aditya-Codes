

#include <stdio.h>

int main() {
    int num=0,hundreds,tens,units;
    printf("Enter any 3 digits number= ");
    scanf("%d",&num);
    hundreds = num/100;
    int temp = num%100;
    tens=temp/10;
    units=temp%10;
    printf("%d Hundreds %d Tens %d Units",hundreds,tens,units);
    return 0;
}