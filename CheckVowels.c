/* Program 33
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP to accept a string and count the number of vowels present in the string.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[30], ch;
    int i, length = 0, vowel=0;
 
    printf("Enter a string ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    for (i = 0; i <length ; i++)
    {
        ch=str[i];
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        {
        vowel++;
        }
    }
        printf("%d is the no of vowels present in the string \n", vowel);
    return 0;
}