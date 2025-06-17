/*

Write a program that performs division of two numbers read from the user and prints out an exact result. Make sure to test your program with both integer inputs and decimal inputs.
Allain, Alex. Jumping into C++ (p. 62). Cprogramming.com. Kindle Edition.

*/

#include <iostream>

using namespace std;


double divide(double dividend, double divisor)
{
    if (divisor == 0)
        {
            throw std::runtime_error("division by zero not allowed");
        }
    return dividend / divisor;
}

int main()
{
    double dividend, divisor, results;

    cout << "Program to divide two numbers\n";
    cout << "Please input dividend:\n";
    cin >> dividend;

    cout << "Please input divisor:\n";
    cin >> divisor;

    results = divide(dividend,divisor);

    cout << "\n Results: ";
    cout << results;
}
