/* Program 36
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP in C to find the sum of all the elements of an array using pointers.
*/

#include <stdio.h>
#include <math.h>
void main()
{
   int n,i,*p,s=0;
    printf(" enter the number of elements in an array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
            printf("enter %d element of array: ",i+1);
            scanf("%d", &arr[i]);
    }
    p=&arr[0];
    for(i=0;i<n;i++)
    {
            s=s+(*p);
            p++;
    }
  printf("The sum of elements is= %d",s);
}