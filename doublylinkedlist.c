#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL,*temp,*new_node;
void create()
{
    int choice=1;
    while(choice)
    {
    new_node=(struct node*) malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    new_node->prev=NULL;
    if(head==NULL)
    {
        temp=head=new_node;
    }
    else
    {
        temp->next=new_node;
        new_node->prev=temp;
        temp=new_node;
    }
    printf("Enter 0 to exit and 1 to continue:");
    scanf("%d",&choice);
    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void main()
{
    create();
    display();
}