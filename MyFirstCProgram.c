#include<stdio.h> // header file

int main() // main function
{ // start main block
   // variables
   int num1;
   int num2;
   printf("Enter your first number: ");
   scanf("%d", &num1);
   printf("Enter your seconf number: ");
   scanf("%d", &num2);
   printf("The sum of Num1 and Num2 is : %d\n", num1 + num2); // printf ==> formated print function [addition]
   printf("The sum of Num1 and Num2 is : %d\n", num1 * num2); // printf ==> formated print function [multiplication]
   printf("The sum of Num1 and Num2 is : %d\n", num1 - num2); // printf ==> formated print function [minus]
   printf("The sum of Num1 and Num2 is : %d", num1 / num2); // printf ==> formated print function [division]
   return 0; // return type (int)   
} // end main block