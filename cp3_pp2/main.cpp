/*
  2. Write a program that reads in two numbers and adds them together.
  Allain, Alex. Jumping into C++ (p. 60). Cprogramming.com. Kindle Edition.
*/

#include <iostream>
#include <string>

using namespace std;

int add(int value_1,int value_2)
{
    // Adds two values together
    return value_1 + value_2;
}

int main()
{
    int value_1, value_2, results;
    // ask user for value_1 and value_2
    cout << "Program that adds two integers together:\n\n";
    cout << "Please input value 1: ";
    cin >> value_1;

    cout << "Please input value 2: ";
    cin >> value_2;

    // use function add for value_1 and value_2
    results = add(value_1,value_2);

    cout << "Results:\n";
    cout << results;


    return 0;

}


