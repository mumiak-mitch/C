# C programming language fundamentals

*Introduction*
C is a general-purpose language used to write everything.
C is a low-level language and understanding how computer memory works is important.

First C program
    #include <stdio.h>

    int main() {
        printf("Hello World! \n");
        return 0;
    }

Data types
    int, float, double, char, boolean, string

A variable is a name for an area in memory.
A constant stores a value that cannot be changed from it initial assignment.

Escape sequences
    \n, \t, \, \b
Operators
    arithmetic, assignment, increment, decrement, relational, logical

Comments
    // single line comment
    /* */ multi-line coment

How to get user input
    getchar(), address operator &, scanf()
How to get user output
    gets(), putchar(), scanf()

*Conditionals and loops*
if expression
conditional expressions
switch expression
Loops
    while loop, for loop, do while loop

*Functions, array and pointers*
A function is a block of code that performs a specific task.
It is reusable.
It makes a program easy to test.
It can be modified without changing the calling program.

Variable scope refers to the visibility of variables within a program.
Static variables have a local scope but are not destroyed when a function is exited.

A recursive function is one that calls itself and includes a base case, or exit condition for ending the recursive calls.

An array is a data structure that stores a collection of values that are of the same type.

C id designed to be a low-level language that can easily access memory locations and perform memory-related operations.
A memory address is given a hexadecimal number.
A pointer is a variable that contains the address of another variable.

*String*
A string is an array of characters that ends with a NULL character '\0'.
It uses the string.h library.
sprintf(): it builds string from other data types.