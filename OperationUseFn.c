/* Program 34
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP in C to add, subtract, multiply and divide two integers using user defined type function with return type.
*/
#include <stdio.h>
int add(int num1,int num2)
{
    int a;
    a=num1+num2;
    return a;
}
int sub(int num1,int num2)
{
    int a;
    a= num1-num2;
    return a;
}
int multiply(int num1,int num2)
{
    int a;
    a= num1*num2;
    return a;
}
int divide(int num1,int num2)
{
    int a;
    a= num1/num2;
    return a;
}
int main()
{
    int num1,num2;
    printf(" enter the first large number: ");
    scanf("%d",&num1);
    printf(" enter the second small number: ");
    scanf("%d",&num2);
    printf("\n the addition of two numbers is : %d \n", add(num1,num2));
    printf("\n the subtraction of two numbers is : %d \n", sub(num1,num2));
    printf("\n the multiplication of two numbers is : %d \n", multiply(num1,num2));
    printf("\n the division of two numbers is : %d \n", divide(num1,num2));
    return 0;
}