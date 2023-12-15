#include <stdio.h>

int main() {
    // Declare a variable to store the user input
    int n;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Loop to generate the multiplication table for the entered integer
    for (int i = 1; i <= 10; ++i) {
        // Display each multiplication operation and result
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}