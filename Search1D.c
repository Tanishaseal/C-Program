/* Program
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP to search elements in 1-d array*/
#include <stdio.h>
void main()
{
    int n,i,number,flag=0;
    printf(" enter the number of elements of an array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
            printf("enter %d element of array: ",i+1);
            scanf("%d", &arr[i]);
    }
    printf(" enter the number to be searched: ");
    scanf("%d",&number);
    for(i=0;i<n;i++)
    {
        if(number==arr[i])
        {
        flag++;
        break;
        }
    }
        if(flag>0)
        printf(" The number is found ");
        else
        printf(" The number is not found ");
}