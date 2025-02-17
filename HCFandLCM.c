/*WAP to find GCD or HCF and LCM of 2 nos.*/
#include <stdio.h>
void main()
{
    int a,b,hcf=0,lcm=0,i;
    printf(" enter number 1 ");
    scanf("%d", &a);
    printf(" enter number 2 ");
    scanf("%d", &b);
    for (i=1;i<=a;i++)
    {
        if((a%i==0) && (b%i==0))
        hcf=i;
    }
    lcm=(a*b)/hcf;
    printf(" the lcm: %d" ,lcm);
    printf(" the lcm: %d" ,hcf);
}