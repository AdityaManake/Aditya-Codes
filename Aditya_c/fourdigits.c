#include <stdio.h>

int main() {
    int num,units,tens,hundereds,thousands;
    printf("Enter any four digit number - ");
    scanf("%d",&num);
    thousands=num/1000;
    hundereds=((num/100)%10);
    tens=((num%100)/10);
    units=num%10;
    printf("%d Thousand ",thousands);
    printf("%d Hundered ",hundereds);
    printf("%d Tens ",tens);
    printf("& %d Units ",units);
    
    return 0;
}