#include <stdio.h>

// Function declarations
void calculator();
void numberGuessingGame();
void temperatureConverter();

int main() {
    int choice;

    // Display menu
    printf("Choose an option:\n");
    printf("1. Calculator\n");
    printf("2. Guess the Number Game\n");
    printf("3. Temperature Converter\n");

    // Get user choice
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Implement functionality based on user choice
    switch (choice) {
        case 1:
            calculator();
            break;
        case 2:
            numberGuessingGame();
            break;
        case 3:
            temperatureConverter();
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

// Function implementations
void calculator() {
    float num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                return;
            }
            break;
        default:
            printf("Invalid operator\n");
            return;
    }

    printf("Result: %f\n", result);
}

void numberGuessingGame() {
    int secretNumber = 10;
    int guess;

    printf("Welcome to the Guess the Number Game!\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number.\n");
        }
    } while (guess != secretNumber);
}

void temperatureConverter() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Equivalent temperature in Fahrenheit: %f\n", fahrenheit);
}