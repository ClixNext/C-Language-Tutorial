#include<stdio.h>

void main(){
    int var1 = 20;
    float f = 20.2;
    long l = 234565646;
    short s = 127;
    char c = 'a';
    int* ptr;

    printf("the size of var1 is : %d\n", sizeof(var1));
    printf("the size of f is : %d\n", sizeof(f));
    printf("the size of l is : %d\n", sizeof(l));
    printf("the size of s is : %d\n", sizeof(s));
    printf("the size of c is : %d\n", sizeof(c));

    printf("the address of l is : %d\n", &l);

    ptr = &c;
    printf("the address of *ptr is : %d\n", *ptr);

    var1 = 10;
    int var2 = 20;
    int answer;

    answer = var2 < var1 ? var2 : var1;

    printf("The answer is : %d", answer);




    
    







}