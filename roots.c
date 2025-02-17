/*WAP to find out the roots of quadratic equation.*/
#include <stdio.h>
void main()
{
    float a, b, c, discriminant=0, root1=0,  root2=0;
    printf(" enter the coefficients of a, b and c in the form of ax2+bx+c: ");//input from user
    scanf("%f %f %f", &a, &b, &c);
    discriminant=(b*b)-(4*a*c);
    root1=(-b+discriminant)/(2*a);
    root2=(-b-discriminant)/(2*a);
        printf("the roots are: %f, %f", root1, root2);
}