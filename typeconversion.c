#include <stdio.h>
#include <stdlib.h>

int main(){
    // Declare variables
    float average;
    int total = 23;
    int count = 4;

    // Calculate the average by casting total to float before division
    average = (float) total / count;

    // Display the average with a format specifier to show two decimal places
    printf("%4.2f", average);

    return 0;
}