#include <iostream>
#include <cmath> // For math functions like sqrt(), pow(), etc.

using namespace std;

int main() {
    double num1, num2;
    int choice;

    cout << "Welcome to the Simple Calculator!" << endl;
    cout << "Select an operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Square Root" << endl;
    cout << "6. Power" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    // Perform the chosen operation
    switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 + num2 << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 - num2 << endl;
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 * num2 << endl;
            break;

        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero is not allowed!" << endl;
            break;

        case 5:
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 >= 0)
                cout << "Square root of " << num1 << " is: " << sqrt(num1) << endl;
            else
                cout << "Error: Cannot calculate square root of a negative number!" << endl;
            break;

        case 6:
            cout << "Enter the base and exponent: ";
            cin >> num1 >> num2;
            cout << "Result: " << pow(num1, num2) << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
 