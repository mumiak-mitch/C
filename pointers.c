#include <stdio.h>

// Function prototype declaration
void test(int k);

int main() {
    // Declare and initialize a variable i
    int i = 0;

    // Print the address of variable i using %p
    printf("The address of i is %p\n", (void*)&i);

    // Call the test function with the value of i
    test(i);

    // Print the address of variable i again using %p
    printf("The address of i is %p\n", (void*)&i);

    // Call the test function with the value of i again
    test(i);

    return 0;
}

// Function definition for the test function
void test(int k) {
    // Print the address of the parameter k using %p
    printf("The address of k is %p\n", (void*)&k);
}