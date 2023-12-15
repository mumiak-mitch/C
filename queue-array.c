#include<stdio.h>
#include<stdlib.h>

// Global variables for queue and indices
int q[10], n, f = 0, r = 0;

// Function prototypes
void insertion(void);
void deletion(void);
void display(void);

int main() {
    int op;

    // Input the size of the queue
    printf("ENTER THE SIZE OF QUEUE:");
    scanf("%d", &n);
    
    while(1) {
        printf("\n1.INSERTION\n2.DELETION\n3.DISPLAY\n4.EXIT\n");
        printf("ENTER YOUR OPTION:");
        scanf("%d", &op);
        
        switch(op) {
            case 1:
                insertion(); 
                break;

            case 2:
                deletion(); 
                break;

            case 3:
                display(); 
                break; 
            
            default:
                exit(0);
        } 
    } 
    return 0;
}

// Function to insert an element into the queue
void insertion() {
    if(r >= n)
        printf("QUEUE IS OVERFLOW"); 
    else {
        r = r + 1;
        printf("\nENTER AN ELEMENT TO INSERT:");
        scanf("%d", &q[r]);
        if(f == 0)
            f = 1;
    } 
}

// Function to delete an element from the queue
void deletion() {
    if(f == 0)
        printf("THE QUEUE IS EMPTY"); 
    else {
        printf("THE DELETING ELEMENT IS:%5d", q[f]);
        f = f + 1;
        if(f > r)
            f = 0, r = 0;
    } 
}

// Function to display the elements of the queue
void display() {
    if(f == 0)
        printf("QUEUE IS EMPTY"); 
    else
        for(int i = f; i <= r; i++)
            printf("%5d", q[i]);
}