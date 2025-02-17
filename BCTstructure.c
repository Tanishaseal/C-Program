/* Program 36
Date: 22-04-2024
Name: Tanisha Seal
Topic: Write a program to read RollNo, Name, Address, Age & average-marks of 15 students 
in the BCT class and display the details from function.
*/

#include <stdio.h>
struct BCT
{
  int rollNo;
  char name[50];
  char address[100];
  int age;
  float avgMarks;
};

void readStudentDetails(struct BCT *st) 
{
  printf("Enter roll number: ");
  scanf("%d", &st->rollNo);
  printf("Enter name: ");
  scanf("%s", st->name);
  printf("Enter address: ");
  scanf("%s", st->address);
  printf("Enter age: ");
  scanf("%d", &st->age);
  printf("Enter average marks: ");
  scanf("%f", &st->avgMarks);
}
void displayStudentDetails(struct BCT st) 
{
  printf("\nRoll Number: %d\n", st.rollNo);
  printf("Name: %s\n", st.name);
  printf("Address: %s\n", st.address);
  printf("Age: %d\n", st.age);
  printf("Average Marks: %.2f\n", st.avgMarks);
}
void main() {
  struct BCT st[15];
  for (int i = 0; i < 15; i++) {
    printf("\nStudent %d details:\n", i + 1);
    readStudentDetails(&st[i]);
  }
  printf("\nStudent details:\n");
  for (int i = 0; i < 15; i++) {
    printf("\n--- Student %d ---\n", i + 1);
    displayStudentDetails(st[i]);
  }
}