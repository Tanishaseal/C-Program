/* WAP to check whether the no is palindrome or not.*/
#include <stdio.h>
void main()
{
    int num,copy=0,reverse=0,d=0;
    printf(" enter the number: ");//input from user
    scanf("%d",&num);
    copy=num;
    while(copy>0)//get the digits count
    {
        d=copy%10;
        reverse = (reverse*10)+d;
        copy=copy/10;
    }
    if(reverse==num)
        printf("it is a palindrome no");
    else
        printf("it is not a palindrome no");
}