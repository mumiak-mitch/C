#include <stdio.h>
#include <stdlib.h>

int main() {
    char a;

    // Read a single character from the standard input
    a = getchar();

    // Print a message indicating the user's input
    printf("You have entered: ");

    // Print the character that was read
    putchar(a);

    // Return 0 to indicate successful program execution
    return 0;
}