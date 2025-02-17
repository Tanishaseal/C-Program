/* */

#include <stdio.h>

struct student
{
    char name[50];
    int age;
    int roll;
    int submarks[5];
};

void main()
{
    char grade;
    int i, total=0;
    float AVG ;
    struct student st;
    printf(" Enter student's name, age, roll no and marks of 5 subjects ");
    scanf("%s%d%d", st.name , &st.age , &st.roll);
    for(i=0;i<5;i++)
    {
        scanf("%d", &st.submarks[i]);
    }
    for(i=0;i<5;i++)
    {
        total=total+(st.submarks[i]);
    }
    AVG=total/5;
    if(AVG>90)
    grade='O';
    else if(AVG>=80 & AVG<90)
    grade='E'; 
    else if(AVG>=70 & AVG<80)
    grade='A';
    else if(AVG>=60 & AVG<70)
    grade='B';
    else if(AVG>=50 & AVG<60)
    grade='C';
    else if(AVG>=40 & AVG<50)
    grade='D';
    else 
    grade='F';
    printf("Students Details");
    printf("\n-----------------\n");
    printf("Name: %s\t Age: %d\t Roll: %d\t", st.name, st.age, st.roll);
    for(i=0;i<5;i++)
    {
        printf(" Marks %d:%3d",i+1,st.submarks[i]);
    }
    printf(" Average: %.2f\t Grade: %c", AVG, grade);
}
