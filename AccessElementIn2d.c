/* Program 29
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP to access an element from specified location in 2-d array
*/
#include <stdio.h>
int main()
{
    int row,col,i,j,indexrow=0,indexcol=0;
    printf(" enter the row of an array: ");
    scanf("%d",&row);
    printf(" enter the column of an array: ");
    scanf("%d",&col);
    int arr[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter %d,%d element: ",i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("enter the index number of row: ");
    scanf("%d",&indexrow);
    printf("enter the index number of column: ");
    scanf("%d",&indexcol);
    printf(" the required element is %d : ",arr[indexrow-1][indexcol-1]);
}