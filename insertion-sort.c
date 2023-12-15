#include<stdio.h>

void main() {
    int n, i, a[10], t, j;

    // Input the number of elements
    printf("Enter how many elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Perform insertion sort
    for (i = 1; i < n; i++) {
        for (j = i; j > 0; j--) {
            // Compare and swap if needed
            if (a[j] < a[j - 1]) {
                t = a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
            }
        }
    }

    // Display the sorted elements
    printf("The sorted elements are:\n");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);

    // Wait for a key press
    getchar();
}