/* Program
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP to reverse a digit, and then find the sum of odd numbers in that whole digit*/
#include <stdio.h>
void main()
{
    int sum=0,d,rev=0,num,copy=0;
    printf(" enter a number from the user: \n");
    scanf("%d", &num);
    copy=num;
    while(num>0)
    {
        d=num%10;
        rev=(rev*10)+d;
        if(d%2!=0)
        sum+=d;
        num=num/10;
    }
    printf("the reverse is: %d \n", rev);
    printf("the sum of odd digits in the number is: %d ", sum);
}