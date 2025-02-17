#include <stdio.h>

#define MAX 10

void push(int stack[], int *top, int value) {
    if (*top < MAX - 1) {
        stack[++(*top)] = value;
    }
}

int pop(int stack[], int *top) {
    if (*top >= 0) {
        return stack[(*top)--];
    }
    return -1;  // Return -1 if stack is empty
}

int reverseNumber(int num) {
    int stack[MAX];
    int top = -1;
    int reversed_num = 0;

    while (num != 0) {
        push(stack, &top, num % 10);
        num /= 10;
    }

    int place = 1;
    while (top >= 0) {
        reversed_num += pop(stack, &top) * place;
        place *= 10;
    }

    return reversed_num;
}

int main() {
    int num;
    printf("enter a number to reverse: ");
    scanf("%d", &num);
    printf("Original Number: %d\n", num);

    int reversed_num = reverseNumber(num);
    printf("Reversed Number: %d\n", reversed_num);

    return 0;
}
