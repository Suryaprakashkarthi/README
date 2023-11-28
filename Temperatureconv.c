#include <stdio.h>

// Function to convert Fahrenheit to Celsius
void fahren() {
    double fah, cel;
    printf("\n\n\t\tEnter a temperature in Fahrenheit: ");
    scanf("%lf", &fah);
    cel = (fah - 32) * 5 / 9;
    printf("\n\n\t\tTemperature in Celsius is %0.4lf\n\n", cel);
}

// Function to convert Celsius to Fahrenheit
void celsius() {
    double cel, fah;
    printf("\n\n\t\tEnter a temperature in Celsius: ");
    scanf("%lf", &cel);
    fah = (cel * 9 / 5) + 32;
    printf("\n\n\t\tTemperature in Fahrenheit is %0.4lf", fah);
}

//main function 
int main() {
    int opt;
    // Getting a choice from the user
    printf("\n\n\t\tClick 1 to convert Fahrenheit to Celsius");
    printf("\n\n\t\tClick 2 to convert Celsius to Fahrenheit");
    printf("\n\n\t\tEnter your choice: ");
    scanf("%d", &opt);

    if (opt == 1) {
        // calling function 1
        fahren();
    } else if (opt == 2) {
        // calling function 2
        celsius();
    } else {
        printf("\b\n\t\tEnter a valid option!!\n\n");
    }

    return 0;

}