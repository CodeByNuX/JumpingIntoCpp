/*
4. Expand the password checking program from earlier in this chapter and
make it take multiple usernames, each with their own password, and ensure
that the right username is used for the right password. Provide the ability to
prompt users again if the first login attempt failed. Think about how easy
(or hard) it is to do this for a lot of usernames and passwords.

Allain, Alex. Jumping into C++ (p. 76). Cprogramming.com. Kindle Edition.
*/



#include <iostream>
#include <string>

using namespace std;

struct Account {
    string username;
    int password;
};

bool checkAccount(string username, int password)
{
    Account user1,user2;
    user1.username = "John";
    user1.password = 1234;

    user2.username = "Jack";
    user2.password = 5678;

    if ((username == user1.username) && (password == user1.password))
        {
            return true;
        }
    if ((username == user2.username) && (password == user2.password))
        {
            return true;
        }

        return false;


}
int main()
{
    /*
        If ever someone reads this..
        Up to this point in the book, the author does not cover loops.

    */

    cout << "Simple program for password checking\n";

    while (true)
        {

            string username;
            int password;
            string string_password;

            cout << "\nPlease enter your username: ";
            getline(cin,username);
            cout << "\nPlease enter your password: ";
            getline(cin,string_password);

            //convert string to integer
            password = stoi(string_password);

            if (checkAccount(username,password))
                {
                    cout << "\nUsername and Password is correct!!\n";
                    return 0; // we are good, bail out of program.
                } else
                {
                    //let the user know.
                    cout << "\nUsername / Password is incorrect, please try again\n";
                }
                // fulfill the application request of reprompting
        }

    return 0;
}
