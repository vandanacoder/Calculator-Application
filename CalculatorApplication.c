#include <stdio.h>

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
        scanf(" %c", &operation);

        // Exit condition
        if (operation == 'q' || operation == 'Q') 
        {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        // Input numbers
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        // Perform operation based on user input
        switch (operation) 
        {
            case '+':
                result = add(num1, num2);
                printf("Result: %lf\n", result);
                break;
            case '-':
                result = subtract(num1, num2);
                printf("Result: %lf\n", result);
                break;
            case '*':
                result = multiply(num1, num2);
                printf("Result: %lf\n", result);
                break;
            case '/':
                // Check for division by zero
                if (num2 != 0) 
                {
                    result = divide(num1, num2);
                    printf("Result: %lf\n", result);
                } 
                else 
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operation. Please try again.\n");
        }
    } 
    while (operation != 'q' && operation != 'Q');

    return 0;
}

// Function definitions

// Function to display the calculator menu
void displayMenu() 
{
    printf("\n===== Calculator Menu =====\n");
    printf("Enter + for addition\n");
    printf("Enter - for subtraction\n");
    printf("Enter * for multiplication\n");
    printf("Enter / for division\n");
    printf("Enter q to quit\n");
    printf("Choose an operation: ");
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
