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
        if(head==NULL)
        {
            temp=head=new_node;
        }
        else
        {
            temp->next=new_node;
            temp=new_node;
        }
        printf("Enter 0 to exit and 1 to conitinue:");
        scanf("%d",&choice);
    }
    
}
int count()
{
    temp=head;
    int count=0;
    while(temp!=NULL)
    {
        
        count++;
        temp=temp->next;
    }
    return count;
}
int main()
{
    create();
    int b=count();
    printf("%d is count of list",b);
}