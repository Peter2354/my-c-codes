// a simple calculator program in C++ that allows the user to perform basic arithmetic operations
// such as addition, subtraction, multiplication, and division on two numbers of their choice.
#include <iostream>
using namespace std;

int main() {
    int num1, num2, choice, result;

    cout << "Simple Calculator\n";
    cout << "-----------------\n";
    cout << "Enter two numbers:\n";
    cin >> num1 >> num2; // allowing the user to input two numbers of their choice

    cout << "\nChoose operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "\nSum: " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "\nDifference: " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "\nProduct: " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "\nQuotient: " << (double)num1 / num2 << endl;
            } else {
                cout << "\nError: Division by zero is not allowed.\n";
            }
            break;
        default:
            cout << "\nInvalid choice.\n";
    }

    cout << "Thank you for using the calculator!\n";
    return 0;
}