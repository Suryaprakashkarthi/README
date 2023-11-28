#include <stdio.h>

int main() {
    // Declare variables
    char n;       // Operator (+, -, *, /)
    double a, b;  // Input values

    // Display operation options to the user
    printf("\n\n\t\t + Means Addition  \n\t\t - Means Subtraction \n\t\t * Means Multiplication \n\t\t /  Means division ");

    // Get operator input from the user
    printf("\n\n\t\tEnter an operator : ");
    scanf("%c", &n);

    // Get the first input value
    printf("\n\t\tEnter value 1: ");
    scanf("%lf", &a);

    // Get the second input value
    printf("\n\n\t\tEnter value 2: ");
    scanf("%lf", &b);

    // Perform calculations based on the operator
    if ('+' == n)
        printf("\n\t\t%0.02lf + %0.02lf = %0.02lf\n\n", a, b, a + b);
    else if ('-' == n)
        printf("\n\t\t%0.02lf - %0.02lf = %0.02lf\n\n", a, b, a - b);
    else if ('*' == n)
        printf("\n\t\t%0.02lf * %0.02lf = %0.02lf\n\n", a, b, a * b);
    else if ('/' == n)
        printf("\n\t\t%0.02lf / %0.02lf = %0.02lf\n\n", a, b, a / b);

    return 0;

}