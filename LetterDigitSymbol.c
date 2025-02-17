/*WAP to determine whether the input character is capital or small letter, digits or special symbols.*/
#include <stdio.h>
void main()
{
    char ch;
    printf(" enter the character from the user ");//input from user
    scanf("%c",&ch);
    if(ch >= 'a' && ch<='z')
    printf("the character is a small letter ");
else if(ch >= 'A' && ch<='Z')
    printf("the character is a capital letter ");
else if(ch >= '0' && ch<='9')
    printf("the character is a digit ");
else
    printf("the character is a special symbol ");
}