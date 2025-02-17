/* WAP to swap values of 2 variables with and without using 3rd variable.*/
#include <stdio.h>
void main()
{
    int a,b,temp=0;
    printf("enter the first number :");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);
    temp=a;
    a=b;
    a=temp;
    printf("the value of a after swapping using 3rd variable is : %d \n", a);
    printf("the value of b after swapping using 3rd variable is : %d \n", b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of a after swapping again without using 3rd variable is : %d \n", a);
    printf("the value of b after swapping again without using 3rd variable is : %d \n", b);
}