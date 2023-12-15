#include <stdio.h>
#include <stdlib.h>

/* Function declaration */
int square(int num);

int main() {
    int x, result;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &x);

    // Call the square function and store the result
    result = square(x);

    // Print the result
    printf("%d squared is %d\n", x, result);

    return 0;
}

/* Function definition for squaring a number */
int square(int num) {
    int y;

    // Calculate the square of the input number
    y = num * num;

    // Return the result
    return y;
}