#include<iostream>
using namespace std;

int main() {
    while (true) {
        double num1, num2;
        char op;
        cout<<"Enter your first number ";
        cin>>num1;
        cout<<"Enter your second number ";
        cin>>num2;
        cout<<"Enter the operator ";
        cin>>op;
                switch (op) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 == 0) {
                    cout << "Cannot divide by zero." << endl;
                } else {
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                }
                break;
            default:
                cout << "Invalid operator." << endl;
                break;
        }
    }
    return 0;
}
      