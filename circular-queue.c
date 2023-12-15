#include <stdio.h>

#define max 3

// Circular Queue array and pointers for front and rear
int q[max], rear = -1, front = -1;

// Function prototypes
void insert();   // Function to insert an element into the circular queue
void delete();   // Function to delete an element from the circular queue
void display();  // Function to display the elements in the circular queue

int main() {
    int ch;

    do {
        printf("\nQueue Implementation\n");
        printf("1. Insert 2. Delete 3. Display 4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                insert();   // Call the insert function
                break;

            case 2:
                delete();   // Call the delete function
                break;

            case 3:
                display();  // Call the display function
                break;

            case 4:
                return 0;

            default:
                printf("Wrong choice\n");
                break;
        }
    } while (ch <= 4);

    return 0;
}

// Function to insert an element into the circular queue
void insert() {
    int item;

    // Check if the circular queue is full
    if (rear == max - 1) {
        printf("Queue overflow\n");
    } else {
        // If front is -1, set it to 0 indicating the first element
        if (front == -1)
            front = 0;

        // Get the element from the user and insert it into the circular queue
        printf("Insert the element in the queue: ");
        scanf("%d", &item);
        rear++;
        q[rear] = item;
    }
}

// Function to delete an element from the circular queue
void delete() {
    // Check if the circular queue is empty
    if (front == -1) {
        printf("Queue underflow\n");
    } else {
        // Display and remove the element from the front of the circular queue
        printf("Element deleted from the queue is: %d\n", q[front]);
        front++;

        // Reset front and rear if the circular queue becomes empty
        if (front > rear)
            front = rear = -1;
    }
}

// Function to display the elements in the circular queue
void display() {
    int i;

    // Check if the circular queue is empty
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        // Display the elements in the circular queue
        printf("Queue is:\n");

        for (i = front; i <= rear; i++) {
            printf("%2d ", q[i]);
        }
        printf("\n");
    }
}