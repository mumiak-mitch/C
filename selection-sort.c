#include<stdio.h>

void main() {
    int n, i, j, a[10], min, t;

    // Prompt the user to enter the number of elements
    printf("Enter how many elements (max 10): ");
    scanf("%d", &n);

    if (n <= 0 || n > 10) {
        printf("Invalid number of elements. Exiting program.\n");
        return;
    }

    // Prompt the user to enter the elements
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Perform selection sort
    for (i = 0; i < n - 1; i++) {
        min = i;

        // Find the minimum element in the unsorted part of the array
        for (j = i + 1; j < n; j++) {
            if (a[min] > a[j])
                min = j;
        }

        // Swap the found minimum element with the first element
        t = a[i];
        a[i] = a[min];
        a[min] = t;
    }

    // Display the sorted elements
    printf("The sorted elements are: ");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);

    printf("\n");
}