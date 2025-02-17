/* Program 40
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP in C to Write a C program to check_Digit(int,int) as a function which takes two inputs. 
Check whether the first input number is in unit’s, ten’s, hundred’s, thousand’s place in the second number. 
e.g. check_Digit(2, 3245). It returns 2 is in hundred’s place in the 2nd number.

*/
#include <stdio.h>
int check_Digit(int a,int b)
{
    int d,c=0;
    while(b>0)
    {
        d=b%10;
        c++;
        if(d==a)
        {
            break;
        }
        else
        {
        b=b/10;
        }
    }
    return c;
}
void main()
{
    int num1,num2,check=0;
    printf(" enter the first number : ");
    scanf("%d", &num1);
    printf(" enter the second number : ");
    scanf("%d", &num2);
    check=check_Digit(num1,num2);
    if(check==1)
    {
        printf("%d is in the one's place in the 2nd number ", num1);
    }
    else if(check==2)
    {
        printf("%d is in the ten's place in the 2nd number ", num1);
    }
    else if(check==3)
    {
        printf("%d is in the hundred's place in the 2nd number ", num1);
    }
    else
    {
        printf("%d is in the thousand's place in the 2nd number ", num1);
    }
}