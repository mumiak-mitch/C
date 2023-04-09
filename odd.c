//This program verifies the fact of odd numbers

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += 2 * i - 1;
    }
    printf("The sum of the first %d odd numbers is %d\n", n, sum);
    printf("n^2 is %d\n", n * n);
    if (sum == n * n) {
        printf("The fact is verified!\n");
    } else {
        printf("The fact is not verified!\n");
    }
    return 0;
}