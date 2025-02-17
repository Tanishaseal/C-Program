/* Program 39
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP in C to generate Fibonacci series using recursion.
*/
#include <stdio.h>
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    if(n==1)
    {
        return 1;
    }
    else
    {
    return ((fibonacci(n-1))+(fibonacci(n-2)));
    }
}
void main()
{
    int num;
    printf(" enter the number of series : ");
    scanf("%d", &num);
    printf(" the value of sum of digits is : ");
    for(int i=0;i<num;i++)
    {
    printf("%d ",fibonacci(i));
    }
}