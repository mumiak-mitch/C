#include <stdio.h>
#include <stdlib.h>

// Function declaration for 'say_hello'
void say_hello();

int main() {
    int i;

    // Loop to call 'say_hello' function five times
    for (i = 0; i < 5; i++) {
        say_hello();  // Corrected: Added parentheses to actually call the function
    }

    return 0;
}

// Definition of the 'say_hello' function
void say_hello() {
    static int num_calls = 1;

    // Display a greeting message with the count of function calls
    printf("Hello number %d\n", num_calls);
    num_calls++;
}