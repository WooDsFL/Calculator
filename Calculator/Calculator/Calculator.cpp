/*
 * Calculator.cpp
 *
 *  Date: 07/13/25
 *  Author: Timothy Woods
 */

#include <iostream>
using namespace std;

int main() {  // Changed from void main() to int main() for portability and correctness
    int op1, op2;
    char operation;
    char answer = 'Y';  // Changed double quotes to single quotes for a char

    while (answer == 'Y' || answer == 'y') {  // Allow both uppercase and lowercase 'Y'
        cout << "Enter expression (e.g., 2 + 3): " << endl;
        cin >> op1 >> operation >> op2;  // Corrected input order to match math convention

        // Removed semicolons after if statements and fixed logical expressions
        if (operation == '+') {
            cout << op1 << " + " << op2 << " = " << (op1 + op2) << endl;
        }
        else if (operation == '-') {
            cout << op1 << " - " << op2 << " = " << (op1 - op2) << endl;
        }
        else if (operation == '*') {
            cout << op1 << " * " << op2 << " = " << (op1 * op2) << endl;
        }
        else if (operation == '/') {
            if (op2 != 0) {
                cout << op1 << " / " << op2 << " = " << (op1 / op2) << endl;
            }
            else {
                cout << "Error: Division by zero!" << endl;
            }
        }
        else {
            cout << "Invalid operation!" << endl;
        }

        cout << "Do you wish to evaluate another expression? (Y/N): ";
        cin >> answer;
    }

    cout << "Program Finished." << endl;  // Final message per prompt requirement
    return 0;
}