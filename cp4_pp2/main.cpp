/*
    2. Implement a simple “password” system that takes a password in the form of a number. Make it so that either of two numbers is valid, but use only one if statement to do the check.
    Allain, Alex. Jumping into C++ (p. 76). Cprogramming.com. Kindle Edition.
*/


#include <iostream>
#include <string>

using  namespace std;

int main()
{
    int user_password;

    cout << "\nProgram to implement a simple 'password' system that takes a password in the form of a number. Make it so that either of two numbers is valid,\n";

    cout << "Please input or password:\n";
    cin >> user_password;

    if ((user_password == 1234) || (user_password == 5678))
        {
            cout << "Correct!!!\n";
        }
        else
        {
            cout << "Bad Password\n";
        }

    return 0;
}
