/* Program
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP to multiply 2 matrices of 3x3 order
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
    int i,j;
    int arr1[3][3];
    int m[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter %d,%d elements of 1st array : ",i+1,j+1);
            scanf("%d", &arr1[i][j]);
        }
    }
    int arr2[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter %d,%d elements of 2nd array : ",i+1,j+1);
            scanf("%d", &arr2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m[i][j]=0;
            for(int k=0;k<3;k++)
            {
                m[i][j]=m[i][j]+(arr1[i][k]*arr2[k][j]);
            }
        }
    }
    printf("\n the new multiplied matrix is : \n");
    PrintArray(3, 3, m);
}