#include <stdio.h>

// Define a structure to represent a student
struct student {
    int age;
    int grade;
    char name[40];
};

int main() {
    // Declare two student variables
    struct student s1;
    struct student s2;

    // Initialize values for the first student
    s1.age = 19;
    s1.grade = 9;
    sprintf(s1.name, "John Bighimer");  // Copy the name to the structure using sprintf

    // Initialize values for the second student
    s2.age = 22;
    s2.grade = 10;
    sprintf(s2.name, "Batman Jokerson");  // Copy the name to the structure using sprintf

    // Display information for the first student
    printf("Student: %s, %d, Grade: %d\n", s1.name, s1.age, s1.grade);

    // Display information for the second student
    printf("Student: %s, %d, Grade: %d\n", s2.name, s2.age, s2.grade);

    return 0;
}