#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare variables to store user input
    int a, b;

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");

    // Read user input for the two numbers
    scanf("%d %d", &a, &b);

    // Calculate and print the sum of the two numbers
    printf("\nSum: %d", a + b);

    return 0;
}