#include <iostream>
using namespace std;

// Function prototypes
void displayMenu();  // Displays the calculator menu
double add(double a, double b);  // Adds two numbers
double subtract(double a, double b);  // Subtracts two numbers
double multiply(double a, double b);  // Multiplies two numbers
double divide(double a, double b);  // Divides two numbers

int main() 
{
    char operation;
    double num1, num2, result;

    // Main calculator loop
    do 
    {
        displayMenu();  // Display menu options
        cin >> operation;

        // Exit condition
        if (operation == 'q' || operation == 'Q') 
        {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        // Input numbers
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        // Perform operation based on user input
        switch (operation) 
        {
            case '+':
                result = add(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case '-':
                result = subtract(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case '*':
                result = multiply(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case '/':
                // Check for division by zero
                if (num2 != 0) {
                    result = divide(num1, num2);
                    cout << "Result: " << result << endl;
                } 
                else 
                {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operation. Please try again." << endl;
        }
    } 
    while (operation != 'q' && operation != 'Q');

    return 0;
}

// Function definitions

// Function to display the calculator menu
void displayMenu() 
{
    cout << "\n===== Calculator Menu =====" << endl;
    cout << "Enter + for addition" << endl;
    cout << "Enter - for subtraction" << endl;
    cout << "Enter * for multiplication" << endl;
    cout << "Enter / for division" << endl;
    cout << "Enter q to quit" << endl;
    cout << "Choose an operation: ";
}

// Function to add two numbers
double add(double a, double b) 
{
    return a + b;
}

// Function to subtract two numbers
double subtract(double a, double b) 
{
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b) 
{
    return a * b;
}

// Function to divide two numbers, handles division by zero
double divide(double a, double b) 
{
    return a / b;
}
