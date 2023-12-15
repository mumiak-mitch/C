#include <stdio.h>

void maxheap(int a[], int i, int n);
void buildmaxheap(int a[], int n);
void heapsort(int a[], int n);

int main() {
    int a[50], i, n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    // Perform heap sort on the array
    heapsort(a, n);

    // Display the sorted array
    printf("Sorted array is:\n");
    for (i = 1; i <= n; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}

// Function to build a max heap from the given array
void buildmaxheap(int a[], int n) {
    int i;

    // Starting from the middle of the array, perform max heapify on each node
    for (i = n / 2; i >= 1; i--) {
        maxheap(a, i, n);
    }
}

// Function to perform max heapify at a specific index in the array
void maxheap(int a[], int i, int n) {
    int R, L, largest, t;

    // Calculate left and right child indices
    L = 2 * i;
    R = 2 * i + 1;

    // Compare with left child
    if ((L <= n) && (a[L] > a[i]))
        largest = L;
    else
        largest = i;

    // Compare with right child
    if ((R <= n) && (a[R] > a[largest]))
        largest = R;

    // If the largest element is not the current root, swap them and continue max heapify
    if (largest != i) {
        t = a[i];
        a[i] = a[largest];
        a[largest] = t;
        maxheap(a, largest, n);
    }
}

// Function to perform heap sort on the given array
void heapsort(int a[], int n) {
    int i, temp;

    // Build a max heap from the array
    buildmaxheap(a, n);

    // Extract elements one by one from the heap
    for (i = n; i >= 2; i--) {
        // Swap the root (maximum element) with the last element
        temp = a[1];
        a[1] = a[i];
        a[i] = temp;

        // Perform max heapify on the reduced heap
        maxheap(a, 1, i - 1);
    }
}