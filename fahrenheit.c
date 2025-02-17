#include <stdio.h>
#include <conio.h>
int main()
{
    int c,f;
    printf(" enter the value of centigrade:");
    scanf("%d", &c);
    f= (c*(9/5))+32;
    printf(" the value of fahrenheit is : %d" ,f);
    getch();
    return 0;
}