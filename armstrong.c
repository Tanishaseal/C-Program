/* armstrong no */
// 1470 = 1^4 + 4^4 + 7^4 + 0^4
#include <stdio.h>
void main()
{
    int num,digcount=0,i,copy=0,sum=0,temp=0,d=0;
    printf(" enter the number: ");//input from user
    scanf("%d",&num);
    copy=num;
    while(copy>0)//get the digits count
    {
        digcount++;
        copy=copy/10;
    }
    copy=num;
    while(copy>0)
    {
        d=copy%10;
            int power=d;
        for(i=1;i<digcount;i++)
        {
            power*=d;
        }
        sum+=power;
        copy=copy/10;
    }
    if(sum==num)
        printf("it is an armstrong no");
    else
        printf("it is not an armstrong no");
}