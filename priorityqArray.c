#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct {
    int data;
    int priority;
} PriorityQueue;

printf("Enter data: ");
scanf("%d", &data);
PriorityQueue queue[MAX];
int size = 0;

void insert() {
    if (size == MAX) {
        printf("Queue is full (Overflow)!\n");
        return;
    }
    int data, priority;
    printf("Enter data: ");
    scanf("%d", &data);
    printf("Enter priority: ");
    scanf("%d", &priority);

    int i;
    for (i = size - 1; i >= 0; i--) {
        if (queue[i].priority > priority) {
            queue[i + 1] = queue[i];
        } else {
            break;
        }
    }
    queue[i + 1].data = data;
    queue[i + 1].priority = priority;
    size++;
    printf("Inserted successfully!\n");
}

void delete() {
    if (size == 0) {
        printf("Queue is empty (Underflow)!\n");
        return;
    }
    int data = queue[0].data;
    for (int i = 0; i < size - 1; i++) {
        queue[i] = queue[i + 1];
    }
    size--;
    printf("Deleted element with data %d\n", data);
}

void display() {
    if (size == 0) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Priority Queue:\n");
    for (int i = 0; i < size; i++) {
        printf("Data: %d, Priority: %d\n", queue[i].data, queue[i].priority);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
