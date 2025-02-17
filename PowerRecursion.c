/* Program 36
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP in C to find power of any number using recursion.
*/

#include <stdio.h>
#include <math.h>
int power(int a,int b)
{
    if(b==0)
    return 1;
  return a*pow(a,b-1);
}
void main()
{
   int num,pow;
    printf(" enter a number: ");
    scanf("%d",&num);
printf(" enter the power: ");
    scanf("%d",&pow);
  printf("The number %d to the power %d is %d",num,pow,power(num,pow));
}