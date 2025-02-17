/* Program 36
Date: 22-04-2024
Name: Tanisha Seal
Topic: Write a program in C to reverse an array using pointers.
*/
#include <stdio.h>
#include <math.h>
int reverseArray(int *arr,int size)
{
    int temp;
    int *start=arr;
    int *end=arr+size-1;
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }

}
void main()
{
   int n,i;
    printf(" enter the number of elements in an array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
            printf("enter %d element of array: ",i+1);
            scanf("%d", &arr[i]);
    }
    reverseArray(arr,n);
    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}