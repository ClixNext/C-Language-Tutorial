#include <stdio.h> // header file

void main() // main function
{
    int firstNumber;
    int secondNumber; //statment terminator

    float f = 10.2;

    printf("The float is : %f\n\n", f);

    printf("Please enter first Number : ");
    scanf("%d", &firstNumber);

    printf("Please enter second Number : ");
    scanf("%d", &secondNumber);

    printf("The sum of firstNumber and secondNumber is : %d\n", firstNumber + secondNumber);
    printf("The diffirence of firstNumber and secondNumber is : %d\n", firstNumber - secondNumber);
    printf("The muliplication of firstNumber and secondNumber is : %d\n", firstNumber * secondNumber);
    printf("The division of firstNumber and secondNumber is : %d", firstNumber / secondNumber);

}
