#include <stdio.h>
#include <stdlib.h>

int main() {
    int y;      // Declare variable y
    int x = 3;  // Initialize variable x with value 3

    // Using the ternary conditional operator to assign a value to y
    y = (x >= 5) ? 5 : x;

    /* The above line is equivalent to the following if-else statement:
       if (x >= 5)
           y = 5;
       else
           y = x;
    */

    // Print the value of y
    printf("%d", y);

    return 0;   // Return 0 to indicate successful program execution
}