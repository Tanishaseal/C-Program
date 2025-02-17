#include <stdio.h>
#include <conio.h>
int main()
{
    float l,b,s,r;
    float a1, a2, a3;
    printf(" enter the length and breadth for rectangle: ");
    scanf("%f %f", &l, &b);
    printf("enter the side of square: ");
    scanf("%f", &s);
    printf(" enter the radius of circle: ");
    scanf("%f", &r);
    a1= l*b;
    a2= s*s;
    a3= 3.14*r*r;
    printf("the area of square is: %f", a1);
    printf("the area of rectangle is: %f", a2);
    printf("the area of circle is: %f", a3);
    getch();
    return 0;
}