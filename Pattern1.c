/* WAP to display the following pattern 
1. *
   **
   ***
   ****
   *****

2.     *
      **
     ***
    ****
   *****
*/
//Declaring variables
#include<stdio.h>
void main()
{
    int row;
    //Taking user input
    printf(" enter the no of rows to be printed in your pattern : ");
    scanf("%d",&row);

    int i,j;
    for (i = 0; i <= row; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\n");
    
    for(i=1; i<=row; i++)
        {
            for(j=i; j<row; j++)
            {
            printf(" ");// Print spaces in decreasing order of row 
            } 
            for(j=1; j<=i; j++)
            {
            printf("*");// Print star in increasing order or row
            }
            printf("\n");  //Move to next line
        }

    printf("\n\n");

    int space=0;
    for(i = 1; i <= row; ++i) 
    {
        for(space = 1; space <= row - i; ++space) {
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; ++j) {
            printf("*");
        }
        printf("\n");
    }
}
