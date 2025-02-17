/* factorial */
#include <stdio.h>
#include <conio.h>
int fact(int num)
{
    int c=1;
    while(num>0)
    {
        c=c*num;
        num--;
    }
        
    return c;
}
void main()
{
    int n,f;
    printf(" enter the value:");
    scanf("%d", &n);
    f=fact(n);
    if(n<0)//less than 0, output should be invalid
    {
        printf("INVALID");
    }
    else if( n>9)//more than 9, output should be (no more than 9)
    {
        printf("NO IS MORE THAN 9");
    }
    else
    {
        printf(" the value of factorial is : %d",f);
    }
}

