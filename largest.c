#include <stdio.h>

int main() {
  // Declare three double variables
  double num1, num2, num3;

  // Prompt the user to enter three different numbers
  printf("Enter three different numbers: ");
  scanf("%lf %lf %lf", &num1, &num2, &num3);

  // Check for the largest number among num1, num2, and num3

  // If num1 is greater than or equal to both num2 and num3, num1 is the largest
  if (num1 >= num2 && num1 >= num3)
    printf("%.2f is the largest number.", num1);

  // If num2 is greater than or equal to both num1 and num3, num2 is the largest
  if (num2 >= num1 && num2 >= num3)
    printf("%.2f is the largest number.", num2);

  // If num3 is greater than or equal to both num1 and num2, num3 is the largest
  if (num3 >= num1 && num3 >= num2)
    printf("%.2f is the largest number.", num3);

  return 0;
}