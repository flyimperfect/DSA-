#include<stdio.h>
int queue[50];
int front=-1;
int rear=-1;

void enqueue(int x)
{
    if((rear+1)%50==front)
    {
        printf("Overflow condition");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
        printf("Element %d is pushed in \n",x);

    }
    else
    {
        rear=(rear+1)%50;
        queue[rear]=x;
        printf("Element %d is pushed in\n",x);
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow Condition");
    }
    else if(front==rear)
    {
        int item;
        item=queue[front];
        printf("The element popped is %d\n",item);
    }
    else
    {
         int item;
         item=queue[front];
        front=(front+1)%50;
        printf("The element popped is %d\n",item);
       

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
    enqueue(10);
    enqueue(15);
    dequeue();
    display();
}