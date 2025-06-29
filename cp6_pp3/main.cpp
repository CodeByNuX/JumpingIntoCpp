/*
3. Modify your password program from before to put all of the password checking
logic into a separate function, apart from the rest of the program.

Allain, Alex. Jumping into C++ (p. 104). Cprogramming.com. Kindle Edition.

*** NOTE:  I don't remember the password program from before;

*/
#include <iostream>

using namespace std;


int check_password(int input)
{
    int password = 1234;

    if (input == password)
    {
        // we are good
        return 0;
    } else {
        return 1;
    }

}

int main()
{
    cout << "Simple program to check passwords\n";
    int user_input = 1; // User's input;
    while (true)
        {
            // Get user input
            cout << "\nPlease input your password: ";
            cin >> user_input;

            if (check_password(user_input) == 0)
                {
                    cout << "\nPassword is correct!\n";
                    return 0;
                } else
                {
                    cout << "\nPassword is incorrect!\n";
                }

        }
}
