/* Program 32
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP to read string and check for palindrome without using string functions.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[25], rev[25] = {'\0'};
    int i, length = 0, flag = 0;
 
    printf("Enter a string \n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    for (i = length - 1; i >= 0 ; i--)
    {
        rev[length - i - 1] = str[i];
    }
   /*  Check if the string is a Palindrome */
    flag = 1;
    for (i = 0; i < length ; i++)
    {
        if (rev[i] != str[i])
            flag = 0;
    }
    if (flag == 1)
        printf ("%s is a palindrome \n", str);
    else
        printf("%s is not a palindrome \n", str);
    return 0;
}