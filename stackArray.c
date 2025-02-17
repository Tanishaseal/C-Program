#include <stdio.h>
#include<conio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
    top=-1;
    printf("enter the size of stack[max=100]: ");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t ");
    do
    {
        printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
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
void push()
{
    if(top>=(n-1))
    printf("STACK OVERFLOW");
else
{
    printf(" Enter a value to be pushed:");
    scanf("%d",&x);
    top++;
    stack[top]=x;

}
}
void pop()
{
    if(top<=-1)
    printf("STACK UNDERFLOW");
else
{
    printf("the popped element is %d", stack[top]);
    top--;
}
}
void display()
{
    if(top>=0)
    {
        printf(" the elements in stack is \n");
        for(i=top;i>=0;i--)
        {
            printf("%d, ", stack[i]);
            
        }
        printf("\n NEXT CHOICE ");
    }
    else
    {
        printf(" STACK IS EMPTY ");
    }
}