/* WAP to check whether the no is positive, negative or 0 using switch case.*/
#include <stdio.h>
void main()
{
    int week=0;
    printf("enter the user's week choice(1-7) :");
    scanf("%d",&week);
    switch(week)
    {
        case 1: 
            printf("Monday");
            break;
        case 2: 
            printf("Tuesday");
            break;
        case 3: 
            printf("Wednesday");
            break;
        case 4: 
            printf("Thursday");
            break;
        case 5: 
            printf("Friday");
            break;
        case 6: 
            printf("Saturday");
            break;
        case 7: 
            printf("Sunday");
            break;
        default: 
            printf("Invalid input! Please enter week number between 1-7.");
    } //switch
    } //main