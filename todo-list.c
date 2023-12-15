#include <stdio.h>
#include <string.h>

#define MAX_TASKS 10

// Function declarations
void toDoListManager();

// Structure to represent a task
struct Task {
    char description[50];
    int priority;
    int completed;
};

// Array to store tasks
struct Task tasks[MAX_TASKS];
int numTasks = 0;

int main() {
    toDoListManager();
    return 0;
}

// Function to manage the to-do list
void toDoListManager() {
    int option;

    do {
        // Display menu
        printf("\nTo-Do List Manager:\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Mark Task as Completed\n");
        printf("4. Exit\n");

        // Get user option
        printf("Enter your choice: ");
        scanf("%d", &option);

        // Implement functionality based on user choice
        switch (option) {
            case 1:
                // Add Task
                if (numTasks < MAX_TASKS) {
                    printf("Enter task description: ");
                    scanf(" %[^\n]", tasks[numTasks].description);

                    printf("Enter task priority (1-5): ");
                    scanf("%d", &tasks[numTasks].priority);

                    tasks[numTasks].completed = 0; // Task starts as not completed
                    numTasks++;
                } else {
                    printf("Task limit reached. Cannot add more tasks.\n");
                }
                break;
            case 2:
                // View Tasks
                if (numTasks > 0) {
                    printf("Tasks:\n");
                    for (int i = 0; i < numTasks; i++) {
                        printf("%d. %s (Priority: %d, %s)\n", i + 1, tasks[i].description, tasks[i].priority,
                               tasks[i].completed ? "Completed" : "Not Completed");
                    }
                } else {
                    printf("No tasks available.\n");
                }
                break;
            case 3:
                // Mark Task as Completed
                if (numTasks > 0) {
                    int taskIndex;
                    printf("Enter task number to mark as completed: ");
                    scanf("%d", &taskIndex);

                    if (taskIndex >= 1 && taskIndex <= numTasks) {
                        tasks[taskIndex - 1].completed = 1;
                        printf("Task marked as completed.\n");
                    } else {
                        printf("Invalid task number.\n");
                    }
                } else {
                    printf("No tasks available.\n");
                }
                break;
            case 4:
                // Exit
                printf("Exiting To-Do List Manager.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    } while (option != 4);
}