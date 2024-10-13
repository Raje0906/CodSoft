#include <iostream>
using namespace std;

int main() {
    double num1, num2;  // Variables to store the two numbers
    char operation;     // Variable to store the chosen operation

    // Prompt user for input
    cout << "Welcome to the Simple Calculator!" << endl;
    cout << "Please enter the first number: ";
    cin >> num1;

    cout << "Please enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Please enter the second number: ";
    cin >> num2;

    // Perform the appropriate operation based on user input
    switch(operation) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            break;
    }

    return 0;
}
