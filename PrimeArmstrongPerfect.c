/* Program 35
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP in C to check whether a number is prime, Armstrong or perfect number using functions passing with arguments.
*/
#include <stdio.h>
#include <math.h>
int isPrime(int num)
{
    int i;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}
int isArmstrong(int num)
{
    int digcount=0,i,copy=0,sum=0,temp=0,d=0,flag=0;
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
    return(sum==num);
}
int isPerfect(int num)
{
    int i,sum=0,flag=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        sum+=i;
    }
    return(sum==num);
}
int main()
{
    int num;
    printf(" enter a number: ");
    scanf("%d",&num);
    if(isPrime(num))
    {
    printf("\n %d is a prime number ", num);
    }
    else
    {
        printf("\n %d  not a prime number ", num);
    }
    if(isArmstrong(num))
    {
    printf("\n %d is an armstrong number ", num);
    }
    else
    {
        printf("\n %d  not an armstrong number ", num);
    }
    if(isPerfect(num))
    {
    printf("\n %d is a perfect number ", num);
    }
    else
    {
        printf("\n %d  not a perfect number ", num);
    }
    return 0;
}