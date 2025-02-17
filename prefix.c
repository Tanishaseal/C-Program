#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

// Stack implementation using arrays
int stack[MAX];
int top = -1;

// Function to push an element onto the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = value;
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top--];
}

// Function to evaluate a prefix expression
int evaluatePrefix(char expr[]) 
{
    int length = strlen(expr);

    for (int i = length - 1; i >= 0; i--) {
        if (isdigit(expr[i])) 
        {
            push(expr[i] - '0');
        } 
        else 
        {
            int op1 = pop();
            int op2 = pop();
            switch (expr[i]) 
            {
                case '+': push(op1 + op2); 
                break;
                case '-': push(op1 - op2); 
                break;
                case '*': push(op1 * op2); 
                break;
                case '/': push(op1 / op2); 
                break;
            }
        }
    }
    return pop();
}

int main() {
    char expr[] = "1+2*5+30/5";
    printf("Result: %d\n", evaluatePrefix(expr));
    return 0;
}
