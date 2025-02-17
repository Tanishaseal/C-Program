/* Program 26
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP to reverse elements in 1-d array*/
#include <stdio.h>
void PrintArray(int array[], int size)
{
    int i;
    printf("Array[%d] = {", size);
    for (i = 0; i < size; i++)
    {
        if (i == size-1)
        {
            printf("%d", array[i]);
        }
        else
        {
            printf("%d, ", array[i]);
        }
    }
    printf("}");
}

void main()
{
    int n=0,i;
    printf(" enter the number of elements of an array: ");
    scanf("%d",&n);
    int arr[n],rev[n];
    for(i=0;i<n;i++)
    {
            printf("enter %d element of array: ",i+1);
            scanf("%d", &arr[i]);
    }
    printf("the original elements of array: ");
    PrintArray(arr,n);
    for(i=0;i<n/2;i++)
    {
        arr[i]=arr[i]^arr[n-1-i];
        arr[n-1-i]=arr[i]^arr[n-1-i];
        arr[i]=arr[i]^arr[n-1-i];
    }
    printf("\n the reverse elements of array: ");
    PrintArray(arr,n);
}