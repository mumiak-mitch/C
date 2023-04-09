//This program creates a multiplication table for the integer a user enters

#include <stdio.h>

int main() {
    int n;
  
    printf("Enter an integer: ");
    scanf("%d", &n);

  for (int i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }

  return 0;
}