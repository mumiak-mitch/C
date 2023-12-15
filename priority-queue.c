#include<stdio.h>
#include<stdlib.h>

// Node structure for priority queue
typedef struct node {
    int priority;
    int info;
    struct node *link;
} Node;

// Function to create a new node
Node *getnode() {
    return ((Node *)malloc(sizeof(Node)));
}

// Global front pointer for the priority queue
Node *front = NULL;

// Function prototypes
void insertion();
void deletion();
void display();

int main() {
    int ch;

    // Menu
    printf("\tMenu\n1.Insertion\n2.Deletion\n3.Display\n4.Exit");

    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                insertion();
                break;

            case 2:
                deletion();
                break;
 
            case 3:
                display();
                break;
 
            case 4:
                exit(0);

            default:
                printf("\nInvalid choice ");
                break; 
        } 
    } 
    return 0;
}

// Function to insert an element with priority into the priority queue
void insertion() { 
    int item, item_prty;
 
    // Create a new node
    Node *temp = getnode();

    printf("Enter item to insert: ");
    scanf("%d", &item);
    printf("Enter item priority: ");
    scanf("%d", &item_prty);

    temp->priority = item_prty;
    temp->info = item;
 
    // If the queue is empty or the new element has higher priority
    if(front == NULL || item_prty > front->priority) {
        temp->link = front;
        front = temp;
    } else {
        Node *q = front;
        
        // Traverse the queue to find the correct position based on priority
        while (q->link != NULL && q->link->priority >= item_prty)
            q = q->link;
        
        temp->link = q->link;
        q->link = temp;
    }
}

// Function to delete an element from the priority queue
void deletion() { 
    if(front == NULL)
        printf("Queue is underflow");
    else {
        Node *temp = front;
        printf("Deleted item is %d\n", temp->info);
        front = front->link;
        free(temp);
    }
}

// Function to display the elements of the priority queue
void display() {
    Node *ptr = front;

    if(front == NULL)
        printf("Queue is underflow");
    else {
        printf("Queue is :\n");
        printf("Priority Item :\n");
    
        while(ptr != NULL) {
            printf("%5d %5d\n", ptr->priority, ptr->info);
            ptr = ptr->link;
        }
    }
}