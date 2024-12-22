#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
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
        if(head==NULL)
        {
            temp=head=new_node;
        }
        else
        {
            temp->next=new_node;
            temp=new_node;
        }
        printf("Enter 0 to exit and 1 to continue:");
        scanf("%d",&choice);
    }

}
void insert_at_bgn()
{
    new_node=(struct node*) malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&new_node->data);
    new_node->next=head;
    head=new_node;
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
    insert_at_bgn();
    display();
}