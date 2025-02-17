/* Find the power of any number using recursion*/

#include <stdio.h>
#include <conio.h>

int power(int n,int d)
{
    if(d==0)
    return 1; 
    else
    return (n*power(n,d-1));
}

void main()
{
    int num, exp, pow;
    printf(" enter the number: ");
    scanf("%d", &num);
    printf(" enter the exponent: ");
    scanf("%d", &exp);
    pow=power(num,exp);

    printf(" the value of power is %d", pow);
}