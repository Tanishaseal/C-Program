/* Program 36
Date: 22-04-2024
Name: Tanisha Seal
Topic: WAP in C to swap two integer using call by value and call by reference method of passing arguments to a function.
*/
#include <stdio.h>

void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap_by_value function: a = %d, b = %d\n", a, b);
}

void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Call by value :\n");
    printf("Enter value of x : ");
    scanf("%d", &x);
    printf("Enter value of y : ");
    scanf("%d", &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap_by_value(x, y);
    printf("After swap_by_value: x = %d, y = %d\n", x, y);

    printf("Call by reference :\n");
    printf("Enter value of x : ");
    scanf("%d", &x);
    printf("Enter value of y : ");
    scanf("%d", &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap_by_reference(&x, &y);
    printf("After swap_by_reference: x = %d, y = %d\n", x, y);

    return 0;
}