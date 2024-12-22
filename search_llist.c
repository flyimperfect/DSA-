#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void main() {
    struct node *head = NULL, *new_node, *temp;
    int choice = 1,found=0,key;
    
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
    printf("Enter key element:");
    scanf("%d",&key);
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            found=1;
            break;
        }
        temp=temp->next;
    }
    if(found)
    {
        printf("%d is found in linked list",key);
    }
    else
    {
        printf("Key element does nt belong in linked list");
    }

    
   
}

