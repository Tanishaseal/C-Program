/* Program 36
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP in C to copy one array to another using pointer.
*/
#include <stdio.h>
#include <math.h>
void main()
{
   int n,i,*s,*d;
    printf(" enter the number of elements in an array: ");
    scanf("%d",&n);
    int source[n];
    for(i=0;i<n;i++)
    {
            printf("enter %d element of array: ",i+1);
            scanf("%d", &source[i]);
    }
    int destination[n];
    s=source;
    d=destination;
    for(i=0;i<n;i++)
    {
            *(d+i)=*(s+i);
    }
    printf("Copied array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", destination[i]);
    }
}