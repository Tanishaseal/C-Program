/* 
WAP to display the following pattern 
2.     *
      **
     ***
    ****
   *****       */

#include<stdio.h>
void main()
{
    int row,i,j;
    printf("enter the no of rows to be printed in your pattern :");
    scanf("%d",&row);
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
} //main