
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

Node *start;

void insertFirst() {
    Node *temp;
    temp = (Node *)malloc(sizeof(Node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->prev = NULL;
    temp->next = NULL;

    if (start == NULL)
        start = temp;
    else {
        temp->next = start;
        start->prev = temp;
        start = temp;
    }
}

void insertLast() {
    Node *temp, *ptr;
    temp = (Node *)malloc(sizeof(Node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->prev = NULL;
    temp->next = NULL;

    if (start == NULL)
        start = temp;
    else {
        ptr = start;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }

        ptr->next = temp;
        temp->prev = ptr;
    }
}

void deleteFirst() {
    if (start == NULL)
        printf("\nUnderflow\n");
    else if (start->next == NULL) {
        free(start);
        start = NULL;
    } else {
        Node *temp = start;
        start = start->next;
        start->prev = NULL;
        free(temp);
    }
}

void deleteLast() {
    Node *ptr;
    if (start == NULL)
        printf("\nUnderflow\n");
    else if (start->next == NULL) {
        free(start);
        start = NULL;
    } else {
        ptr = start;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }

        Node *temp = ptr;
        ptr = ptr->prev;
        ptr->next = NULL;
        free(temp);
    }
}

void searchInsert() {
    int num;
    Node *ptr, *temp;
    if (start == NULL) {
        printf("\nList is empty\n");
        insertFirst();
    } else {
        printf("\nEnter search number: ");
        scanf("%d", &num);
        ptr = start;
        while (ptr != NULL) {
            if (ptr->data == num)
                break;
            ptr = ptr->next;
        }
        if (ptr == NULL)
            printf("\nSearch element is not present\n");
        else {
            temp = (Node *)malloc(sizeof(Node));
            printf("Enter the data: ");
            scanf("%d", &temp->data);
            temp->prev = ptr;
            temp->next = ptr->next;
            if (ptr->next != NULL) {
                ptr->next->prev = temp;
            }
            ptr->next = temp;
        }
    }
}

void searchDelete() {
    int num;
    Node *ptr, *temp;
    if (start == NULL) {
        printf("\nList is empty\n");
    } else {
        
        printf("\nEnter search number: ");
        scanf("%d", &num);
        ptr = start;
        while (ptr != NULL) {
            if (ptr->data == num)
                break;
            ptr = ptr->next;
        }

        if (ptr->next == NULL) {
            if (ptr->prev != NULL) {
                ptr->prev->next = NULL;
            }
            if (ptr == start) {
                start = NULL;
            }
            free(ptr);
        } else {
            if (ptr->prev != NULL) {
                ptr->prev->next = ptr->next;
            }
            if (ptr->next != NULL) {
                ptr->next->prev = ptr->prev;
            }
            free(ptr);
        }
    }
}

void display() 
{ 
    Node *ptr; 
    if(start==NULL) 
    printf("List is Empty"); 
    else 
    { 
        ptr=start; 
        while(ptr!=NULL) 
        { 
            printf("\n %d", ptr->data); 
            ptr=ptr->next; 
        } 
    } 
}

int main()
{
    int ch;
    start=NULL;
    while(1)
    {
        printf("\n Insert 1 for insert at First");
        printf("\n Insert 2 for insert at Last");
        printf("\n Insert 3 for delete at First");
        printf("\n Insert 4 for delete at Last");
        printf("\n Insert 5 for searth and insert");
        printf("\n Insert 6 for serach and delete");
        printf("\n Insert 7 for Display");
        printf("\n Insert 8 for Exit");
        printf("\n Enter Your Choice");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
            insertFirst();
            display();
            break;

            case 2:
            insertLast();
            display();
            break;

            case 3:
            deleteFirst();
            display();
            break;

            case 4:
            deleteLast();
            display();
            break; 

            case 5:
            searchInsert();
            display();
            break;

            case 6:
            searchDelete();
            display();
            break; 

            case 7:
            display();
            break; 

            case 8:
            exit(1);

            default:
            printf("\n wrong choice ");
        }
    }
}
