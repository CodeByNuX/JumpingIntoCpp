/*
    1. Write a program that outputs your name.
    Allain, Alex. Jumping into C++ (p. 60). Cprogramming.com. Kindle Edition.
*/

#import <iostream>
#import <string>

using namespace std;

int main()
{
    string first_name;
    string last_name;

    cout << "Please input your first name? ";
    getline(cin,first_name,'\n');

    cout << "Please input your last name? ";
    getline(cin,last_name,'\n');

    cout << "Your name is: " + first_name + " " + last_name;

    return 0;

}
