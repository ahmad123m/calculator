#include <iostream>
#include <cmath>

using namespace std;

void showMenu() {
    cout << "Select operation:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Power (^)\n";
    cout << "6. Square Root (sqrt)\n";
    cout << "7. Sine (sin)\n";
    cout << "8. Cosine (cos)\n";
    cout << "0. Exit\n";
}

int main() {
    int choice;
    double num1, num2, result;

    while (true) {
        showMenu();
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting the program.\n";
            break;
        } else if (choice == 1) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
        } else if (choice == 2) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
        } else if (choice == 3) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
        } else if (choice == 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 == 0) {
                cout << "Error: Division by zero!\n";
            } else {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            }
        } else if (choice == 5) {
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            result = pow(num1, num2);
            cout << "Result: " << num1 << " ^ " << num2 << " = " << result << endl;
        } else if (choice == 6) {
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 < 0) {
                cout << "Error: Square root of a negative number!\n";
            } else {
                result = sqrt(num1);
                cout << "Result: sqrt(" << num1 << ") = " << result << endl;
            }
        } else if (choice == 7) {
            cout << "Enter an angle in radians: ";
            cin >> num1;
            result = sin(num1);
            cout << "Result: sin(" << num1 << ") = " << result << endl;
        } else if (choice == 8) {
            cout << "Enter an angle in radians: ";
            cin >> num1;
            result = cos(num1);
            cout << "Result: cos(" << num1 << ") = " << result << endl;
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}