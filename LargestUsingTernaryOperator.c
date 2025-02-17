/*WAP to find the largest of 3 nos using ternary operator.*/
#include <stdio.h>
void main()
{
    int num1, num2 , num3, largest=0;
    printf(" enter the first number: ");//input from user
    scanf("%d",&num1);
    printf(" enter the second number: ");//input from user5
    scanf("%d",&num2);
    printf(" enter the third number: ");//input from user
    scanf("%d",&num3);
    largest=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
    printf("the largest number is %d", largest);
}