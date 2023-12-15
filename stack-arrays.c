#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 20

int top = -1;
int stack[MAX_SIZE];

void menu(void);
void push(int item);
int pop(void);
void display(void);

int main() {
    menu();
    return 0;
}

// Display menu and handle user choices
void menu() {
    int choice, item;

    printf("1. PUSH\n2. POP\n3. EXIT\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &item);
            push(item);
            break;

        case 2:
            item = pop();
            break;

        case 3:
            exit(0);

        default:
            printf("Invalid choice. Please enter a valid option.\n");
    }

    menu();
}

// Push an item onto the stack
void push(int item) {
    if (top == MAX_SIZE - 1)
        printf("Stack is overflow\n");
    else {
        top++;
        stack[top] = item;
    }

    display();
}

// Pop an item from the stack
int pop() {
    int item;

    if (top == -1) {
        printf("Stack is underflow\n");
        return 0;
    } else {
        item = stack[top];
        top--;
    }

    display();
    return item;
}

// Display the stack elements
void display() {
    int i;

    if (top == -1)
        printf("Stack is empty\n");
    else {
        printf("Stack elements:\n");
        printf("top --> ");

        for (i = top; i >= 0; i--)
            printf("%d\t", stack[i]);

        printf("\n");
    }
}