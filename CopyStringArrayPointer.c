/* Program 36
Date: 22-04-2024
Name: Tanisha Seal
Topic: Write a program in C to copy one string to another using pointer.
*/
#include <stdio.h>
#include <math.h>
void copyString(char *source, char *target)
{
    while (*source != '\0') {
    *target = *source;
    source++;
    target++;
  }

  *target = '\0';
}
void main()
{
    char source[50];
    printf(" enter a string: ");
    gets(source);
    char destination[50];
    copyString(source,destination);
    printf("Original string: %s\n", source);
    printf("Copied string: %s\n", destination);
}