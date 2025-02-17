#include <stdio.h>
#include<conio.h>

int main() {
    float p,r,t;
    float si;
    printf("enter the principal, rate and time : ");
    scanf("%f %f %f" , &p , &r , &t);
    si=(p*t*r)/100;
    printf("the simple interest is: %f ",si);
    getch();
  return 0;
}