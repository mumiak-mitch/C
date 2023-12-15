#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variable to store user input
    int num;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Switch statement to check the value of num
    if (num < 0) {
        // If num is below zero
        printf("Number is below zero.\n");
    } else {
        // Switch cases for values 1, 2, 3 and 4, 5, 6
        switch (num) {
            // Cases for values 1, 2, and 3
            case 1:
            case 2:
            case 3:
                printf("One, Two, or Three.\n");
                break;
            // Cases for values 4, 5, and 6
            case 4:
            case 5:
            case 6:
                printf("Four, Five, or Six.\n");
                break;
            // Default case for values greater than 6
            default:
                printf("Greater than Six.\n");
        }
    }

    return 0;
}