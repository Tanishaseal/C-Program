/* WAP reverse a given integer. */
#include <stdio.h>
void main()
{
    int num,i,d,rev=0;
    printf("enter a number :");
    scanf("%d",&num);
    while(num>0)
    {
        d=num%10;
        rev=(rev*10)+d;
        num=num/10;
    }
    printf(" the reverse number is = %d",rev);
}