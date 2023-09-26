// 2.  !! SIMPLE CALCULATOR PROGRAM !!

#include <iostream>
using namespace std;

int main() {
    char operation;
    double a, b, Ans;

    cout << "SIMPLE CALCULATOR" << endl;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> b;
    switch (operation) {
        //Addition
        case '+':
            Ans = a + b;
            cout << "Ans: " << a << " + " << b << " = " << Ans << endl;
            break;
        //Substraction
        case '-':
            Ans = a - b;
            cout << "Ans: " << a << " - " << b << " = " << Ans << endl;
            break;
        //Multiplication
        case '*':
            Ans = a * b;
            cout << "Ans: " << a << " * " << b << " = " << Ans << endl;
            break;
        //Division    
        case '/':
            if (b != 0) {
                Ans = a / b;
                cout << "Ans: " << a << " / " << b << " = " << Ans << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Operation Wrong." << endl;
    }

    return 0;
}