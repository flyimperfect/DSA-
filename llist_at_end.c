#include<stdio.h>
#include<Stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main()
{
    struct node *head=NULL,*temp,*new_node;
    int choice=1;
    while(choice)
    {
        new_node=(struct node*) malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(head==NULL)
        {
            head=temp=new_node;
        }
        else
        {
            temp->next=new_node;
            temp=new_node;
        }
        printf("Enter 1 to continue or 0 to exit:");
        scanf("%d",&choice);
    }
    new_node=(struct node*) malloc(sizeof(struct node));
    printf("Enter data to insert at the end:");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    
    
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}