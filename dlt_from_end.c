#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void main() {
    struct node *head = NULL, *new_node, *temp,*prev_node;
    int choice = 1;
    
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
    while(temp->next!=NULL)
    {
        prev_node=temp;
        temp=temp->next;
    }
    if(head==temp)
    {
        head=NULL;
        free(temp);
    }
    else
    {
        prev_node->next=NULL;
        free(temp);
    }

    // Print the linked list
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

