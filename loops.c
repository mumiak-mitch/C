#include <stdio.h>
#include <stdlib.h>

int main() {
    // Example using a while loop
    int count = 1;
    while (count < 8) {
        printf("Count = %d\n", count);
        count++;
    }

    // Example using a do-while loop
    int num = 1;
    do {
        printf("Count = %d\n", num);
        num++;
    } while (num < 8);

    // Example using a for loop
    int i = 0;
    int max = 10;

    for (; i < max; i++) {
        printf("%d\n", i);
    }

    return 0;
}