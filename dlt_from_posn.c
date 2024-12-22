#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void main() {
    struct node *head = NULL, *new_node, *temp,*next_node;
    int choice = 1,pos,i=1;
    
    while (choice) {
        new_node = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        
        if (head == NULL) {
            head = temp = new_node;
        } else {
            temp->next = new_node;
            temp = new_node;
            
        }
        
        printf("Do you want to continue (0,1)?: ");
        scanf("%d", &choice);
    }
    temp=head;
    printf("Enter pos:");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    next_node=temp->next;
    temp->next=next_node->next;
    free(next_node);

    // Print the linked list
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

