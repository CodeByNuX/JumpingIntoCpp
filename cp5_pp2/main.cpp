/*
2. Write a menu program that lets the user select from a list
 of options, and if the input is not one of the options, reprint the list.

Allain, Alex. Jumping into C++ (p. 89). Cprogramming.com. Kindle Edition.
*/

#include <iostream>
#include <string>

using namespace std;

bool menuSelect(int expression)
{
    // evaluate the input from the user, using switch
    switch (expression){
    case 1:
        return false;
    case 2:
        return false;
    case 3:
        return false;
    default:
        return true;
    }

}

int main()
{
    bool results = true;
    int choice;
    string string_choice;

    cout << "A simple menu program\n" << endl;

    while (results)
        {
            cout << "\nMenu:\n";
            cout << "1. Menu option 1\n";
            cout << "2. Menu option 2\n";
            cout << "3. Menu option 3\n";
            cout << "\n";

            cout << "Please select an option from the menu.\n";
            cout << "option: ";


            getline(cin,string_choice);
             //convert string to int
             choice = stoi(string_choice);

             // store the value of menuSelect in results
             results = menuSelect(choice);
        }

    cout << "Bye!\n";

    return 0;
}
