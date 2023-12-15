#include <stdio.h>

#define TRUE 1
#define FALSE 0

// Function to perform bubble sort on an array
void bubblesort(int x[], int n);

int main() {
    int num[10], i, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);

    bubblesort(num, n); // Call the bubblesort function to sort the array

    printf("Sorted elements are:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", num[i]);

    getchar(); // Wait for a key press
    return 0;
}

// Function to perform bubble sort on an array
void bubblesort(int x[], int n) {
    int hold, j, pass, K = TRUE;

    // Outer loop for each pass
    for (pass = 0; pass < n - 1 && K == TRUE; pass++) {
        K = FALSE;

        // Inner loop to compare and swap elements
        for (j = 0; j < n - pass - 1; j++)
            if (x[j] > x[j + 1]) {
                K = TRUE;

                // Swap elements if they are in the wrong order
                hold = x[j];
                x[j] = x[j + 1];
                x[j + 1] = hold;
            }
    }
}