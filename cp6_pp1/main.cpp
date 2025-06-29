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

        int main();

}


int Calculator_ADD(int value1,int value2)
{
    // Calculator ADD two values
    return value1 + value2;
}
int Calculator_Subtract(int value1, int value2)
{
    // Calculator Subtract two values
    return value1 - value2;
}

int Calculator_Multiply(int value1, int value2)
{
    // Calculator Multiple
    return value1 * value2;
}

int Calculator_Divide(int value1, int value2)
{
    // Calculator Divide
    return value1 / value2;
}

void calculator_menu_parse()
{
// Display calculator menu and parse input;
int selected_input;
int value1 = 0;
int value2 = 0;
int results = 0;
while (true)
    {
        cout << "\nCalculator\n";
        cout << "1. ADD\n";
        cout << "2. SUBSTRACT\n";
        cout << "3. MULTIPLY\n";
        cout << "4. DIVIDE\n";
        cout << "0. Exit\n";
        cout << "Please input a choice [1,2,3,4,0]: ";
        cin >> selected_input;

        switch (selected_input)
        {
        case 0:
            return;
        case 1:
            // ADD
            cout << "\nPlease enter first value: ";
            cin >> value1;
            cout << "\nPlease enter second value: ";
            cin >> value2;
            results = Calculator_ADD(value1,value2);
            cout << "\nResults: " << results << "\n";
            break;

        case 2:
            // Subtract
            cout << "\nPlease enter first value: ";
            cin >> value1;
            cout << "\nPlease enter second value: ";
            cin >> value2;
            results = Calculator_Subtract(value1,value2);
            cout << "\nResults: " << results << "\n";
            break;
        case 3:
            //Multiply
            cout << "\nPlease enter first value: ";
            cin >> value1;
            cout << "\nPlease enter second value: ";
            cin >> value2;
            results = Calculator_Multiply(value1,value2);
            cout << "\nResults: " << results << "\n";
            break;
        case 4:
            //Divide
            cout << "\nPlease enter first value: ";
            cin >> value1;
            cout << "\nPlease enter second value: ";
            cin >> value2;
            results = Calculator_Divide(value1,value2);
            cout << "\nResults: " << results << "\n";
            break;
        }

    }
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
                break;
            case 2:
                calculator_menu_parse();
                break;
            }


        }
}

int main()
{
    menu_parse();
}
