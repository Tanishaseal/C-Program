/* WAP to check whether the entire year is leap year or not.*/
#include <stdio.h>
void main()
{
    int year;
    printf("enter the year :");
    scanf("%d",&year);
if((year%4)==0)
    printf("the year is a leap year ");
else
    printf("the year is not a leap year ");
}