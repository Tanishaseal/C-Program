/* WAP to illustrate the use of unary prefix and postfix increment and decrement operators.*/
#include <stdio.h>
void main()
{
    int a,b;
    a=3;
    b=5;
    printf("the original value of a is %d \n", a);
    a=a++;
    printf(" the value of a after postfix increment is %d \n", a);
    printf("the original value of b is %d \n",  b);
    b=++b;
    printf(" the value of b after prefix increment is %d \n", b);
    a=3;
    b=5;
    printf("the original value of a is %d \n", a);
    a=--a;
    printf(" the value of a after prefix decrement is %d \n", a);
    printf("the original value of b is %d \n", b);
    b=b--;
    printf(" the value of b after postfix decrement is %d \n", b);
}