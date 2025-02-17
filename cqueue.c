#include <stdio.h>
#include<conio.h>
int CQ[100],choice,count,front,rear,x,i,MAX;
void push(void);
void pop(void);
void display(void);
int main()
{
    front=0;
    rear=0;
    count=0;
    printf("enter the maximum size of queue[max=100]: ");
    scanf("%d",&MAX);
    printf("\n\t QUEUE OPERATIONS USING ARRAY");
    printf("\n\t ");
    do
    {
        printf("\n\t 1.ENQUEUE\n\t 2.DEQUEUE\n\t 3.DISPLAY\n\t 4.EXIT");
        printf("\n Enterthe Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        enq();
        break;
        case 2:
        deq();
        break;
        case 3:
        display();
        break;
        case 4:
        printf("\n\t EXIT POINT ");
        break;
        default:
        printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
    }
    } 
    while(choice!=4);
    return 0;
}
void enq()
{
    int data;
    if(count == MAX)
    {
        printf("\n Circular Queue is Full");
    }
    else
    {
        printf("\n Enter data: "); 
        scanf("%d", &data); 
        CQ[rear] = data;
        rear = (rear + 1) % MAX; 
        count ++;
        printf("\n Data Inserted in the Circular Queue ");
    }
}
void deq()
{
    if(count ==0)
    {
        printf("\n\nCircular Queue is Empty..");
    }
    else
    {
    printf("\n Deleted element from Circular Queue is %d ", CQ[front]);
    front = (front + 1) % MAX; 
    count --;
    }
}

void peek() {
    if(count ==0)
    {
        printf("\n\nCircular Queue is Empty..");
    }
    else
    printf("\n Peeked element from Circular Queue is %d ", CQ[front]); 
}

void display()
{
    int i, j; 
    if(count ==0)
    {
        printf("\n\n\t Circular Queue is Empty ");
    }
    else
    {
        printf("\n Elements in Circular Queue are: ");
        j = count;
        for(i = front; j != 0; j--)
        {
            printf("%d\t", CQ[i]); 
            i = (i + 1) % MAX;
        }
    }
}