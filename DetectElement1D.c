/* Program 27
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP to detect element from specified location in 1-d array
*/
#include <stdio.h>

void main()
{
    int n=0,i,pos=0;
    printf(" enter the number of elements of an array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
            printf("enter %d element of array: ",i+1);
            scanf("%d", &arr[i]);
    }
    printf(" \n enter the position of the element to be found in the array: ");
    scanf("%d",&pos);
    if(pos<=n)
    printf("the element from specified location is %d ", arr[pos-1]);
    else
    printf(" position not detected ");
}