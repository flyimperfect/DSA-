#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
void main()
{
    struct node *head=NULL,*temp,*new_node;
    int choice=1,pos,i=1;
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
        printf("Enter 0 to exit and 1 to continue:");
        scanf("%d",&choice);
    }
    temp=head;
    head=head->next;
    free(temp);
    
    

    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}