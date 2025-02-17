/* Program 36
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP in C to find the sum of 2 numbers.
*/

#include <stdio.h>
int main()
{
   int num1, num2, *p, *q, sum;
   printf("Enter two integers to add\n");
   scanf("%d%d", &num1, &num2);
   p = &num1;
   q = &num2;
   sum = *p + *q;
   printf("Sum of the numbers = %d\n", sum);
   return 0;
}