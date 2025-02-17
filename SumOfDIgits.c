/* WAp to print the sum  of digits of a no using for loop.*/
#include <stdio.h>
void main()
{
    int num,i,sum=0,digits=0,tempNum=0,d=0;
    printf("enter a number :");
    scanf("%d",&num);
    tempNum=num;
    while(tempNum>0)
    {
        digits++;
        tempNum=tempNum/10;
    }//finding no of digits
    
    for(i=1;i<=digits;i++)
    {
        d=num%10;
        sum=sum+d;
        num=num/10;
    }
    printf("the sum of digits of the number is = %d", sum);
}