//A recursive function is a function that calls itself

#include <stdio.h>
#include <stdlib.h>

//function declaration
int factorial(int num);

int main() {
    int x = 5;

    printf("The factorial of %d is %d\n", x, factorial(x));

    return 0;
}

//function definition
int factorial(int num) {
    if (num == 1) //base case
        return (1);
    else
        return (num * factorial(num - 1));
}