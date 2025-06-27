/*

1. Take the “menu program” you wrote earlier and break it out into a
series of calls to functions for each of the menu items. Add the
calculator and “99 Bottles of Beer” as two different functions that
can be called.

Allain, Alex. Jumping into C++ (p. 104). Cprogramming.com. Kindle Edition.

*** I don't remember the menu program written earlier.
Will reWrite, good practice.

*/
#include <iostream>

using namespace std;

void ninty9_bottles()
{
    // Display 99 bottles of beer to the screen

    for(int i = 99;i>0;i--)
        {
            if (i==1)
            {
                // single
                cout << "\n" << i << " bottle of beer on the wall.\n"
                << i
                << " bottle of beer.\n"
                << "if one of the bottle just happen to fall,\n"
                << i-1 << " bottle of beer on the wall.\n";
            } else
            {
                // plural
                cout << "\n" << i << " bottles of beer on the wall.\n"
                << i
                << " bottles of beer.\n"
                << "if one of the bottles just happen to fall, \n"
                << i-1 << " bottles of beer on the wall.\n";
            }
        }

}

void calculator_menu_parse()
{

}

int menu_parse()
{
    //Display menu, and parse input

    int selected_input;

    while (true)
        {
            cout << "\nMenu:\n";
            cout << "1. 99 Bottles of Beer.\n";
            cout << "2. Calculator.\n";
            cout << "0. Quit\n";
            cout << "Please input a choice [1,2,0]: ";
            cin >> selected_input;

            switch (selected_input)
            {
            case 0:
                return 0;
            case 1:
                ninty9_bottles();
            case 2:
                return 0;
            }


        }
}

int main()
{
    menu_parse();
}
