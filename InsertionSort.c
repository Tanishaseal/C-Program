/* WAP to sort elements of an array using insertion sort*/
#include <stdio.h>
void insertionSort(int arr[], int n) 
{
    int i, j, temp;   
    // Outer loop: up to second-last element
    for (i = 0; i < n ; i++) 
    {
        temp=arr[i];
        j=i-1;
         while (j >= 0 && arr[j] > temp) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}
int main()
{
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

    insertionSort(arr, n);  // Sort the array
    // Display sorted array
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}