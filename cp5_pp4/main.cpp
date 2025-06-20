/*
4. Write a password prompt that gives a user only a certain number of password
entry attempts—so that the user cannot easily write a password cracker.

Allain, Alex. Jumping into C++ (p. 89). Cprogramming.com. Kindle Edition.
*/

#include <iostream>

using namespace std;


int main()
{
    cout << "This is a simple password prompt.\n";
    string password = "mypassword";
    string input;

   for (int i=3;i>0;i--)
    {
        cout << "\nYou have " << i << " tries left\n";
        cout << "Please enter your password:\n";

        getline(cin,input);

        if (input == password)
            {
                cout << "Password correct!";
                return 0;
            } else {

            cout << "incorrect, please try again.\n";




            }
    }
    return 0;
}

