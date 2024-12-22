#include<stdio.h>

int stack[5];
int top=-1;
void push()
{
    int x;
    printf("Enter value to insert:");
    scanf("%d",&x);
    if(top==5-1)
    {
        printf("Overflow condition");

    }
    else
    {
        top++;
        stack[top]=x;
        printf("%d is pushed into stack\n",x);
        
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("Underflow Condition");
    }
    else
    {
        item=stack[top];
        top--;
        printf("%d is the popped element\n",item);
    }
}
void show()
{
    int item;
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        item=stack[top];
        printf("Top element is %d\n",item);
    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
    printf("\n");
}
void main()
{
    push();
    push();
    pop();
    display();
}
