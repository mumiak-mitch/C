#include <stdio.h>
#include <stdlib.h>

int main() {
    int y;
    int x = 3;
    y = (x >= 5) ? 5 : x;
    /*this is equivalent to:
    if (x >= 5)
        y = 5;
    else
        y = x;
    */

    printf("%d", y);
    return 0;
}