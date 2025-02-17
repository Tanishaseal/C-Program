/*WAP to input name, marks of 5 subjects of a student and display the name of the student, the total marks scored, % scored and the class of result.*/
#include <stdio.h>
void main()
{
    char name[20];
    double Maths,Chem,Phy,Bio,Comp,Eng,total, percentage=0;
    printf(" enter the name of the student ");//input from user
    scanf("%s",&name);
    printf(" enter the marks in Maths: ");//input from user
    scanf("%lf",&Maths);
    printf(" enter the marks in Chemistry: ");//input from user
    scanf("%lf",&Chem);
    printf(" enter the marks in Physics: ");//input from user
    scanf("%lf",&Phy);
    printf(" enter the marks in Biology: ");//input from user
    scanf("%lf",&Bio);
    printf(" enter the marks in Computer: ");//input from user
    scanf("%lf",&Comp);
    printf(" enter the marks in English: ");//input from user
    scanf("%lf",&Eng);
    total=(Maths+Chem+Phy+Bio+Comp+Eng);
    percentage=(total/600)*100;
    if(percentage>=90)
    {
        printf(" Grade A \n");
    }
    else if((percentage>=75)&&(percentage<90))
    {
        printf(" Grade B \n");
    }
    else if((percentage>=40)&&(percentage<60))
    {
        printf(" Grade D \n");
    }
    else
    {
        printf(" Grade F \n");
    }
    printf(" The name is %s \n", name);
    printf(" The total marks is %.2lf \n", total);
    printf(" The percentage scored is %.2lf \n", percentage);
}