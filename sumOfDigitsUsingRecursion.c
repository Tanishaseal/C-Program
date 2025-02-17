/* Find the sum of digits of any number using recursion*/

#include <stdio.h>
#include <conio.h>

int sumOfDigits(int n)
{
    if(n==0)
    return 0; 
    else
    return (n%10+sumOfDigits(n/10));
}

void main()
{
    int num, exp, newnum;
    printf(" enter the number: ");
    scanf("%d", &num);
    newnum=sumOfDigits(num);
    printf(" the value of sum of digits is %d", newnum);
}