/*fibonacci*/

#include <stdio.h>
void main()
{
    int n,c;
    printf("enter a number ");
    scanf("%d",&n);
    printf("0,1,");
    for(int i=0;i<(n-2);i++)
    {
        c=i+(i+1);
        //c=a+b;
    printf("%d,", c);
    //a=b;
    //b=c;
    }
}
