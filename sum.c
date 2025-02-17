

#include <stdio.h>
void main()
{
    int a,b,result;
    printf("enter 2 nos");
    scanf("%d %d",&a,&b);
    result = sum(a,b);
    printf("the sum is %d", result);
}
int sum(int m,int n)
{
    int c;
    c= m+n;
    return c;
}