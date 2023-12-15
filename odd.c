#include <stdio.h>

int main() {
    // Declare variables for user input, sum, and result
    int n, sum = 0;

    // Prompt the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to calculate the sum of the first n odd numbers
    for (int i = 1; i <= n; i++) {
        sum += 2 * i - 1;
    }

    // Display the sum and n^2
    printf("The sum of the first %d odd numbers is %d\n", n, sum);
    printf("n^2 is %d\n", n * n);

    // Verify if the sum of the first n odd numbers equals n^2
    if (sum == n * n) {
        printf("The fact is verified!\n");
    } else {
        printf("The fact is not verified!\n");
    }

    return 0;
}