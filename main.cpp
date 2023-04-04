#include <iostream>
#include <cmath>

using namespace std;

double calculator(double num1, double num2, char choice){
    if (choice == '+') {
        cout << "Result is " << num1 + num2;
    } else if (choice == '-') {
        cout << "Result is " << num1 - num2;
    }else if (choice == '*'){
        cout << "Result is " << num1 * num2;
    }else if (choice == '/'){
        double result = num1 / num2;
        cout << "Result is " << result;
    }else {
        cout << "Invalid entry. Try again.";
    }
}
int main()
{
    double num1, num2;
    char choice;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter your choice of operation from +,-,/,*: ";
    cin >> choice;

    calculator(num1, num2, choice);
    return 0;
}
