/* Program 36
Date: 22-04-2024
Name: Tanisha Seal
Topic: Write a program to create a structure named company which has name, address, phone and no Of Employee 
as member variables. Read name of company, its address, phone and no Of Employee. Finally display these members’ value.

*/

#include <stdio.h>

struct company
{
    char name[50];
    char address[100];
    int phoneno;
    int noofemp;
};

void main()
{
    struct company st;
    printf(" Enter company's name, address, phone no, no of Employers ");
    scanf("%s%s%d%d", st.name , &st.address , &st.phoneno, &st.noofemp);
    printf("Students Details");
    printf("\n-----------------\n");
    printf("Name: %s\t Address: %s\t phone no: %d\t No of Employers: %d", st.name, st.address, st.phoneno, st.noofemp);
}
