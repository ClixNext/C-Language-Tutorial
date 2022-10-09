#include<stdio.h>

void main(){
    char grade = 'B';

    switch (grade)
    {
    case 'A':
        printf("Excellent\n");
        break;    
    case 'B':
        printf("Great\n");
        break;
    case 'C':
        printf("Well done\n");        
        break;
    case 'D':
        printf("Keep trying\n");
        break;
    default:
        printf("none of value is mached\n");
        break;
    }

    printf("the value of grade is: %c\n", grade);

}