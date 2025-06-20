/*
3. Write a program that computes a running sum of inputs from the user, terminating when the user gives an input value of 0.

Allain, Alex. Jumping into C++ (p. 89). Cprogramming.com. Kindle Edition.

*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Simple program computes running sum, 0 terminates\n";

    int sum,input;
    sum = 0;

    while (true)
        {
            cout << "\nPlease input number: ";
            cin >> input;

            if (input == 0)
                {
                    cout << "\nFinal SUM: " << sum;
                    return 0;
                }
            sum = sum + input;

            cout << "\ncurrent tally: " << sum << "\n";

        }

    return 0;
}
