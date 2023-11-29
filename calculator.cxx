#include <iostream>

using namespace std;

int main() {
    // Declare variables
    char n;       // Operator (+, -, *, /)
    double a, b;  // Input values

    // Display operation options to the user
    cout << "\n\n\t\t + Means Addition  \n\t\t - Means Subtraction \n\t\t * Means Multiplication \n\t\t /  Means division ";

    // Get operator input from the user
    cout << "\n\n\t\tEnter an operator : ";
    cin >> n;

    // Get the first input value
    cout << "\n\t\tEnter value 1: ";
    cin >> a;

    // Get the second input value
    cout << "\n\n\t\tEnter value 2: ";
    cin >> b;

    // Perform calculations based on the operator
    if ('+' == n)
        cout << "\n\t\t" << a << " + " << b << " = " << a + b << "\n\n";
    else if ('-' == n)
        cout << "\n\t\t" << a << " - " << b << " = " << a - b << "\n\n";
    else if ('*' == n)
        cout << "\n\t\t" << a << " * " << b << " = " << a * b << "\n\n";
    else if ('/' == n)
        cout << "\n\t\t" << a << " / " << b << " = " << a / b << "\n\n";

    return 0;
}