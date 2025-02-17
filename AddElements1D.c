/* Program
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP to add elements in an array*/
#include <stdio.h>
void main()
{
    int n,i;
    printf(" enter the number of elements of an array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
            printf("enter %d element of array: ",i+1);
            scanf("%d", &arr[i]);
    }
    printf(" the elements in the array are: ");
    for(i=0;i<n;i++)
    {
            printf("%d ",arr[i]);
    }
}