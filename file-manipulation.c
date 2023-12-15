#include <stdio.h>
#include <stdlib.h>

// Function declarations
void fileManipulationTool();

int main() {
    fileManipulationTool();
    return 0;
}

// Function to manage file manipulation
void fileManipulationTool() {
    int option;
    char filename[50];
    FILE *file;

    do {
        // Display menu
        printf("\nFile Manipulation Tool:\n");
        printf("1. Create File\n");
        printf("2. Read File\n");
        printf("3. Append to File\n");
        printf("4. Exit\n");

        // Get user option
        printf("Enter your choice: ");
        scanf("%d", &option);

        // Implement functionality based on user choice
        switch (option) {
            case 1:
                // Create File
                printf("Enter filename to create: ");
                scanf(" %[^\n]", filename);

                file = fopen(filename, "w");
                if (file != NULL) {
                    printf("File created successfully.\n");
                    fclose(file);
                } else {
                    printf("Error creating file.\n");
                }
                break;
            case 2:
                // Read File
                printf("Enter filename to read: ");
                scanf(" %[^\n]", filename);

                file = fopen(filename, "r");
                if (file != NULL) {
                    printf("File contents:\n");

                    char ch;
                    while ((ch = fgetc(file)) != EOF) {
                        putchar(ch);
                    }

                    fclose(file);
                } else {
                    printf("Error reading file.\n");
                }
                break;
            case 3:
                // Append to File
                printf("Enter filename to append: ");
                scanf(" %[^\n]", filename);

                file = fopen(filename, "a");
                if (file != NULL) {
                    printf("Enter text to append (Ctrl + D to end):\n");

                    char buffer[1000];
                    while (scanf(" %[^\n]", buffer) != EOF) {
                        fprintf(file, "%s\n", buffer);
                    }

                    fclose(file);
                    printf("Text appended to file.\n");
                } else {
                    printf("Error appending to file.\n");
                }
                break;
            case 4:
                // Exit
                printf("Exiting File Manipulation Tool.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    } while (option != 4);
}