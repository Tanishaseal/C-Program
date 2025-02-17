/* */

#include <stdio.h>

struct student
{
    char name[50];
    int age;
    int roll;
};

void main()
{
    struct student st;
    printf(" Enter student's name, age, roll no ");
    scanf("%s%d%d", st.name , &st.age , &st.roll);
    printf("Students Details");
    printf("\n-----------------\n");
    printf("Name: %s\t Age: %d\t Roll: %d", st.name, st.age, st.roll);
}
