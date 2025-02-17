/* WAP to add the elements of 2 matrices of any order */
#include <stdio.h>
int main()
{
    int row,col,i,j;
    printf(" enter the row of an array: ");
    scanf("%d",&row);
    printf(" enter the column of an array: ");
    scanf("%d",&col);
    int arr1[row][col];
    int arr2[row][col];
    int sum[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter %d,%d element of 1st array: ",i+1,j+1);
            scanf("%d", &arr1[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter %d,%d element of 2nd array: ",i+1,j+1);
            scanf("%d", &arr2[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
            printf(" %d ",sum[i][j]);
        }
            printf("\n2 ");
    }
}