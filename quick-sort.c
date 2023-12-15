#include<stdio.h>

// Function prototype for quick sort
void quickSort(int a[], int low, int high);

// Function prototype for partitioning the array
int partition(int a[], int low, int high);

int main() {
    int n, i, a[10];

    // Input the number of elements
    printf("Enter how many elements: ");
    scanf("%d", &n);

    // Input the elements
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Perform quick sort
    quickSort(a, 0, n - 1);

    // Display the sorted elements
    printf("The sorted elements are: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

// Function to perform quick sort
void quickSort(int a[], int low, int high) {
    int pivot;

    if (low < high) {
        // Partition the array into two halves
        pivot = partition(a, low, high);

        // Recursive quick sort on the left and right halves
        quickSort(a, low, pivot - 1);
        quickSort(a, pivot + 1, high);
    }
}

// Function to partition the array
int partition(int a[], int low, int high) {
    int pivot, i, j, temp;

    pivot = low; // Choose the first element as the pivot
    i = low;
    j = high;

    while (i < j) {
        // Move the left pointer to the right until an element greater than the pivot is found
        while (a[pivot] >= a[i] && i < high)
            i++;

        // Move the right pointer to the left until an element less than the pivot is found
        while (a[pivot] < a[j])
            j--;

        // Swap the elements at i and j
        if (i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    // Swap the pivot element with the element at position j
    temp = a[pivot];
    a[pivot] = a[j];
    a[j] = temp;

    // Return the position of the pivot element
    return j;
}