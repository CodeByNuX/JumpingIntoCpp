/*
 6. Write a program that displays the first 20 square numbers.
Allain, Alex. Jumping into C++ (p. 89). Cprogramming.com. Kindle Edition.
*/
#include <iostream>

using namespace std;

int main()
{
    cout << "Simple program to compute the square of numbers\n";
    for(int num = 0;num<21;num++)
        {
            // calculate the square root
            cout << "number: " << num << " square: " << num * num << "\n";
        }

}
