/* WAP if a 4 digit no is input through the keyboard, wap to obtain the sum of the first and last digit of this no.*/
#include <stdio.h>
void main()
{
    int num,first=0,last=0;
    printf("enter a 4 digit number :");
    scanf("%d",&num);
        last=num%10;
        first=num/1000;
    printf(" the sum of first digit and last digit is %d", last+first);
}