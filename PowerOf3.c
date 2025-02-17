/*Write a C program to check if a given integer is a power of three.
Example:
Input: 9
Output: true
Input: 81
Output: true
Input: 45
Output: false
*/

#include <stdio.h>
#include <math.h>
void main()
{
    int num,i,flag=0;;
    printf("enter the number :");
    scanf("%d",&num);
    for(i=3;i<=num;i*=3)
    {
    if(i==num)
    flag ++;
}
if (flag>=1)
printf(" TRUE ");
else
printf(" FALSE ");
}