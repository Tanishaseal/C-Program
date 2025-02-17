/* Wap to calculate simple interest and compound interest */
#include <stdio.h>
#include <math.h>
void main()
{
    double p,t,r,amt;
    double si=0,ci=0;
    printf(" enter the value of principal:");
    scanf("%lf", &p);
    printf(" enter the value of rate:");
    scanf("%lf", &r);
    printf(" enter the value of time:");
    scanf("%lf", &t);
    si=(p*t*r)/100;
    amt = p * ((pow((1 + r/ 100), t))); 
    ci=amt - p;
    printf(" the simple interest is : %lf \n" ,si);
    printf(" the compound interest is : %lf \n" ,ci);
}