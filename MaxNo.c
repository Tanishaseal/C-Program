/*WAP to input 2 nos and display the max no*/
#include <stdio.h>
void main()
{
    int a,b;
    printf("enter the first number :");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);
if(a>b)
    printf("the maximum number is %d", a);
else
    printf("the maximum number is %d", b);
}