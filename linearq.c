#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 4

// Global variables
int queue[MAX_SIZE];
int front = -1;
int rear = -1;

// Function to check if the queue is empty
bool isEmpty() {
    return (front == -1);
}

// Function to check if the queue is full
bool isFull() {
    return (rear == MAX_SIZE - 1);
}

// Function to enqueue (insert) an element
void enqueue(int item) {
    if (isFull()) {
        printf("Queue is full. Cannot insert.\n");
        return;
    }
    if (isEmpty()) {
        front = 0; // Initialize front when inserting the first element
    }
    rear++;
    queue[rear] = item;
}

// Function to dequeue (remove) an element
int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1; // Return a sentinel value (e.g., -1) to indicate failure
    }
    int item = queue[front];
    front++;
    if (front > rear) {
        // Reset front and rear when the queue becomes empty
        front = rear = -1;
    }
    return item;
}

// Function to peek (view) the front element
int peek() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return -1;
    }
    return queue[front];
}

// Function to display the entire queue
void displayQueue() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, item;

    while (1) {
        printf("****** MAIN MENU ******\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Peek\n");
        printf("4. Display the queue\n");
        printf("5. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                item = dequeue();
                if (item != -1) {
                    printf("Dequeued element: %d\n", item);
                }
                break;
            case 3:
                item = peek();
                if (item != -1) {
                    printf("Front element: %d\n", item);
                }
                break;
            case 4:
                displayQueue();
                break;
            case 5:
                printf("Exiting. Have a great day!\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

