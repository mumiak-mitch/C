#include<stdio.h>

void merge(int arr[], int min, int mid, int max);
void divide(int arr[], int min, int max);

int main() {
    int arr[30];
    int i, size;
    
    printf("\n\t------- Merge sorting method -------\n\n");
    printf("Enter total number of elements: ");
    scanf("%d", &size);
    
    // Input the array elements
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Call the divide function to start the merge sort
    divide(arr, 0, size - 1);

    printf("\n\t------- Merge sorted elements -------\n\n");

    // Display the sorted array
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    getchar(); // Wait for a key press
    return 0;
}

// Function to merge two subarrays into a sorted array
void merge(int arr[], int min, int mid, int max) {
    int temp[30];
    int i, j, k;
    j = min;
    k = mid + 1;

    for (i = min; j <= mid && k <= max; i++) {
        // Compare elements from both subarrays and merge
        if (arr[j] <= arr[k]) {
            temp[i] = arr[j];
            j++;
        } else {
            temp[i] = arr[k];
            k++;
        }
    }

    // Copy the remaining elements from the first subarray
    if (j > mid) {
        for (; k <= max; i++, k++) {
            temp[i] = arr[k];
        }
    } else {
        // Copy the remaining elements from the second subarray
        for (; j <= mid; i++, j++) {
            temp[i] = arr[j];
        }
    }

    // Copy the sorted elements back to the original array
    for (i = min; i <= max; i++) {
        arr[i] = temp[i];
    }
}

// Function to divide the array into subarrays and recursively sort them
void divide(int arr[], int min, int max) {
    int mid;
    
    if (min < max) {
        // Calculate the middle index
        mid = (min + max) / 2;

        // Recursively sort the left and right subarrays
        divide(arr, min, mid);
        divide(arr, mid + 1, max);

        // Merge the sorted subarrays
        merge(arr, min, mid, max);
    }
}