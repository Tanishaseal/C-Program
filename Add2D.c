/* Program
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP to add 2 matrices of any order
*/
#include <stdio.h>
void PrintArray(int row, int col,int array[row][col])
{
    int i,j;
    printf("Array[%d][%d] = \n", row, col);
    for (i = 0; i < row; i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ", array[i][j]);
        }
    printf("\n");
    }
}
void main()
{
    int row,col,i,j;
    printf(" enter the row of an array: ");
    scanf("%d",&row);
    printf(" enter the column of an array: ");
    scanf("%d",&col);
    int arr1[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter %d,%d elements of 1st array : ",i+1,j+1);
            scanf("%d", &arr1[i][j]);
        }
    }
    int arr2[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter %d,%d elements of 2nd array : ",i+1,j+1);
            scanf("%d", &arr2[i][j]);
        }
    }
    int add[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            add[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("\n the addition matrix is : \n");
    PrintArray(row, col, add);
}