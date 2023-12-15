#include <stdio.h>
#include <string.h>

// Define a structure named 'vehicle'
typedef struct {
    char make[20];
    int model_year;
    int id_type;
    // Define a union for different types of identifiers
    union {
        int id_num;   // Numeric identifier
        char VIN[20]; // Vehicle Identification Number (VIN)
    } id;
} vehicle;

int main() {
    // Declare a variable 'car1' of type 'vehicle'
    vehicle car1;

    // Assign values to the members of 'car1'
    strcpy(car1.make, "Ford");
    car1.model_year = 2017;
    car1.id_type = 0;
    car1.id.id_num = 123456;

    // Display information about 'car1'
    printf("Car %s, %d", car1.make, car1.model_year);

    return 0;
}