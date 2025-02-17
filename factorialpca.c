/* Program
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP of a factorial of a number taken from user input.
if user give -1 then show the message as wrong input, kindly enter valid input
if the user enters 0 or 1, then output will be 1.
if the user enters odd number, then put the result of a factorial of that number in odd_factorial variable else in even_factorial variable.*/
#include <stdio.h>
void main()
{
    int num,i,fact=1;
    printf("enter a number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    if(num<0)
    {
        printf(" wrong input, kindly enter valid input ");
    }
    else if(num%2==0)
    {
        int even_factorial= fact;
        printf("the even factorial of the number is = %d", even_factorial);
    }
    else
    {
        int odd_factorial=fact;
    printf("the odd factorial of the number is = %d", odd_factorial);
    }
}