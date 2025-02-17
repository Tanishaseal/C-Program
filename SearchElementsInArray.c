/* search whether a given element is present in the array or not*/
#include <stdio.h>
void main()
{
    int size,i,target,j;
    printf(" enter the size of array: ");//input from user
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        printf(" enter %d elements of arr \n", i);
        scanf("%d", &arr[i]);
    }
    printf(" enter the element to be searched \n");
    scanf("%d",&target);
    for(j=0;j<size;j++)
    {
        if(arr[j]==target)
        {
        printf(" the given item has been found ");
        break;
        }
    else
    {
        printf(" the given item has not been found ");
        break;
    }
    }
}