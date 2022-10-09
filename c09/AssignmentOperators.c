#include<stdio.h>

void main(){
    int var1 = 21;
    int var2 = 2;
    int var3;

    var3 = var1 + var2;
    printf("the answer of var1 + var2 is :%d\n", var3);

    var3 += var1;
    printf("the answer of var3 += var1 is :%d\n", var3);

    var3 -= var1;
    printf("the answer of var3 -= var1 is :%d\n", var3);

    var3 *= var1;
    printf("the answer of var3 *= var1 is :%d\n", var3);

    var3 /= var1;
    printf("the answer of var3 /= var1 is :%d\n", var3);

    var3 %= var1;
    printf("the answer of var3 %= var1 is :%d\n", var3);

    var3 <<= 2;
    printf("the answer of var3 <<= 2 is :%d\n", var3);

    var3 >>= 2;
    printf("the answer of var3 >>= 2 is :%d\n", var3);

    var3 &= 2;
    printf("the answer of var3 &= 2 is :%d\n", var3);

    var3 ^= 2;
    printf("the answer of var3 ^= 2 is :%d\n", var3);

    var3 |= 2;
    printf("the answer of var3 |= 2 is :%d\n", var3);

    

}