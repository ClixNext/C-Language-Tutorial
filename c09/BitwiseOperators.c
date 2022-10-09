#include<stdio.h>
void main(){
    unsigned int var1 = 60;
    unsigned int var2 = 13;
    int answer;

    answer = var1 & var2;
    printf("The answer of var1 & var2 is : %d\n", answer); // answer is 12

    answer = var1 | var2;
    printf("The answer of var1 | var2 is : %d\n", answer); // answer is 61

    answer = var1 ^ var2;
    printf("The answer of var1 ^ var2 is : %d\n", answer); // answer is 49

    answer = ~var1;
    printf("The answer of ~var1 is : %d\n", answer); // answer is -61

    answer = var1 << 2;
    printf("The answer of var1 << 2 is : %d\n", answer); // answer is 240

    answer = var1 >> 2;
    printf("The answer of var1 >> 2 is : %d\n", answer); // answer is 15

}