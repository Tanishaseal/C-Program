/* Program 36
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP in C to find sum of digits of any number using recursion function.
*/
#include <stdio.h>
#include <math.h>

int sumOfDigits(int n)
{
    if (n==0)
       return 0;
    return (n%10+sumOfDigits(n/10));
}

void main()
{
   int num;
    printf(" enter a number: ");
    scanf("%d",&num);
  printf("The sum of digits of %d is %d",num,sumOfDigits(num));
}
