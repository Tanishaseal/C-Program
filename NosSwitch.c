/* WAp to check whether the no is positive, negative or 0 using switch case.*/
#include <stdio.h>
void main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    switch(num>0)
    {
        case 1: 
            printf("It is Positive ");
            break;
        case 0: 
        switch(num<0)
        {
            case 1:
            printf(" It is Negative ");
            break;
            case 0:
            printf(" It is 0 ");
            break;
        }
        break;
    } //switch
    } //main