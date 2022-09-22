#include<stdio.h>

void main()
{
    int consumedUnit;
    int rate = 5;
    printf("Please enter consumed units : ");
    scanf("%d", &consumedUnit);
    printf("Please enter Electricity cost per unit : ");
    scanf("%d", &rate);
    printf("Electricity cost : %d", consumedUnit * rate);

}
