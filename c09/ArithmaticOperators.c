#include<stdio.h>

void main(){
    int var1 = 10;
    int var2 = 20;
    int answer;

    answer = var1 + var2;
    printf("The Answer of var1 + var2 is :%d\n", answer);

    answer = var2 - var1;
    printf("The Answer of var1 - var2 is :%d\n", answer);

    answer = var1 * var2;
    printf("The Answer of var1 * var2 is :%d\n", answer);

    answer = var2 / var1;
    printf("The Answer of var2 / var1 is :%d\n", answer);

    answer = var2 % var1;
    printf("The Answer of var2 % var1 is :%d\n", answer);

    answer = ++var1; // pre increment
    printf("The Answer of ++var1 is :%d\n", answer);

    answer = var1++; // post increment
    printf("The Answer of var1++ is :%d\n", answer);

    answer = --var2; // pre decrement
    printf("The Answer of --var2 is :%d\n", answer);

    answer = var2--; // post increment
    printf("The Answer of var2-- is :%d\n", answer);

    printf("the value of var2 is : %d", var1 > var2);
    

}