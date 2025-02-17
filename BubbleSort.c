/* Program 28
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP to sort elements in 1-d array using bubble sort technique
*/
#include <stdio.h>
void bubbleSort(int arr[], int n) 
{
    int i, j, temp;   
    // Outer loop: up to second-last element
    for (i = 0; i < n - 1; i++) 
    {
        // Inner loop: find smallest in unsorted part
        for (j = 0; j < ( n-i-1 ) ; j++) 
        {
            if(arr[j]>arr[j+1])
            {
            //swap
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int n=0,i;
    printf(" enter the number of elements of an array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
            printf("enter %d element of array: ",i+1);
            scanf("%d", &arr[i]);
    }
    // Display original array
    printf("Original Array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n);  // Sort the array
    // Display sorted array
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}