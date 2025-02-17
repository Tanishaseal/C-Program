/* Program
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP to find largest and smallest elements in 1-d array*/
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
    int max=arr[0],min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        else
        if(arr[i]<min)
        min=arr[i];
    }
        printf(" The largest number is %d \n", max);
        printf(" The smallest number is %d", min);
}