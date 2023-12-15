#include <stdio.h>
#include <stdlib.h>

// Function declaration
int factorial(int num);

int main() {
    int x;

    // Get user input for the number
    printf("Enter an integer to calculate its factorial: ");
    scanf("%d", &x);

    // Print the factorial of x using the factorial function
    printf("The factorial of %d is %d\n", x, factorial(x));

    return 0;
}

// Function definition for calculating factorial using recursion
int factorial(int num) {
    // Base case: factorial of 1 is 1
    if (num == 1)
        return 1;
    else
        // Recursive case: num * factorial of (num - 1)
        return (num * factorial(num - 1));
}