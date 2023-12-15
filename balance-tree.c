#include <stdio.h>
#include <stdlib.h>

// Structure for a binary tree node
struct btnode {
    int value;               // Data value of the node
    struct btnode *l;        // Pointer to the left subtree
    struct btnode *r;        // Pointer to the right subtree
};

// Typedef for brevity
typedef struct btnode N;

// Function to create a new node with a given value
N* new(int val);

// Function to build a balanced binary search tree from a sorted array
N* bst(int arr[], int first, int last);

// Function to display the nodes of the tree in preorder traversal
void display(N *temp);

int main() {
    int arr[] = {10, 20, 30, 40, 60, 80, 90};
    N *root = (N*)malloc(sizeof(N));   // Allocate memory for the root node
    int n = sizeof(arr) / sizeof(arr[0]), i;
    printf("Given sorted array is\n");

    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);

    root = bst(arr, 0, n - 1);  // Build the binary search tree from the array
    printf("\nThe preorder traversal of the binary search tree is as follows\n");
    display(root);  // Display the nodes in preorder traversal
    printf("\n");

    return 0;
}

// Function to create a new node with a given value
N* new(int val) {
    N* node = (N*)malloc(sizeof(N));
    node->value = val;
    node->l = NULL;
    node->r = NULL;

    return node;
}

// Function to build a balanced binary search tree from a sorted array
N* bst(int arr[], int first, int last) {
    int mid;
    N* temp = (N*)malloc(sizeof(N));

    if (first > last)
        return NULL;

    mid = (first + last) / 2;
    temp = new(arr[mid]);
    temp->l = bst(arr, first, mid - 1);
    temp->r = bst(arr, mid + 1, last);

    return temp;
}

// Function to display the nodes of the tree in preorder traversal
void display(N *temp) {
    printf("%d->", temp->value);

    // Recursively display the left and right subtrees
    if (temp->l != NULL)
        display(temp->l);
    if (temp->r != NULL)
        display(temp->r);
}