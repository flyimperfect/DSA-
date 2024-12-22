#include<stdio.h>
int queue[50];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(rear==49)
    {
        printf("Overflow condition");
    }
    else if(front==-1 && rear==-1)
    {
        front = rear =0;
        queue[rear]=x;
        printf("Element is inserted\n");
    }
    else
    {
        rear++;
        queue[rear]=x;
        printf("Element is inserted\n");
    }
}
void dequeue()
{
    if(rear==-1 && front==-1)
    {
        printf("Underflow condition\n");
    }
    else if(rear==front)
    {
        int item;
        item=queue[front];
        front = rear =-1;
        printf("Element deleted is %d\n",item);
    }
    else
    {
        int item;
        item=queue[front];
        front++;
        printf("Element deleted is %d\n",item);
    }
}
void display()
{
    int i;
    for(i=front;i<rear+1;i++)
    {
        printf("%d ",queue[i]);
    }
}
int main()
{
    enqueue(5);
    display();
    enqueue(10);
    display();
    enqueue(15);
    display();
    dequeue();
    display();
}