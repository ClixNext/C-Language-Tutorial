#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<float.h>

void main(){
    int var1 = INT_MAX;
    printf("the MAX value of int is : %d\n", var1);
    var1 = INT_MAX + 1;
    printf("the MAX value of int is : %d\n", var1);
    var1 = var1 - 1;
    printf("the MAX value of int is : %d", var1);
}