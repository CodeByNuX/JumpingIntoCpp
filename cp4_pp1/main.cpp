/*
1. Ask the user for two users’ ages, and indicate who is older; behave differently if both are over 100.
Allain, Alex. Jumping into C++ (p. 76). Cprogramming.com. Kindle Edition.
*/

#include <iostream>

using namespace std;

int main()
{

    int user_age_1, user_age_2;

    cout << "Program to ask the user for two users' ages, and indicate who is older.\n\n";

    cout << "Please input the first age:\n";
    cin >> user_age_1;
    cout << "Please input the second age:\n";
    cin >> user_age_2;

    if((user_age_1 > user_age_2) || (user_age_1 > 100) || (user_age_2 > 100))
        {
            if((user_age_1 > 100) || (user_age_2 > 100))
                {
                    cout << "WHOA!!! You are old!!!!\n";
                }
                else
                {
                    cout <<"user 1 is older\n";
                }

        }
        else
        {
            cout << "user 2 is older\n";
        }

    return 0;

}
