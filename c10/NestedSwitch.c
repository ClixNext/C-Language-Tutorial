#include<stdio.h>
void main(){
    int a = 100;
    int b = 200;

    switch (a)
    {
    case 100:
        printf("outer switch statments %d \n", a);
        switch (b)
        {
        case 300:
            printf("inner switch statment %d\n", b);
            break;                
        }
        break; 
    }

    printf("the value of a is :%d\n", a);
    printf("the value of b is :%d\n", b);

}