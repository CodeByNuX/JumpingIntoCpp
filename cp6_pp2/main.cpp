/*
2. Make your calculator program perform computations in a separate function for
each type of computation.

Allain, Alex. Jumping into C++ (p. 104). Cprogramming.com. Kindle Edition.
*/

#include <iostream>

using namespace std;

int add(int value1, int value2)
{
    //Add
    return value1 + value2;
}

int subtract(int value1, int value2)
{
    return value1 - value2;
}

int multiply(int value1, int value2)
{
    return value1 * value2;
}

int divide(int value1, int value2)
{
    return value1 / value2;
}

int Calculator_Menu()
{
    int selected_input;
    int value1 = 0;
    int value2 = 0;
    while (true)
        {
            cout << "Calculator\n";
            cout << "1. ADD\n";
            cout << "2. SUBTRACT\n";
            cout << "3. MULTIPLY\n";
            cout << "4. DIVIDE\n";
            cout << "0. Exit\n";
            cout << "Please make a selection [1,2,4,0]: ";
            cin >> selected_input;

            if (selected_input == 0)
                {
                    // Exit
                    return 0;
                }

            cout << "\nValue1: ";
            cin >> value1;
            cout <<"\nValue2: ";
            cin >> value2;

            switch(selected_input)
            {

            case 1:
                //add
                cout << "\nResults: " << add(value1,value2);
                break;
            case 2:
                //subtract
                cout << "\nResults: " << subtract(value1,value2);
                break;
            case 3:
                //multiply
                cout << "\nResults: " << multiply(value1,value2);
                break;
            case 4:
                // Divide
                cout << "\nResults: " << divide(value1,value2);
                break;

            }
            cout << "\n";
            cout << "\n";
        }
}


int main()
{
Calculator_Menu();
return 0;
}
