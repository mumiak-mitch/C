#include<stdio.h>

// Function prototypes
int fib(int m); // Function to calculate Fibonacci number
int rfibsearch(int a[], int n, int p, int q, int r, int key); // Recursive Fibonacci Search function

void main() {
    int n, a[50], i, key, loc, p, q, r, m, fk;

    // Input the number of elements
    printf("\nEnter the number of elements to be entered: ");
    scanf("%d", &n);
    printf("Enter elements:\n");

    // Input array elements
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    // Input the key element to be searched
    printf("Enter the key element: ");
    scanf("%d", &key);

    // Calculate Fibonacci numbers
    fk = fib(n + 1);
    p = fib(fk);
    q = fib(p);
    r = fib(q);
    m = (n + 1) - (p + q);

    // Perform recursive Fibonacci search
    if (key > a[p])
        p = p + m;
    loc = rfibsearch(a, n, p, q, r, key);

    // Display the result
    if (loc == 0)
        printf("Key is not found.\n");
    else
        printf("%d is found at location %d.\n", key, loc);
}

// Function to calculate Fibonacci number
int fib(int m) {
    int a, b, c;
    a = 0;
    b = 1;
    c = a + b;

    while (c < m) {
        a = b;
        b = c;
        c = a + b;
    }

    return b;
}

// Recursive Fibonacci Search function
int rfibsearch(int a[], int n, int p, int q, int r, int key) {
    int t;

    if (p < 1 || p > n)
        return 0;
    else if (key == a[p])
        return p;
    else if (key < a[p]) {
        if (r == 0)
            return 0;
        else {
            p = p - r;
            t = q;
            q = r;
            r = t - r;
            return rfibsearch(a, n, p, q, r, key);
        }
    }
    else {
        if (q == 1)
            return 0;
        else {
            p = p + r;
            q = q - r;
            r = r - q;
            return rfibsearch(a, n, p, q, r, key);
        }
    }
}