/* */

#include <stdio.h>

struct student
{
    char name[50];
    int age;
    int roll;
    int submarks[5];
};

int calc(int nm[a])
{
    int total;
    return total;
}
void main()
{
    char grade;
    int i,j, total=0;
    float AVG ;
    struct student st[5];
    for(j=0;j<5;j++)
    {
    printf(" Enter %d st student's name, age, roll no and marks of 5 subjects " i+1);
    scanf("%s%d%d", st[j].name , &st[j].age , &st[j].roll);
    }
    for(j=0;j<5;j++)
    {
    for(i=0;i<5;i++)
    {
        scanf("%d", &st[j].submarks[i]);
    }
    }
    
    printf("Students Details");
    printf("\n-----------------\n");

    for(j=0;j<5;j++)
    {
        total=calc(st[j].name);
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
    for(j=0;j<5;j++)
    {
    printf("Name: %s\t Age: %d\t Roll: %d\t", st[j].name, st[j].age, st[j].roll);
    }
    for(i=0;i<5;i++)
    {
        printf(" Marks %d:%3d",i+1,st[i].submarks[i]);
    }
    for(i=0;i<5;i++)
    {
    printf(" Average: %.2f\t Grade: %c", AVG, grade);
    }
    }
}
