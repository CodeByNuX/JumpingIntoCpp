/*

3. Write a small calculator that takes as input one of the four arithmetic operations,
the two arguments to those operations, and then prints out the result.
Allain, Alex. Jumping into C++ (p. 76). Cprogramming.com. Kindle Edition.

*/

#include <iostream>

using namespace std;

int main()
{

    string oper; //operator
    double argument_1, argument_2, results;

    cout << "Small calculator that takes as input on of the 4 arithmetic operations\n";

    cout << "Please input arithmetic operator: [/,*,+,-]\n";
    cin >> oper;

    cout << "Please input your first number:\n";
    cin >> argument_1;

    cout << "Please input your second number:\n";
    cin >> argument_2;

    if (oper == "/")
        {
            results = (argument_1 / argument_2);
        }
    if (oper == "*")
        {
            results = (argument_1 * argument_2);
        }
    if (oper == "+")
        {
            results = (argument_1 + argument_2);
        }
    if (oper == "-")
        {
            results = (argument_1 - argument_2);
        }

    cout << "Results:\n";
    cout << results;

    return 0;
}
